module top(
  input clk,
  input rst,
  input a,
  input b,
  output wire f
);
  assign f = a ^ b;
  initial begin
      if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("logs/vlt_dump.vcd");
         $dumpvars();
      end 
      $display("%d %d",clk,rst);
      $display("[%0t] Model running...\n", $time);
   end
endmodule

