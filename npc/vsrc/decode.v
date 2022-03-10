module ysyx_22040127_decode(
  input [31:0] instruction,
  input clk,
  input rst,
  output r_wen,
  output[4:0] rd,
  output[4:0] rs1,
  output[4:0] rs2,
  output reg[2:0] inst_type,
  output [63:0] imm
);
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
   TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  assign rd  = instruction[11:7];
  assign rs1 = instruction[19:15];
  assign rs2 = instruction[24:20];
  assign imm = {{52{instruction[31]}},instruction[31:20]};
  assign r_wen = !(|inst_type);
  // number of keys,width of key/data (output input 
   always @(*)begin
     case(instruction[6:0])
       7'b0010111:inst_type = TYPE_U;
       7'b0011011:inst_type = TYPE_I;
       7'b1110011:inst_type = TYPE_N;
       default:inst_type = TYPE_I;
     endcase
   end
  // ysyx_22040127_MuxKey #(7, 7, 3) inst_mux (inst_type, instruction[6:0], {
  //   TYPE_U,7'b0010111,
  //   TYPE_I,7'b0011011,//addi
  //   TYPE_S,7'b0100011,
  //   TYPE_J,7'b1101111,
  //   TYPE_R,7'b0111011,
  //   TYPE_B,7'b1100011,
  //   TYPE_N,7'b1110011
  // });
endmodule