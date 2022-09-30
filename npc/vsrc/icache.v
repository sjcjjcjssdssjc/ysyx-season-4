`include "ysyx_22040127_mycpu.v"

//4-way set-associative
module ysyx_22040127_icache(
    input clk,
    input rst,

    //inputs:from cpu to cache
    input [63:0] input_addr,
    input [63:0] input_wdata,
    input        input_memwrite,//always 0
    input        input_memread,
    input        input_valid,
    input        load_branch,
    input        id_allowin,
    output [63:0] output_data,
    output        cache_pipelinehit,
    output reg  [2:0]cache_state,
    output reg    ecall_stuck,//mod 4
    output reg    mret_stuck,
    input         wb_ecall,
    input         wb_mret,

    //sram&axi
    output reg[63:0] axi_req_addr,
    output reg       axi_req_valid,
    input            axi_res_valid,
    input [`CACHE_DATA_SIZE-1:0] axi_mrdata
);

    reg[3:0] input_offset_reg;
    reg cache_way0hit_reg;
    reg cache_way1hit_reg;
    always @(posedge clk) begin
        cache_way0hit_reg <= cache_way0hit;//?
        cache_way1hit_reg <= cache_way1hit;//?
        input_offset_reg  <= input_offset;
    end

    
    reg   [31:0] mem_addr;
    reg   mem_wen;//size is deprecated for now
    wire   [7:0] mem_strb;
    //reg[7:0]   axi_req_strb;
    //reg   [`CACHE_DATA_SIZE - 1:0] axi_mrdata;

    localparam IDLE = 3'b000, LOOKUP = 3'b001, MISS = 3'b010,
    REPLACE = 3'b011, REFILL = 3'b100, MISS_STALL = 3'b101, REFILL_STALL = 3'b110,
    DUNJIAO = 3'b111;
    localparam SETS = 128;

    reg          cache_way0V[SETS - 1:0];
    reg          cache_way1V[SETS - 1:0];

    reg  [20:0]  cache_way0tags[SETS - 1:0];
    reg  [20:0]  cache_way1tags[SETS - 1:0];

    wire [20:0]  input_tag    = input_addr[31:11]; //high
    wire [6:0]   input_index  = input_addr[10:4];  //mid(8-2=6:[5:0])
    wire [3:0]   input_offset = input_addr[3:0];   //low

    reg  [6:0]   cache_index_reg;

    wire          cache_wen_way0;
    wire          cache_wen_way1;
    wire  [`CACHE_DATA_SIZE - 1:0] cache_strb;
    wire  [`CACHE_DATA_SIZE - 1:0] cache_wdata;

    wire [`CACHE_DATA_SIZE - 1:0] cache_rdata_way0;
    wire [`CACHE_DATA_SIZE - 1:0] cache_rdata_way1;

    wire cache_way0hit = (cache_way0tags[input_index] == input_tag & cache_way0V[input_index]) && input_valid;
    wire cache_way1hit = (cache_way1tags[input_index] == input_tag & cache_way1V[input_index]) && input_valid;
    wire cache_way0valid = cache_way0V[input_index] & input_valid;
    wire cache_way1valid = cache_way1V[input_index] & input_valid;
    //*do not accept request if cache is empty!
    //*cache_state == IDLE?

    //choose bank(always follow the sram output)
    wire[63:0] output_data_way0 = input_offset_reg[3] ? cache_rdata_way0[127:64] : cache_rdata_way0[63:0];
    wire[63:0] output_data_way1 = input_offset_reg[3] ? cache_rdata_way1[127:64] : cache_rdata_way1[63:0];

    //strb 
    wire[63:0] ex_cache_wdata;
    assign cache_wdata[127:64] = ({64{cache_state == REFILL}} & axi_mrdata[127:64]);
    assign cache_wdata[63:0] = ({64{cache_state == REFILL}} & axi_mrdata[63:0]);
    
    assign cache_wen_way0 = (axi_res_valid & cache_state == REFILL 
    & !cache_way0valid);
    assign cache_wen_way1 = (axi_res_valid & cache_state == REFILL 
    & !cache_way1valid & cache_way0valid);
    //refill:mem->cache
    //hit && memread -> wen = 0
    
    assign cache_strb[127:64] = {64{axi_res_valid & cache_state == REFILL}};//hits are all read hits.
    assign cache_strb[63:0] = {64{axi_res_valid & cache_state == REFILL}};

    assign  cache_pipelinehit = (cache_state == IDLE & (cache_way0hit | cache_way1hit));
    //pre value of diff_output_ready
    //supposed to be inputs:


    /* 
    always @(*) begin
        if(axi_req_valid)pmem_read(axi_req_addr & 64'hffffffff_fffffff0, axi_mrdata[63:0]);
        if(axi_req_valid)pmem_read((axi_req_addr & 64'hffffffff_fffffff0) + 8, axi_mrdata[127:64]);

    end
    */
    assign output_data = cache_way0hit_reg ? output_data_way0: output_data_way1;
  
    
    always @(posedge clk) begin
        if(rst)begin
            for(int i = 0; i < SETS; i = i + 1)begin
                cache_way0tags[i] = 0;
                cache_way1tags[i] = 0;
                cache_way0V[i] = 0;
                cache_way1V[i] = 0;
            end
        end
    end
    reg cnt=0;
    always @(posedge clk)begin
        case(cache_state)
            IDLE: 
            begin
                if(cache_way0hit | cache_way1hit)begin
                    if(cache_way0hit)begin
                        cache_way0V[input_index] <= 1'b1;
                    end else begin
                        cache_way1V[input_index] <= 1'b1;
                    end
                    cache_state <= IDLE;
                    ecall_stuck <= 1'b0;//mod 4
                    mret_stuck  <= 1'b0;//mod 4
                    //both way0 and way1 should be replaced, randomly choose one
                end else if(cache_way0valid & cache_way1valid) begin
                    //block2(tillend)(eviction)
                    cnt <= cnt + 1;
                    cache_state <= MISS;
                    if(wb_ecall)ecall_stuck <= 1'b1;//mod 4
                    if(wb_mret)mret_stuck <= 1'b1;//mod 4
                end else if(!input_valid)begin
                    cache_state <= IDLE;
                    ecall_stuck <= 1'b0;//mod 4
                    mret_stuck  <= 1'b0;//mod 4
                end else begin
                    cache_state <= REFILL;
                    if(wb_ecall)ecall_stuck <= 1'b1;//mod 4
                    if(wb_mret)mret_stuck <= 1'b1;//mod 4
                end
            end
            MISS:
            begin
                if(!load_branch)begin
                    cache_state <= MISS_STALL;
                end
            end
            MISS_STALL:
            begin
                if(!load_branch)begin
                    cache_state <= REFILL;
                    if(!cnt)begin//write back(random eviction)
                        cache_way0V[input_index] <= 1'b0;
                    end else begin
                        cache_way1V[input_index] <= 1'b0;
                    end
                end
            end

            REFILL://3'b100
            begin
                if(axi_res_valid) begin

                    if(cache_wen_way0)cache_way0tags[input_index] <= input_tag; 
                    else if(cache_wen_way1)cache_way1tags[input_index] <= input_tag; //?

                    cache_way0V[input_index] <= cache_way0V[input_index] | cache_wen_way0;
                    cache_way1V[input_index] <= cache_way1V[input_index] | cache_wen_way1;
                    axi_req_valid <= 1'b0;
                    //axi_res_valid <= 1'b0;
                    cache_state <= REFILL_STALL;
                end else if(!load_branch & id_allowin) begin
                    cache_state <= REFILL;
                    axi_req_addr  <= input_addr & 64'hffffffff_fffffff0;
                    axi_req_valid <= 1'b1;
                end
            end

            REFILL_STALL://write allocate(read miss)110
            begin
                cache_state <= IDLE;
            end

            default:;
        endcase

    end

S011HD1P_X32Y2D128_BW dcache_way1(
    .Q(cache_rdata_way0),//if
    .CLK(clk),
    .CEN(input_memread),//preif
    .WEN(cache_wen_way0),//mem or later
    .BWEN(cache_strb),//mem or later
    .A(input_index),//ex
    .D(cache_wdata)//128
);
S011HD1P_X32Y2D128_BW dcache_way2(
    .Q(cache_rdata_way1),//if
    .CLK(clk),
    .CEN(input_memread),//preif
    .WEN(cache_wen_way1),//mem or later
    .BWEN(cache_strb),//mem or later
    .A(input_index),//ex
    .D(cache_wdata)//128
);
endmodule