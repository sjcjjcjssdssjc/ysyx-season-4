module top(load,clk,rst,d,q);
  input  load,rst,clk;
  input  [3:0] d;
  output reg [3:0] q;

  always @(posedge clk)
    if (rst==1)
        q <= 0;
    else if (load == 1)
        q <= d;
endmodule

