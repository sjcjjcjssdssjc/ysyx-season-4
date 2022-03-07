// module Reg #(WIDTH = 1, RESET_VAL = 0) (
//   input clk,
//   input rst,
//   input [WIDTH-1:0] din,
//   output reg [WIDTH-1:0] dout,
//   input wen
// );
//   always @(posedge clk) begin
//     if (rst) dout <= RESET_VAL;
//     else if (wen) dout <= din;
//   end
// endmodule
module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
  input wen,
  output[DATA_WIDTH-1:0] rdata1,
  output[DATA_WIDTH-1:0] rdata2,
);
  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];
  assign rf[0] = 0;
  assign rdata1 = rf[raddr1];
  assign rdata2 = rf[raddr2];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
endmodule
