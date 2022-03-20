module ysyx_22040127_memory(
  input clk,
  input [7:0]  wmask,
  input [63:0] wdata,
  input [63:0] waddr,
  input [63:0] raddr,
  output[63:0] rdata
);
  import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
  import "DPI-C" function void pmem_write(
    input longint waddr, input longint wdata, input byte wmask);
  wire [63:0] rdata;
  always @(*) begin
    pmem_read(raddr, rdata);
    pmem_write(waddr, wdata, wmask);
  end

endmodule
