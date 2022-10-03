`include "ysyx_22040127_mycpu.v"

//4-way set-associative
module ysyx_22040127_dcache(
    input clk,
    input rst,

    //inputs:from cpu to cache
    input        fencei,
    input [63:0] input_addr,
    input [63:0] input_wdata,
    input        input_memwrite,
    input        input_memread,
    input        input_valid,//ex_to_mem_valid
    input [1:0]  input_size,
    input [7:0]  input_strb,//bitmask
    output [63:0] output_data,//hazard TBD
    output        cache_pipelinehit,
    output reg  [2:0]cache_state,
    output reg[63:0] diff_data,
    output reg[63:0] diff_addr,

    //sram<->axi
    output reg   [63:0]axi_req_addr,//last 4 digit always is 0
    output reg   [7:0] axi_req_strb,
    output reg   [`CACHE_DATA_SIZE - 1:0] axi_req_data,
    output reg   axi_req_wen,
    output reg   axi_req_valid,
    output       mmio,
    input axi_res_valid,
    input [`CACHE_DATA_SIZE - 1:0] axi_mrdata
);

    reg[1:0] input_size_reg;
    reg[3:0] input_offset_reg;
    reg cache_way0hit_reg;
    reg cache_way1hit_reg;
    reg mmio_ok;

    always @(posedge clk) begin
        input_size_reg <= input_size;
        cache_way0hit_reg <= cache_way0hit;
        cache_way1hit_reg <= cache_way1hit;
        input_offset_reg  <= input_offset;
    end
    import "DPI-C" function void pmem_read(//memread isn't working
    input longint raddr, output longint doubly_aligned_data);
    import "DPI-C" function void pmem_write(
    input longint waddr, input longint wdata, input byte wmask);

    
    reg   [31:0] mem_addr;
    reg   mem_wen;//size is deprecated for now


    localparam IDLE = 3'b000, LOOKUP = 3'b001, MISS = 3'b010,
    REFILL = 3'b100, MISS_STALL = 3'b101, REFILL_STALL = 3'b110, FENCEI = 3'b011, FENCEI_STALL = 3'b111;
    localparam SETS = 128;

    reg          cache_way0D[SETS - 1:0];
    reg          cache_way1D[SETS - 1:0];

    reg          cache_way0V[SETS - 1:0];
    reg          cache_way1V[SETS - 1:0];

    reg  [20:0]  cache_way0tags[SETS - 1:0];
    reg  [20:0]  cache_way1tags[SETS - 1:0];

    wire [20:0]  input_tag    = input_addr[31:11]; //high
    wire [6:0]   input_index  = input_addr[10:4];  //mid(8-2=6:[5:0])
    wire [3:0]   input_offset = input_addr[3:0];   //low

    reg  [6:0]   cache_index_reg;
    reg  [3:0]   cache_offset_reg;

    wire  [`CACHE_DATA_SIZE - 1:0] cache_strb;
    wire          cache_wen_way0;
    wire          cache_wen_way1;
    wire  [`CACHE_DATA_SIZE - 1:0] cache_wdata;
    wire          cache_miss;

    reg[6:0]     fencei_cnt;
    reg          fencei_ok;
    reg          cache_wen_way0_reg;
    reg          cache_wen_way1_reg;

    wire [63:0]                   ex_cache_strb;  //to be initialized,strb for one bank

    wire [`CACHE_DATA_SIZE - 1:0] cache_rdata_way0;
    wire [`CACHE_DATA_SIZE - 1:0] cache_rdata_way1;

    wire cache_way0hit = (cache_way0tags[input_index] == input_tag & cache_way0V[input_index]) 
    && input_valid && !mmio && !fencei || fencei_ok && fencei || mmio_ok && mmio;
    wire cache_way1hit = (cache_way1tags[input_index] == input_tag & cache_way1V[input_index])
    && input_valid && !mmio && !fencei || fencei_ok && fencei || mmio_ok && mmio;
    wire cache_way0dirty  = cache_way0D[input_index] & input_valid;
    wire cache_way1dirty  = cache_way1D[input_index] & input_valid;
    wire cache_way0valid  = cache_way0V[input_index] & input_valid;
    wire cache_way1valid  = cache_way1V[input_index] & input_valid;
    //*do not accept request if cache is empty!
    //*cache_state == IDLE?

    //choose bank(always follow the sram output)
    wire[63:0] output_data_way0 = input_offset_reg[3] ? cache_rdata_way0[127:64] : cache_rdata_way0[63:0];
    wire[63:0] output_data_way1 = input_offset_reg[3] ? cache_rdata_way1[127:64] : cache_rdata_way1[63:0];

    //strb 
    wire[63:0] ex_cache_wdata;
    wire cache_raw_way0;
    wire cache_raw_way1;
    wire cache_raw;   
    reg  mmio_mem;
    reg [63:0]mmio_rdata_reg;
    assign mmio = input_addr[31:28] == 4'ha && input_valid;
    assign cache_wdata[127:64] = ({64{cache_state == IDLE & input_addr[3] == 1'b1
    | cache_state == LOOKUP & input_addr[3] == 1'b1}} & ex_cache_wdata) |
    ({64{cache_state == REFILL & input_memwrite & input_addr[3]}} & ex_cache_wdata) |
    ({64{cache_state == REFILL & input_memwrite & !input_addr[3]}} & axi_mrdata[127:64]) |
    ({64{cache_state == REFILL & !input_memwrite}} & axi_mrdata[127:64]);
    assign cache_wdata[63:0] = ({64{cache_state == IDLE & input_addr[3] == 1'b0
    | cache_state == LOOKUP & input_addr[3] == 1'b0}} & ex_cache_wdata) |
    ({64{cache_state == REFILL & input_memwrite & input_addr[3]}} & axi_mrdata[63:0]) |
    ({64{cache_state == REFILL & input_memwrite & !input_addr[3]}} & ex_cache_wdata) |
    ({64{cache_state == REFILL & !input_memwrite}} & axi_mrdata[63:0]);

    
    assign cache_wen_way0 = (cache_way0hit & input_memwrite & cache_state == IDLE |
    (!cache_raw_way0 & cache_state == LOOKUP & cache_way0hit & input_memwrite) |
    (axi_res_valid & cache_state == REFILL & !(cache_way0dirty & cache_way0valid))) & !mmio;

    assign cache_wen_way1 = (cache_way1hit & input_memwrite & cache_state == IDLE |
    (!cache_raw_way1 & cache_state == LOOKUP & cache_way1hit & input_memwrite) |
    (axi_res_valid & cache_state == REFILL & !(cache_way1dirty & cache_way1valid) &
                     (cache_way0dirty & cache_way0valid))) & !mmio;//refill:mem->cache
    //hit && memread -> wen = 0
    

    assign cache_strb[127:64] = ({64{input_addr[3] == 1'b1 & (cache_way0hit | cache_way1hit)
    & (cache_state == IDLE | cache_state == LOOKUP)}} & ex_cache_strb)//&!raw
    | {64{axi_res_valid & cache_state == REFILL}};

    assign cache_strb[63:0] = ({64{input_addr[3] == 1'b0 & (cache_way0hit | cache_way1hit)
    & (cache_state == IDLE | cache_state == LOOKUP)}} & ex_cache_strb)//&!raw
    | {64{axi_res_valid & cache_state == REFILL}};

    assign  cache_pipelinehit = (cache_state == IDLE & (cache_way0hit | cache_way1hit | fencei_ok))
     || (cache_state == LOOKUP & ((!cache_raw & (cache_way0hit | cache_way1hit)) | fencei_ok));
    //supposed to be inputs:

    assign cache_raw_way0 = cache_way0hit & cache_wen_way0_reg
                & input_memread & input_index == cache_index_reg
                & input_addr[3] == cache_offset_reg[3] & (cache_state == LOOKUP);
    assign cache_raw_way1 = cache_way1hit & cache_wen_way1_reg
                & input_memread & input_index == cache_index_reg
                & input_addr[3] == cache_offset_reg[3] & (cache_state == LOOKUP);
    assign cache_raw = cache_raw_way0 | cache_raw_way1;

    assign cache_miss = cache_way1dirty & cache_way0valid & cache_way0dirty & cache_way1valid
    & (cache_state == IDLE   & !(cache_way0hit | cache_way1hit) | 
      (cache_state == LOOKUP & (cache_raw & !cache_way0hit 
      & !cache_way1hit | !cache_way0hit & !cache_way1hit)) );

    /*
    always @(*)begin
        if(mmio && input_memread)begin
            pmem_read(input_addr & 64'hffffffff_fffffff8, mmio_rdata);//ok(create mmio_rdate_reg)
        end else if(mmio && input_memwrite)begin
            pmem_write(input_addr & 64'hffffffff_fffffff8,input_wdata,input_strb);
        end

    end
    */
    wire cache_way0fencev = cache_way0V[fencei_cnt];
    wire cache_way0fenced = cache_way0D[fencei_cnt];
    wire cache_way1fencev = cache_way1V[fencei_cnt];
    wire cache_way1fenced = cache_way1D[fencei_cnt];
    assign output_data = mmio_mem ? mmio_rdata_reg : cache_way0hit_reg ? output_data_way0: output_data_way1;
    
    assign ex_cache_strb[63:0] = {{8{input_strb[7]}},{8{input_strb[6]}}, 
    {8{input_strb[5]}}, {8{input_strb[4]}},{8{input_strb[3]}}, 
    {8{input_strb[2]}}, {8{input_strb[1]}}, {8{input_strb[0]}}};


    assign ex_cache_wdata = (input_size == 2'b00) ?
    ({64{input_addr[3:0] == 4'b1000}} & {axi_mrdata[63+64:8+64], input_wdata[7:0]} |
    {64{input_addr[3:0] == 4'b1001}} & {axi_mrdata[63+64:16+64], input_wdata[7:0], axi_mrdata[7+64:0+64]} |
    {64{input_addr[3:0] == 4'b1010}} & {axi_mrdata[63+64:24+64], input_wdata[7:0], axi_mrdata[15+64:0+64]} |
    {64{input_addr[3:0] == 4'b1011}} & {axi_mrdata[63+64:32+64], input_wdata[7:0], axi_mrdata[23+64:0+64]} |
    {64{input_addr[3:0] == 4'b1100}} & {axi_mrdata[63+64:40+64], input_wdata[7:0], axi_mrdata[31+64:0+64]} |
    {64{input_addr[3:0] == 4'b1101}} & {axi_mrdata[63+64:48+64], input_wdata[7:0], axi_mrdata[39+64:0+64]} |
    {64{input_addr[3:0] == 4'b1110}} & {axi_mrdata[63+64:56+64], input_wdata[7:0], axi_mrdata[47+64:0+64]} |
    {64{input_addr[3:0] == 4'b1111}} & {input_wdata[7:0], axi_mrdata[55+64:0+64]}) |

    ({64{input_addr[3:0] == 4'b0000}} & {axi_mrdata[63:8], input_wdata[7:0]}  |
    {64{input_addr[3:0] == 4'b0001}} & {axi_mrdata[63:16], input_wdata[7:0], axi_mrdata[7:0]} |
    {64{input_addr[3:0] == 4'b0010}} & {axi_mrdata[63:24], input_wdata[7:0], axi_mrdata[15:0]} |
    {64{input_addr[3:0] == 4'b0011}} & {axi_mrdata[63:32], input_wdata[7:0], axi_mrdata[23:0]} |
    {64{input_addr[3:0] == 4'b0100}} & {axi_mrdata[63:40], input_wdata[7:0], axi_mrdata[31:0]} |
    {64{input_addr[3:0] == 4'b0101}} & {axi_mrdata[63:48], input_wdata[7:0], axi_mrdata[39:0]} |
    {64{input_addr[3:0] == 4'b0110}} & {axi_mrdata[63:56], input_wdata[7:0], axi_mrdata[47:0]} |
    {64{input_addr[3:0] == 4'b0111}} & {input_wdata[7:0], axi_mrdata[55:0]}) :
    (input_size == 2'b01) ?
    ({64{input_addr[3:1] == 3'b100}} & {axi_mrdata[63+64:16+64], input_wdata[15:0]} |
    {64{input_addr[3:1] == 3'b101}} & {axi_mrdata[63+64:32+64], input_wdata[15:0], axi_mrdata[15+64:0+64]} |
    {64{input_addr[3:1] == 3'b110}} & {axi_mrdata[63+64:48+64], input_wdata[15:0], axi_mrdata[31+64:0+64]} |
    {64{input_addr[3:1] == 3'b111}} & {input_wdata[15:0], axi_mrdata[47+64:0+64]})  |

    ({64{input_addr[3:1] == 3'b000}} & {axi_mrdata[63:16], input_wdata[15:0]} |
    {64{input_addr[3:1] == 3'b001}} & {axi_mrdata[63:32], input_wdata[15:0], axi_mrdata[15:0]} |
    {64{input_addr[3:1] == 3'b010}} & {axi_mrdata[63:48], input_wdata[15:0], axi_mrdata[31:0]} |
    {64{input_addr[3:1] == 3'b011}} & {input_wdata[15:0], axi_mrdata[47:0]}) :
    (input_size == 2'b10) ?
    (input_addr[3:2] == 2'b10 ? {axi_mrdata[63+64:32+64], input_wdata[31:0]}
    :input_addr[3:2] == 2'b11 ?{input_wdata[31:0], axi_mrdata[31+64:0+64]}
    :input_addr[3:2] == 2'b00 ? {axi_mrdata[63:32], input_wdata[31:0]}
    :{input_wdata[31:0], axi_mrdata[31:0]})
    : input_wdata;
    //axi_mrdata_high
    
    always @(posedge clk) begin
        if(rst)begin
            for(int i = 0; i < SETS; i = i + 1)begin
                cache_way0tags[i] = 0;
                cache_way0D[i] = 0;
                cache_way0V[i] = 0;
                cache_way1tags[i] = 0;
                cache_way1D[i] = 0;
                cache_way1V[i] = 0;
            end
        end
    end
    //reg cache_way0hitbuf;
    //reg cache_way1hitbuf;
    reg cnt=0;
    always @(posedge clk)begin
        mmio_rdata_reg <= axi_mrdata[63:0];
        mmio_mem <= mmio_ok & mmio;
        case(cache_state)
            IDLE: 
            begin
                mmio_ok <= 0;
                if(!fencei)fencei_ok <= 0;
                if(fencei & !fencei_ok)begin
                    cache_state <= FENCEI;
                end else if(mmio & mmio_ok)cache_state <= IDLE;
                else if(cache_way0hit | cache_way1hit)begin
                    cache_offset_reg <= input_offset;
                    if(input_memwrite) cache_index_reg <= input_index;

                    if(cache_way0hit)begin
                        cache_wen_way0_reg <= input_memwrite;
                        cache_way0V[input_index] <= 1'b1;
                        if(!cache_way0D[input_index])cache_way0D[input_index] <= input_memwrite;
                    end else begin
                        cache_wen_way1_reg <= input_memwrite;
                        cache_way1V[input_index] <= 1'b1;
                        if(!cache_way1D[input_index])cache_way1D[input_index] <= input_memwrite;
                    end
                    //write op
                    //diff_output_ready <= 1'b1;
                    diff_data         <= ex_cache_wdata;
                    diff_addr         <= input_addr;
                    cache_state <= LOOKUP;
                    //both way0 and way1 should be replaced, randomly choose one
                end else if(mmio & !mmio_ok)begin
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    cache_state <= REFILL;
                end else if(cache_way1dirty & cache_way0valid & cache_way0dirty & cache_way1valid) begin
                    //block2(tillend)(eviction)
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    //diff_output_ready  <= 1'b0;
                    cnt <= cnt + 1;
                    cache_state <= MISS;
                end else if(!input_valid)begin
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    //diff_output_ready  <= 1'b0;
                    cache_state <= IDLE;
                end else begin
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    //diff_output_ready  <= 1'b0;
                    cache_state <= REFILL;
                end
            end
            LOOKUP://answer to previous clock cycle(pipelined)
            begin 
                mmio_ok <= 1'b0;
                if(!fencei)fencei_ok <= 0;
                if(fencei & !fencei_ok)begin
                    cache_state <= FENCEI;
                end else if(mmio & mmio_ok)cache_state <= IDLE;
                else if(!cache_raw & (cache_way0hit | cache_way1hit))begin//read hit/write hit
                    cache_offset_reg <= input_offset;
                    if(input_memwrite) cache_index_reg <= input_index;
                    if(cache_way0hit)begin
                        cache_wen_way0_reg <= input_memwrite;
                        cache_way0V[input_index] <= 1'b1;
                        if(!cache_way0D[input_index])cache_way0D[input_index] <= input_memwrite;
                    end
                    else begin
                        cache_wen_way1_reg <= input_memwrite;
                        cache_way1V[input_index] <= 1'b1;
                        if(!cache_way1D[input_index])cache_way1D[input_index] <= input_memwrite;
                    end

                    //write op
                    //diff_output_ready <= input_memwrite;//data is assigned
                    diff_data         <= ex_cache_wdata;
                    diff_addr         <= input_addr;
                    cache_state <= LOOKUP;
                end else if(cache_way0hit | cache_way1hit)begin //raw
                    //diff_output_ready   <= 1'b0;
                    cache_state    <= IDLE;
                end else if(mmio & !mmio_ok)begin
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    cache_state <= REFILL;
                end else if(cache_way1dirty & cache_way0valid & cache_way0dirty & cache_way1valid) begin
                    //block2(tillend)(eviction)
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    cnt <= cnt + 1;
                    cache_state <= MISS;
                end else if(!input_valid)begin
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    cache_state <= IDLE;
                end else begin
                    cache_wen_way0_reg <= 1'b0;
                    cache_wen_way1_reg <= 1'b0;
                    cache_state <= REFILL;
                end
                
            end
            MISS:
            begin

                if(!cnt && !axi_req_valid)begin//write back(random eviction)
                    axi_req_addr  <= {32'b0, cache_way0tags[input_index], input_index, 4'b0};
                    
                    axi_req_data  <= cache_rdata_way0;
                    axi_req_valid <= 1'b1;
                end else if(!axi_req_valid) begin
                    axi_req_addr  <= {32'b0, cache_way1tags[input_index], input_index, 4'b0}; 
                    axi_req_data  <= cache_rdata_way1;
                    axi_req_valid <= 1'b1;
                end
            
                if(!axi_res_valid)begin
                    //if(axi_req_addr == 64'h8001dc10)$display("dcache write axi with addr 0x%0h, data is 0x%0h", axi_req_addr, axi_req_data);
                   
                    axi_req_strb  <= 8'b11111111;
                    axi_req_wen   <= 1'b1;
                    cache_state <= MISS;
                end else begin
                    //if(axi_req_addr == 64'h8001dc10)$display("after dcache write axi with addr 0x%0h, data is 0x%0h", axi_req_addr, axi_req_data);
                    axi_req_valid <= 1'b0;
                    axi_req_wen   <= 1'b0;
                    cache_state <= MISS_STALL;
                end
            end
            MISS_STALL:
            begin
                cache_state <= REFILL;
                if(!cnt)begin//write back(random eviction)
                    cache_way0D[input_index] <= 1'b0;
                    cache_way0V[input_index] <= 1'b0;
                end else begin
                    cache_way1D[input_index] <= 1'b0;
                    cache_way1V[input_index] <= 1'b0;
                end
            end
            FENCEI://3'b011
            begin
                
                if(!(cache_way0fencev & cache_way0fenced)
                & !(cache_way1fencev & cache_way1fenced) & !axi_req_valid)begin
                    fencei_cnt <= fencei_cnt + 1;
                    if(fencei_cnt == 7'h7f)begin
                        fencei_ok   <= 1'b1;
                        cache_state <= IDLE;
                    end else cache_state <= FENCEI_STALL;
                end else if(cache_way0fencev & cache_way0fenced & !axi_req_valid)begin//write back(random eviction)
                    axi_req_addr  <= {32'b0,cache_way0tags[fencei_cnt], fencei_cnt, 4'b0};
                    axi_req_data  <= cache_rdata_way0;
                    axi_req_valid <= 1'b1;
                end else if(!axi_req_valid) begin
                    axi_req_addr  <= {32'b0,cache_way1tags[fencei_cnt], fencei_cnt, 4'b0};
                    axi_req_data  <= cache_rdata_way1;
                    axi_req_valid <= 1'b1;
                end
                
                if(!axi_res_valid)begin
                    axi_req_strb  <= 8'b11111111;
                    axi_req_wen   <= 1'b1;
                end else if(axi_res_valid)begin
                    axi_req_valid <= 1'b0;
                    axi_req_wen   <= 1'b0;
                    if(cache_way0fencev & cache_way0fenced)begin
                        cache_way0D[fencei_cnt] <= 1'b0;
                        cache_way0V[fencei_cnt] <= 1'b0;
                    end else if(cache_way1fencev & cache_way1fenced) begin
                        cache_way1D[fencei_cnt] <= 1'b0;
                        cache_way1V[fencei_cnt] <= 1'b0;
                    end
                end

            end
            FENCEI_STALL:begin
                cache_state <= FENCEI;
            end
            REFILL://3'b100
            begin
                if(axi_res_valid) begin

                    if(!mmio)begin
                        if(cache_wen_way0)cache_way0tags[input_index] <= input_tag;
                        else if(cache_wen_way1)cache_way1tags[input_index] <= input_tag; //?
                        if(cache_wen_way0)cache_way0D[input_index] <= cache_wen_way0 & input_memwrite;
                        if(cache_wen_way1)cache_way1D[input_index] <= cache_wen_way1 & input_memwrite;
                        cache_way0V[input_index] <= cache_way0V[input_index] | cache_wen_way0;
                        cache_way1V[input_index] <= cache_way1V[input_index] | cache_wen_way1;
                    end else begin
                        mmio_ok <= 1'b1;
                    end
                    axi_req_valid <= 1'b0;
                    //axi_res_valid <= 1'b0;
                    cache_state <= REFILL_STALL;
                end else begin
                    
                    cache_state <= REFILL;
                    if(!mmio)axi_req_addr  <= input_addr & 64'hffffffff_fffffff0;//&
                    else begin
                        if(input_memwrite)axi_req_addr <= input_addr & 64'hffffffff_fffffffC;
                        else axi_req_addr <= input_addr & 64'hffffffff_fffffff8;
                        
                    end
                    if(mmio & input_memwrite)begin
                        axi_req_data  <= {64'b0, input_wdata};
                        axi_req_strb  <= 8'b11111111;
                    end
                    axi_req_valid <= 1'b1;
                    axi_req_wen   <= mmio & input_memwrite;
                end
            end

            REFILL_STALL://write allocate(read miss)110
            begin
                cache_wen_way0_reg <= 1'b0;
                cache_wen_way1_reg <= 1'b0;
                //diff_output_ready <= input_memwrite;
                diff_addr         <= input_addr;
                diff_data         <= ex_cache_wdata;
                cache_state <= IDLE;
            end

            default:;
        endcase

    end

S011HD1P_X32Y2D128_BW dcache_way1(
    .Q(cache_rdata_way0),//ex
    .CLK(clk),
    .CEN(input_memread | cache_miss | fencei & !fencei_ok),//ex cache_miss for cases when memwrite & 2ways are dirsy&valid
    .WEN(cache_wen_way0),//mem or later
    .BWEN(cache_strb),//mem or later
    .A(fencei & !fencei_ok ? fencei_cnt : input_index),//ex
    .D(cache_wdata)//128
);
S011HD1P_X32Y2D128_BW dcache_way2(
    .Q(cache_rdata_way1),//ex
    .CLK(clk),
    .CEN(input_memread | cache_miss | fencei & !fencei_ok),//ex
    .WEN(cache_wen_way1),//mem or later
    .BWEN(cache_strb),//mem or later
    .A(fencei & !fencei_ok ? fencei_cnt : input_index),//ex
    .D(cache_wdata)//128
);
endmodule