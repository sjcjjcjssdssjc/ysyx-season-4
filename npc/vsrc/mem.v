module ysyx_22040127_memory(
  input clk,
  input memwrite,
  input [63:0] wdata,
  input [63:0] waddr,
  input [63:0] raddr,
  input lb,
  input lh,
  input lw,
  input ld,
  input lbu,
  input lhu,
  input lwu,
  output[63:0] loaded_data,
  input sb,
  input sh,
  input sw,
  input sd
);
  wire[63:0]doubly_aligned_data;
  wire[63:0]rdata;//after mask
  wire[7:0]addr_lowmask;
  wire[7:0]wmask;//real_wmask

  ysyx_22040127_decoder_3_8 dec(.in(raddr[2:0]),.out(addr_lowmask));
  import "DPI-C" function void pmem_read(
  input longint raddr, output longint doubly_aligned_data);//not the rdata in this module
  import "DPI-C" function void pmem_write(
    input longint waddr, input longint wdata, input byte wmask);
  
  assign loaded_data[7:0]  = rdata[7:0];//alu_output
  assign loaded_data[15:8] = {8{lb}} & {8{rdata[7]}} |
  {8{lh | lhu}} & rdata[15:8]| {8{lw | lwu | ld}}  & rdata[15:8];
  assign loaded_data[31:16] = {16{lb}} & {16{rdata[7]}} |
  {16{lh}} & {16{rdata[15]}} | {16{lw | lwu | ld}} & rdata[31:16];
  assign loaded_data[63:32] = {32{lb}} & {32{rdata[7]}} |
  {32{lh}} & {32{rdata[15]}} | {32{lw}} & {32{rdata[31]}} |
  {32{ld}} & rdata[63:32]; 

  assign rdata = {64{ld}} & doubly_aligned_data |
  {32'b0, {32{addr_lowmask[3'b000] & lw}} & doubly_aligned_data[31:0]} |
  {32'b0, {32{addr_lowmask[3'b100] & lw}} & doubly_aligned_data[63:32]}|

  {48'b0, {16{addr_lowmask[3'b000] & lh}} & doubly_aligned_data[15:0]}|
  {48'b0, {16{addr_lowmask[3'b010] & lh}} & doubly_aligned_data[31:16]}|
  {48'b0, {16{addr_lowmask[3'b100] & lh}} & doubly_aligned_data[47:32]}|
  {48'b0, {16{addr_lowmask[3'b110] & lh}} & doubly_aligned_data[63:48]}|

  {56'b0, {8{addr_lowmask[3'b000] & lb}} & doubly_aligned_data[7:0]}|
  {56'b0, {8{addr_lowmask[3'b001] & lb}} & doubly_aligned_data[15:8]}|
  {56'b0, {8{addr_lowmask[3'b010] & lb}} & doubly_aligned_data[23:16]}|
  {56'b0, {8{addr_lowmask[3'b011] & lb}} & doubly_aligned_data[31:24]}|

  {56'b0, {8{addr_lowmask[3'b100] & lb}} & doubly_aligned_data[39:32]}|
  {56'b0, {8{addr_lowmask[3'b101] & lb}} & doubly_aligned_data[47:40]}|
  {56'b0, {8{addr_lowmask[3'b110] & lb}} & doubly_aligned_data[55:48]}|
  {56'b0, {8{addr_lowmask[3'b111] & lb}} & doubly_aligned_data[63:56]};
  //sw:000 100
  //sh:000 010 100 110
  
  assign wmask[0] = addr_lowmask[3'b000] | sd;
  assign wmask[1] = addr_lowmask[3'b001] | addr_lowmask[3'b000] & (sh|sw) | sd;
  assign wmask[2] = addr_lowmask[3'b010] | addr_lowmask[3'b000] & sw | sd;
  assign wmask[3] = addr_lowmask[3'b011] | addr_lowmask[3'b010] & sh |
  addr_lowmask[3'b000] & sw | sd;
  assign wmask[4] = addr_lowmask[3'b100] | addr_lowmask[3'b010] & sh | sd;
  assign wmask[5] = addr_lowmask[3'b101] | addr_lowmask[3'b100] & (sh|sw) | sd;
  assign wmask[6] = addr_lowmask[3'b110] | addr_lowmask[3'b100] & sw | sd;
  assign wmask[7] = addr_lowmask[3'b111] | addr_lowmask[3'b110] & sh | 
  addr_lowmask[3'b100] & sw | sd;

  always @(*) begin
    pmem_read(raddr, doubly_aligned_data);
    if(|wmask)pmem_write(waddr, wdata, wmask & {8{memwrite}});
  end

endmodule
