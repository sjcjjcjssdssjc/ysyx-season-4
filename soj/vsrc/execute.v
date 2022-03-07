module execute(
  input [31:0] instruction,
  input clk,
  input rst,
  input[63:0]src0;
  input[63:0]src1;
  input[63:0]imm,
  input[2:0] inst_type,
  output[63:0]alu_output,
);
  localparam TYPE_I = 0, TYPE_U = 1, TYPE_S = 2, TYPE_J = 3, TYPE_R = 4, TYPE_B = 5;
  always @(*) begin
    case(inst_type)
      3'b000 : alu_output <= src0 + src1;
      default: alu_output <= 0;
  end
