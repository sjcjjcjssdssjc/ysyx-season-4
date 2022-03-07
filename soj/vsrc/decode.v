module decode(
  input [31:0] instruction,
  input clk,
  input rst,
  output[4:0] rd,
  output[4:0] rs1,
  output[4:0] rs2,
  output[2:0] inst_type,
);
  localparam TYPE_I = 0, TYPE_U = 1, TYPE_S = 2, TYPE_J = 3, TYPE_R = 4, TYPE_B = 5;
  // wire[4:0] rd;
  // wire[4:0] rs1;
  // wire[4:0] rs2;
  // wire[2:0] inst_type;
  assign rd  = instruction[11:7];
  assign rs1 = instruction[19:15];
  assign rs2 = instruction[24:20];
  //number of keys,width of key/data (output input 
  MuxKey #(6, 7, 3) inst_type (inst_type, instruction[6:0], {
    TYPE_I,7'b0011011,//addi
    TYPE_U,7'b0010111,
    TYPE_S,7'b0100011,
    TYPE_J,7'b1101111,
    TYPE_R,7'b0111011,
    TYPE_B,7'b1100011,
  });
endmodule