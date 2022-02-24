module top(
  input clk,
  input rst,
  input[1:0] X0,
  input[1:0] X1,
  input[1:0] X2,
  input[1:0] X3,
  input[1:0] Y,
  output reg[1:0] F
);
  always @(X0 or X1 or X2 or X3) begin
    case(Y)
      2'b00: F = X0;
      2'b01: F = X1;
      2'b10: F = X2;
      2'b11: F = X3;
    endcase
  end
endmodule

