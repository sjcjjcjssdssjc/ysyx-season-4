`include "mycpu.h"

module ysyx_22040127_memory(
  input      clk,
  input      rst,
  output     mem_allowin,     //for last stage
  input      wb_allowin,      //from next stage
  input      ex_to_mem_valid, //from last stage
  output     mem_to_wb_valid, //for next stage
  input [`EX_TO_MEM_WIDTH - 1:0] ex_to_mem_bus,
  output[`MEM_TO_WB_WIDTH - 1:0] mem_to_wb_bus,
  output[63:0] mem_alu_output,
  output[63:0] mem_final_rdata,
  output       mem_memread
);
  wire[2:0] mem_memop;   //input from id
  wire      mem_memwrite;//input from id
  wire[63:0]mem_reg_wdata;
  wire      lb;
  wire      lh;
  wire      lw;
  wire      ld;
  wire      lbu;
  wire      lhu;
  wire      lwu;
  wire      sb;
  wire      sh;
  wire      sw;
  wire      sd;
  assign lb  = (mem_memop == 3'b000);
  assign lh  = (mem_memop == 3'b001);
  assign lw  = (mem_memop == 3'b010);
  assign ld  = (mem_memop == 3'b011);
  assign lbu = (mem_memop == 3'b100);
  assign lhu = (mem_memop == 3'b101);
  assign lwu = (mem_memop == 3'b110);
  assign sb  = (mem_memop[1:0] == 2'b00);
  assign sh  = (mem_memop[1:0] == 2'b01);
  assign sw  = (mem_memop[1:0] == 2'b10);
  assign sd  = (mem_memop[1:0] == 2'b11);

  //for pipeline
  wire       mem_ready_go;//self_willing
  wire       mem_reg_wen;
  wire[4:0]  mem_rd;    
  wire[31:0] mem_pc;
  wire       mem_jalr;
  wire[63:0] mem_wdata_tmp;
  wire[63:0] mem_wdata;
  reg[63:0]  mem_reg_wdata;
  reg        mem_valid;
  
  assign mem_ready_go = 1'b1;
  assign mem_allowin  = !mem_valid || mem_ready_go && wb_allowin;
  assign mem_to_wb_valid = mem_ready_go && mem_valid;
  reg[`EX_TO_MEM_WIDTH - 1:0]  ex_to_mem_bus_reg; 
  assign mem_wdata = sb ? {8{mem_wdata_tmp[7:0]}} :
  sh ? {4{mem_wdata_tmp[15:0]}} :
  sw ? {2{mem_wdata_tmp[31:0]}} : 
  mem_wdata_tmp[63:0];

  assign 
  { mem_jalr,      //171:171
    mem_pc,        //170:139
    mem_memop,     //138:136 unused
    mem_reg_wen,   //135:135 toreg
    mem_memwrite,  //134:134
    mem_memread,   //133:133
    mem_rd,        //132:128 toreg
    mem_alu_output,//127:64
    mem_wdata_tmp      //63:0    fromid
  } = ex_to_mem_bus_reg;

  assign mem_to_wb_bus =
  { mem_pc,        //101:70
    mem_reg_wen,   //69:69
    mem_rd,        //68:64
    mem_reg_wdata  //63:0
  };

  always @(*) begin
    //if(mem_jalr) mem_reg_wdata = {32'b0, mem_pc + 4};//id(the jalr need break down)
    if(mem_memread) mem_reg_wdata = mem_final_rdata;
    else mem_reg_wdata = mem_alu_output;
  end

  always @(posedge clk) begin
    if(rst) begin
      mem_valid <= 1'b0;      
    end else if(mem_allowin)begin
      mem_valid <= ex_to_mem_valid;
    end
    
    if(ex_to_mem_valid && mem_allowin) begin
      ex_to_mem_bus_reg <= ex_to_mem_bus;
    end else begin
      ex_to_mem_bus_reg[135:128] <= 8'b0;
    end  //else ex_to_mem_bus_reg <= `EX_TO_MEM_WIDTH'b0;
  end

  wire[63:0]doubly_aligned_data;
  wire[63:0]rawdata;//after mask
  wire[7:0]addr_lowmask;
  wire[7:0]wmask;//real_wmask

  ysyx_22040127_decoder_3_8 dec(.in(mem_alu_output[2:0]),.out(addr_lowmask));//in:mem_raddr
  import "DPI-C" function void pmem_read(//memread isn't working
  input longint raddr, output longint doubly_aligned_data);
  import "DPI-C" function void pmem_write(
    input longint waddr, input longint wdata, input byte wmask);
  
  assign mem_final_rdata[7:0]  = rawdata[7:0];//alu_output
  assign mem_final_rdata[15:8] = {8{lb}} & {8{rawdata[7]}} |
  {8{lh | lhu}} & rawdata[15:8]| {8{lw | lwu | ld}}  & rawdata[15:8];
  assign mem_final_rdata[31:16] = {16{lb}} & {16{rawdata[7]}} |
  {16{lh}} & {16{rawdata[15]}} | {16{lw | lwu | ld}} & rawdata[31:16];
  assign mem_final_rdata[63:32] = {32{lb}} & {32{rawdata[7]}} |
  {32{lh}} & {32{rawdata[15]}} | {32{lw}} & {32{rawdata[31]}} |
  {32{ld}} & rawdata[63:32]; 

  assign rawdata = {64{ld}} & doubly_aligned_data |
  {32'b0, {32{addr_lowmask[3'b000] & (lw | lwu)}} & doubly_aligned_data[31:0]} |
  {32'b0, {32{addr_lowmask[3'b100] & (lw | lwu)}} & doubly_aligned_data[63:32]}|

  {48'b0, {16{addr_lowmask[3'b000] & (lh | lhu)}} & doubly_aligned_data[15:0]} |
  {48'b0, {16{addr_lowmask[3'b010] & (lh | lhu)}} & doubly_aligned_data[31:16]}|
  {48'b0, {16{addr_lowmask[3'b100] & (lh | lhu)}} & doubly_aligned_data[47:32]}|
  {48'b0, {16{addr_lowmask[3'b110] & (lh | lhu)}} & doubly_aligned_data[63:48]}|

  {56'b0, {8{addr_lowmask[3'b000] & (lb | lbu)}} & doubly_aligned_data[7:0]}  |
  {56'b0, {8{addr_lowmask[3'b001] & (lb | lbu)}} & doubly_aligned_data[15:8]} |
  {56'b0, {8{addr_lowmask[3'b010] & (lb | lbu)}} & doubly_aligned_data[23:16]}|
  {56'b0, {8{addr_lowmask[3'b011] & (lb | lbu)}} & doubly_aligned_data[31:24]}|
  {56'b0, {8{addr_lowmask[3'b100] & (lb | lbu)}} & doubly_aligned_data[39:32]}|
  {56'b0, {8{addr_lowmask[3'b101] & (lb | lbu)}} & doubly_aligned_data[47:40]}|
  {56'b0, {8{addr_lowmask[3'b110] & (lb | lbu)}} & doubly_aligned_data[55:48]}|
  {56'b0, {8{addr_lowmask[3'b111] & (lb | lbu)}} & doubly_aligned_data[63:56]};
  //sw:000 100
  //sh:000 010 100 110
  
  assign wmask[0] = addr_lowmask[3'b000] | sd;
  assign wmask[1] = addr_lowmask[3'b001] | addr_lowmask[3'b000] & (sh|sw) | sd;
  assign wmask[2] = addr_lowmask[3'b010] | addr_lowmask[3'b000] & sw | sd;
  assign wmask[3] = addr_lowmask[3'b011] | addr_lowmask[3'b010] & sh |
  addr_lowmask[3'b000] & sw | sd;
  assign wmask[4] = addr_lowmask[3'b100] | sd;
  assign wmask[5] = addr_lowmask[3'b101] | addr_lowmask[3'b100] & (sh|sw) | sd;
  assign wmask[6] = addr_lowmask[3'b110] | addr_lowmask[3'b100] & sw | sd;
  assign wmask[7] = addr_lowmask[3'b111] | addr_lowmask[3'b110] & sh | 
  addr_lowmask[3'b100] & sw | sd;

  always @(*) begin
    pmem_read(mem_alu_output, doubly_aligned_data);//raddr
    if(|wmask)pmem_write(mem_alu_output, mem_wdata, wmask & {8{mem_memwrite}});//waddr
  end

endmodule
