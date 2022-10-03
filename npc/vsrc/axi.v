// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00               
//突发类型  FIFO
`define AXI_BURST_TYPE_INCR                                 2'b01               
//ram  
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000                
//突发宽度一个数据的宽度
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111


module ysyx_22040127_axi_rw # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,//32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,//32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clk,
    input                               rst,

    input [63:0]                        d_req_addr,
    input [7:0]                         d_req_strb,
    input [`CACHE_DATA_SIZE - 1:0]      d_req_data,
    input                               d_req_wen,
    input                               d_req_valid,
    output                              d_res_valid,
    output reg[`CACHE_DATA_SIZE - 1:0]  d_mrdata,

    input [63:0]                        i_req_addr,
    input                               i_req_valid,
    output                              i_res_valid,
    output reg[`CACHE_DATA_SIZE-1:0]    i_mrdata,

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,              
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,                
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,                
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,//abandon           
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    //slave->master   
    input                               axi_ar_ready_i,            
    //master->slave 
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,                 
    input                               axi_r_valid_i,                
    input  [1:0]                        axi_r_resp_i,//abandon
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);

    parameter [2:0] W_IDLE  = 3'b000;
    parameter [2:0] W_ADDR  = 3'b001;
    parameter [2:0] W_WRITE = 3'b010;
    parameter [2:0] W_WRITE_WAIT = 3'b101;
    parameter [2:0] W_RESP  = 3'b011;
    parameter [2:0] W_DONE  = 3'b100;

    parameter [2:0] R_IDLE  = 3'b000;
    parameter [2:0] R_INST_ADDR = 3'b001;
    parameter [2:0] R_INST_READ = 3'b010;
    parameter [2:0] R_DATA_ADDR = 3'b011;
    parameter [2:0] R_DATA_READ = 3'b100;
    parameter [2:0] R_INST_DONE = 3'b101;
    parameter [2:0] R_DATA_DONE = 3'b110;
    wire r_trans = 1'b1;//!d_req_wen | i_req_valid ?
    wire w_valid = d_req_wen & d_req_valid;
    wire r_valid = i_req_valid | d_req_valid;
    wire data_read = d_req_valid & !d_req_wen;
    wire inst_read = i_req_valid;
    reg mmio_rdone;
    reg mmio_wdone;

    wire aw_hs = axi_aw_ready_i & axi_aw_valid_o;
    wire ar_hs = axi_ar_ready_i & axi_ar_valid_o;
    wire w_hs  = axi_w_ready_i  & axi_w_valid_o;
    wire b_hs  = axi_b_ready_o  & axi_b_valid_i;
    wire r_hs  = axi_r_ready_o  & axi_r_valid_i;

    wire is_mmio = d_req_addr[31:28] == 4'ha && d_req_valid;

    wire w_done_first = w_hs;
    wire w_done_last  = w_hs & axi_w_last_o;
    wire r_done = r_hs & axi_r_last_i;
    wire trans_done = d_req_wen ? b_hs : r_done;//?
    wire [AXI_DATA_WIDTH-1:0] r_addr = //use burst
    r_state == R_INST_ADDR ? i_req_addr & 64'hffffffff_fffffff0 :
    r_state == R_DATA_ADDR ? is_mmio ? d_req_addr : d_req_addr & 64'hfffffffffffffff0 :
    0;

    //once wvalid is 1 until it is over always 1

    // ------------------State Machine------------------TODO

    reg[2:0] w_state;
    reg[2:0] r_state;
    //reg      r_done_reg;
    wire w_state_addr  = (w_state == W_ADDR);
    wire w_state_resp  = 1'b1;
    wire w_state_write = (w_state == W_WRITE | w_state == W_WRITE_WAIT); 

    wire r_state_addr  = (r_state == R_INST_ADDR | r_state == R_DATA_ADDR);
    wire r_state_read  = (r_state == R_INST_READ | r_state == R_DATA_READ);

    assign i_res_valid = (r_state == R_INST_DONE);
    assign d_res_valid = (r_state == R_DATA_DONE & !is_mmio) 
    | (r_state == R_DATA_DONE & mmio_rdone  & is_mmio)
    ? 1'b1 : (w_state == W_DONE & !is_mmio) 
    | (w_state == W_DONE & is_mmio & mmio_wdone)
    ? w_valid : 1'b0;
    //when i,d both read/ only d read/ only d write

    
    // write state machine
    always @(posedge clk)begin
        //r_done_reg  <= r_done;

        if(rst)begin
            w_state <= W_IDLE;
            mmio_wdone <= 1'b0;
        end else begin
            if(w_valid | b_hs | w_state == W_DONE)begin
                case(w_state)
                    W_IDLE:begin
                      w_state <= W_ADDR;
                      mmio_wdone <= 1'b0;
                    end
                    W_ADDR: if(aw_hs) w_state <= W_WRITE;
                    W_WRITE:if(w_done_first)w_state  <= is_mmio ? W_RESP : W_WRITE_WAIT;//010
                    W_WRITE_WAIT:if(w_done_last)w_state <= W_RESP;//burst is over       //101
                    W_RESP:begin
                      if(b_hs)begin
                        w_state <= W_DONE;
                        if(is_mmio)begin
                          mmio_wdone <= 1'b1;
                        end
                      end
                    end
                    W_DONE:begin
                      w_state <= W_IDLE;
                      //uart_wdone <= 1'b0;
                    end
                    default:          w_state <= W_IDLE;
                endcase
            end
        end
    end

    // read state machine
    always @(posedge clk)begin
        begin
            if(r_valid)begin
                case(r_state)
                    R_IDLE: begin
                        mmio_rdone <= 1'b0;
                        if(inst_read)        r_state <= R_INST_ADDR;//if first
                        else if(data_read)   r_state <= R_DATA_ADDR;
                    end
                    R_INST_ADDR: if(ar_hs)   r_state <= R_INST_READ;
                    R_INST_READ:
                      if(r_done)begin
                        r_state <= R_INST_DONE;
                        i_mrdata[127:64] <= axi_r_data_i;
                      end else if(r_hs)i_mrdata[63:0] <= axi_r_data_i;
                    R_DATA_ADDR: if(ar_hs)   r_state <= R_DATA_READ;
                    R_DATA_READ:
                      if(r_done)begin
                        r_state <= R_DATA_DONE;
                        if(is_mmio)begin
                          d_mrdata[63:0]   <= axi_r_data_i;
                          mmio_rdone <= 1'b1;
                        end else d_mrdata[127:64] <= axi_r_data_i;
                      end else if(r_hs)d_mrdata[63:0] <= axi_r_data_i;
                    R_INST_DONE: begin
                        //if(data_read)r_state <= R_DATA_READ;
                        r_state <= R_IDLE;
                    end
                    R_DATA_DONE: begin
                        r_state <= R_IDLE;
                    end
                    default:     r_state <= R_IDLE;
                endcase

            end
        end
    end
    //delete:mask,mask_l,mask_h,aligned_offset_l,aligned_offset_h
    // ------------------Write Transaction------------------
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MMIO_SIZE_R   = $clog2(AXI_DATA_WIDTH / 8);
    parameter MMIO_SIZE_W   = $clog2(32 / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_wlen     = 8'b1;
    wire [7:0] axi_rlen     = 8'b1;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    wire [2:0] mmio_size_r    = MMIO_SIZE_R[2:0];
    wire [2:0] mmio_size_w    = MMIO_SIZE_W[2:0];
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = w_state_addr;
    assign axi_aw_addr_o    = d_req_addr;
    assign axi_aw_prot_o    = 3'b000;//`AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                    //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = is_mmio & d_req_wen ? 0 : axi_wlen;
    assign axi_aw_size_o    = is_mmio & d_req_wen ? mmio_size_w : axi_size;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可
    //ok

    // 写数据通道
    assign axi_w_valid_o    = w_state_write;//ok
    assign axi_w_data_o     = w_state == W_WRITE ? 
    (is_mmio & d_req_wen ? {2{d_req_data[31:0]}} : d_req_data[63:0]): d_req_data[127:64];
    assign axi_w_strb_o     = d_req_strb;
    assign axi_w_last_o     = (w_state == W_WRITE_WAIT |
    (is_mmio & d_req_wen & w_state == W_WRITE))
    ? 1'b1 : 1'b0;
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    assign axi_b_ready_o    = w_state_resp;

    // ------------------Read Transaction------------------

    // Read address channel signals
    // no last in ar
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = r_addr;
    assign axi_ar_prot_o    = 3'b000;//`AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;        //ok                                                                   //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = is_mmio & !d_req_wen & !i_req_valid ? 0 : axi_rlen;
    assign axi_ar_size_o    = is_mmio & !d_req_wen & !i_req_valid ? mmio_size_r : axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
    assign axi_r_ready_o    = r_state_read;

endmodule
