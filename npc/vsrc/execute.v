module ysyx_22040127_execute(
  input [31:0] instruction,
  input clk,
  input rst,
  input[31:0]pc,
  input[63:0]src1,
  input[63:0]src2,
  input[63:0]imm,
  input[2:0] inst_type,
  input      memread,
  output reg[63:0]alu_output,
  output[63:0] mem_waddr,
  output[63:0] mem_raddr
);

  wire[63:0]rtype_calc_result;
  wire[63:0]itype_calc_result;
  wire[63:0]rtype_alu_op;
  wire[31:0]itype_alu_op;
  wire[63:0]sub;

  wire[31:0]addw_result;
  wire[31:0]subw_result;
  wire[31:0]mulw_result;
  wire[31:0]divw_result;
  wire[31:0]divuw_result;
  wire[31:0]remw_result;
  wire[31:0]remuw_result;

  wire[63:0]sext_addw_result;
  wire[63:0]sext_subw_result;
  wire[63:0]sext_mulw_result;
  wire[63:0]sext_divw_result;
  wire[63:0]sext_divuw_result;
  wire[63:0]sext_remw_result;
  wire[63:0]sext_remuw_result;

  wire[31:0]src1_sraw;
  wire[31:0]src1_sllw;
  wire[31:0]src1_srlw;
  wire[63:0]sext_src1_sraw;
  wire[63:0]sext_src1_sllw;
  wire[63:0]sext_src1_srlw;

  assign mem_waddr = alu_output;
  assign mem_raddr = alu_output;

  ysyx_22040127_decoder_6_64 dec_rtype(.in({instruction[30], instruction[25], instruction[14:12], 
  instruction[3]}),.out(rtype_alu_op));
  ysyx_22040127_decoder_5_32 dec_itype(.in({instruction[4:3], instruction[14:12]}),.out(itype_alu_op));
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  localparam op_add = 6'b000000, op_mul = 6'b010000, op_sub = 6'b100000,
  op_addw = 6'b000001, op_or   = 6'b001100, op_xor  = 6'b001000,
  op_sll  = 6'b000010, op_slt  = 6'b000100, op_sltu = 6'b000110,
  op_and  = 6'b001110, op_div  = 6'b011000, op_divu = 6'b011010,
  op_remu = 6'b011110, op_rem  = 6'b011100, 
  op_subw = 6'b100001, op_mulw = 6'b010001, op_sllw = 6'b000011,
  op_divw = 6'b011001, op_srlw = 6'b001011, op_sraw = 6'b101011,
  op_divuw= 6'b011011, op_remw = 6'b011101, op_remuw= 6'b011111;
  localparam op_addi = 5'b10000,op_andi = 5'b10111,op_ori = 5'b10110,
  op_xori  = 5'b10100,op_sltiu = 5'b10011,op_sri = 5'b10101,op_slli = 5'b10001,
  op_addiw = 5'b11000,op_slliw = 5'b11001,op_sriw= 5'b11101;
  assign addw_result = src1[31:0] + src2[31:0];
  assign subw_result = src1[31:0] - src2[31:0];
  assign mulw_result = src1[31:0] * src2[31:0];

  assign divw_result  = $signed(src1[31:0]) / $signed(src2[31:0]);
  assign divuw_result = src1[31:0] / src2[31:0];
  assign remw_result  = $signed(src1[31:0]) % $signed(src2[31:0]);
  assign remuw_result = src1[31:0] % src2[31:0];

  assign src1_sraw   = $signed(src1[31:0]) >>> (inst_type == TYPE_I ? src2[5:0] : {1'b0, src2[4:0]});
  assign src1_srlw   = src1[31:0] >> (inst_type == TYPE_I ? src2[5:0] : {1'b0, src2[4:0]});
  assign src1_sllw   = src1[31:0] << (inst_type == TYPE_I ? src2[5:0] : {1'b0, src2[4:0]});
  assign sext_src1_sraw    = {{32{src1_sraw[31]}}, src1_sraw[31:0]};
  assign sext_src1_sllw    = {{32{src1_sllw[31]}}, src1_sllw[31:0]};
  assign sext_src1_srlw    = {{32{src1_srlw[31]}}, src1_srlw[31:0]};
  assign sext_addw_result  = {{32{addw_result[31]}}, addw_result};
  assign sext_subw_result  = {{32{subw_result[31]}}, subw_result};
  assign sext_mulw_result  = {{32{mulw_result[31]}}, mulw_result};

  assign sext_divw_result  = {{32{divw_result[31]}}, divw_result};
  assign sext_divuw_result = {{32{divuw_result[31]}}, divuw_result};
  assign sext_remw_result  = {{32{remw_result[31]}} , remw_result};
  assign sext_remuw_result = {{32{remuw_result[31]}}, remuw_result};
  assign rtype_calc_result = 
  {64{rtype_alu_op[op_add]}}  & (src1 + src2) |
  {64{rtype_alu_op[op_mul]}}  & (src1 * src2) |
  {64{rtype_alu_op[op_sub]}}  & (src1 - src2) |
  {64{rtype_alu_op[op_sll]}}  & (src1 * src2) |
  {64{rtype_alu_op[op_slt]}}  & ($signed(src1) < $signed(src2) ? 1:0) |
  {64{rtype_alu_op[op_sltu]}} & (src1 < src2 ? 1 : 0) |
  {64{rtype_alu_op[op_and]}}  & (src1 & src2) |
  {64{rtype_alu_op[op_xor]}}  & (src1 ^ src2) |
  {64{rtype_alu_op[op_or]}}   & (src1 | src2) |
  {64{rtype_alu_op[op_div]}}  & ($signed(src1) / $signed(src2))  |
  {64{rtype_alu_op[op_divu]}} & src1 / src2 |
  {64{rtype_alu_op[op_remu]}} & src1 % src2 |
  {64{rtype_alu_op[op_rem]}}  & $signed(src1) % $signed(src2)|
  {64{rtype_alu_op[op_addw]}} & sext_addw_result |
  {64{rtype_alu_op[op_subw]}} & sext_subw_result |
  {64{rtype_alu_op[op_mulw]}} & sext_mulw_result |
  {64{rtype_alu_op[op_sllw]}} & sext_src1_sllw   |
  {64{rtype_alu_op[op_srlw]}} & sext_src1_srlw   |
  {64{rtype_alu_op[op_sraw]}} & sext_src1_sraw   |

  {64{rtype_alu_op[op_divw]}} & sext_divw_result   |
  {64{rtype_alu_op[op_divuw]}}& sext_divuw_result  |
  {64{rtype_alu_op[op_remw]}} & sext_remw_result   |
  {64{rtype_alu_op[op_remuw]}}& sext_remuw_result;

  
  assign itype_calc_result = {64{memread | (&instruction[6:5])}} & (src1 + src2) |//loads, jalr
  {64{itype_alu_op[op_addi]}} & (src1 + src2)  | //addi
  {64{itype_alu_op[op_andi]}} & (src1 & src2 ) | //andi
  {64{itype_alu_op[op_ori]}}  & (src1 | src2 ) | //ori
  {64{itype_alu_op[op_xori]}} & (src1 ^ src2 ) | //xori
  {64{itype_alu_op[op_sltiu]}}& (src1 < src2 ? 64'b1 : 64'b0)|//sltiu
  {64{itype_alu_op[op_sri] & instruction[30] }} & ($signed(src1) >>> src2[5:0]) |//srai
  {64{itype_alu_op[op_sri] & !instruction[30]}} & (src1 >> src2[5:0])          |//srli
  {64{itype_alu_op[op_slli]}} & (src1 << src2[5:0]) | //slli
  {64{itype_alu_op[op_addiw]}}  & sext_addw_result  | //addiw
  {64{itype_alu_op[op_slliw]}}  & sext_src1_sllw    | //slliw
  {64{itype_alu_op[op_sriw] & instruction[30]  }} & sext_src1_sraw | //sraiw
  {64{itype_alu_op[op_sriw] & !instruction[30] }} & sext_src1_srlw;  //srliw

  assign sub = src1 - src2;
  //num,out,in
  always @(*) begin
    case(inst_type)
      TYPE_I : alu_output = itype_calc_result;//I_type
      TYPE_S : alu_output = src1 + src2;
      TYPE_U : alu_output = instruction[5] ? src1 : src1 + {32'b0,pc}; //auipc:lui
      TYPE_J : alu_output = {32'b0, pc + 4};//jal
      TYPE_R : alu_output = rtype_calc_result;

      //32'b0,pc?
      default: alu_output = 0;
    endcase
  end
endmodule
