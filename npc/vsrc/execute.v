module ysyx_22040127_execute(
  input [31:0] instruction,
  input clk,
  input rst,
  input[31:0]pc,
  input[63:0]src1,
  input[63:0]src2,
  input[63:0]imm,
  input[2:0] inst_type,
  output reg[63:0]alu_output
);
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  localparam op_add = 6'b000000, op_and = 6'b000010, op_or = 6'b001100,
  op_addw = 6'b000001,op_sub = 6'b100000;
  wire[63:0]calc_result;
  wire[63:0]alu_op;
  ysyx_22040127_decoder_6_64 dec(.in({instruction[30], instruction[25], instruction[14:12], 
  instruction[3]}),.out(alu_op));
  assign calc_result = {64{alu_op[op_addw]}} & {{32{src1[31] ^ src2[31]}}, src1[31:0] + src2[31:0]}|
  {64{alu_op[op_add]}} & (src1 + src2) |
  {64{alu_op[op_sub]}} & (src1 - src2);

  //num,out,in
  always @(*) begin
    case(inst_type)
      TYPE_I : alu_output = src1 + src2;//I_type
      TYPE_S : alu_output = src1 + src2;
      TYPE_U : alu_output = instruction[5] ? src1 : src1 + {32'b0,pc}; //auipc:lui
      TYPE_J : alu_output = {32'b0, pc + 4};//jal
      TYPE_R : alu_output = calc_result;

      //32'b0,pc?
      default: alu_output = 0;
    endcase
  end
endmodule
