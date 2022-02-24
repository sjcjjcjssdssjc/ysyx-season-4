module top(
  input clk,
  input rst,
  input a,
  input b,
  output wire f
);
  assign f = (a ^ b) & (!rst);
endmodule

