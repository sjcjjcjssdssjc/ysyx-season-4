module ysyx_22040127_execute(
  input [31:0] instruction,
  input clk,
  input rst,
  input[31:0]pc,
  input[63:0]src0,
  input[63:0]src1,
  input[63:0]imm,
  input[2:0] inst_type,
  output reg[63:0]alu_output
);
  localparam TYPE_I = 0, TYPE_U = 1, TYPE_S = 2, TYPE_J = 3, TYPE_R = 4, TYPE_B = 5;
  always @(*) begin
    case(inst_type)
      3'b000 : alu_output = src0 + src1;//I_type
      3'b001 : alu_output = instruction[5] ? src0 : src0 + {32'b0,pc}; //auipc:lui
      3'b011 : alu_output = {32'b0, pc + 4};//jal
      //32'b0,pc?
      default: alu_output = 0;
    endcase
  end
endmodule
