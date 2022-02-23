module top(
  input clk,
  input rst,
  input a,
  input b,
  output f
);
  assign f = a ^ b;
  sub sub (/*AUTOINST*/
      // Inputs
      .clk                    (clk),
      .reset_l                (rst));
  // Print some stuff as an example
   initial begin
      if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("logs/vlt_dump.vcd");
         $dumpvars();
      end else $display("[%0t] ???\n", $time);
      $display("[%0t] Model running...\n", $time);
      $display("%d %d\n",clk,rst);
   end
endmodule

