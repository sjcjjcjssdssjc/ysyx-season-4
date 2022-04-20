`include "mycpu.h"

module ysyx_22040127_execute(
  input  clk,
  input  rst,
  output ex_allowin,     //for last stage
  input  mem_allowin,    //from next stage
  input  id_to_ex_valid, //from last stage
  output ex_to_mem_valid,//for next stage
  input [`ID_TO_EX_WIDTH  - 1:0]id_to_ex_bus,
  output[`EX_TO_MEM_WIDTH - 1:0]ex_to_mem_bus
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

  wire[31:0]src1_sllw;
  wire[31:0]src1_srlw;
  wire[5:0] sft_input2;
  wire[63:0]sra_mask_32;
  wire[63:0]sra_mask_64;
  wire[63:0]sext_src1_sraw;
  wire[63:0]sext_src1_sllw;
  wire[63:0]sext_src1_srlw;


  //for pipeline
  wire[63:0] ex_mem_wdata;
  wire[31:0] ex_pc;
  wire[5:0]  ex_aluop;
  wire[2:0]  ex_memop;
  wire       ex_reg_wen;  
  wire       ex_ready_go;//self_willing
  wire       ex_memwrite;
  wire       ex_memread;
  wire[4:0]  ex_rd;
  wire[2:0]  ex_inst_type;
  wire       ex_jalr;
  wire[63:0] ex_alu_input1;
  wire[63:0] ex_alu_input2;
  wire[63:0] ex_mem_wdata;
  //wire[4:0]  ex_rs1;
  //wire[4:0]  ex_rs2;

  reg        ex_valid;
  reg[`ID_TO_EX_WIDTH - 1:0]  id_to_ex_bus_reg; 

  assign ex_ready_go = 1'b1;
  assign ex_allowin  = !ex_valid || ex_ready_go && mem_allowin;
  assign ex_to_mem_valid = ex_ready_go && ex_valid;
  assign 
  { ex_pc,          
    ex_aluop,       
    ex_memop,       
    ex_reg_wen,     
    ex_memwrite,    
    ex_memread,     
    ex_rd,            
    ex_inst_type,   
    ex_jalr,        
    ex_alu_input1,  
    ex_alu_input2,  
    ex_mem_wdata
  } = id_to_ex_bus_reg;

  //outputs
  reg [63:0]  ex_alu_output;
  //wire[63:0]  ex_mem_waddr;
  //wire[63:0]  ex_mem_raddr;
  assign ex_to_mem_bus =
  { ex_jalr,      //171:171
    ex_pc,        //170:139
    ex_memop,     //138:136
    ex_reg_wen,   //135:135
    ex_memwrite,  //134:134
    ex_memread,   //133:133
    ex_rd,        //132:128
    ex_alu_output,//127:64
    ex_mem_wdata  //63:0
  };
  always @(posedge clk) begin
  if(rst) begin
    ex_valid <= 1'b0;      
  end else if(ex_allowin)begin
    ex_valid <= id_to_ex_valid;
  end
  
  if(id_to_ex_valid && ex_allowin) begin
    id_to_ex_bus_reg <= id_to_ex_bus;
  end
end

  //assign ex_mem_waddr = ex_alu_output;
  //assign ex_mem_raddr = ex_alu_output;
  //30(aluop[5]), 25(aluop[4]), 14:12(ex_memop), 6:5(aluop[3:2]), 4:3(aluop[1:0])
  ysyx_22040127_decoder_6_64 dec_rtype(.in({ex_aluop[5], ex_aluop[4], ex_memop, 
  ex_aluop[0]}),.out(rtype_alu_op));
  ysyx_22040127_decoder_5_32 dec_itype(.in({ex_aluop[1:0], ex_memop}),.out(itype_alu_op));
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  localparam 
  op_add  = 6'b000000, op_mul  = 6'b010000, op_sub  = 6'b100000,
  op_addw = 6'b000001, op_or   = 6'b001100, op_xor  = 6'b001000,
  op_sll  = 6'b000010, op_slt  = 6'b000100, op_sltu = 6'b000110,
  op_and  = 6'b001110, op_div  = 6'b011000, op_divu = 6'b011010,
  op_remu = 6'b011110, op_rem  = 6'b011100, op_subw = 6'b100001,
  op_mulw = 6'b010001, op_sllw = 6'b000011, op_srl  = 6'b001010,
  op_sra  = 6'b101010, op_divw = 6'b011001, op_srlw = 6'b001011, 
  op_sraw = 6'b101011, op_divuw= 6'b011011, op_remw = 6'b011101, 
  op_remuw= 6'b011111;
  localparam 
  op_addi  = 5'b10000,op_andi  = 5'b10111,op_ori  = 5'b10110,
  op_xori  = 5'b10100,op_sltiu = 5'b10011,op_sri  = 5'b10101,
  op_slli = 5'b10001, op_addiw = 5'b11000,op_slliw= 5'b11001,
  op_sriw = 5'b11101;

  assign addw_result = ex_alu_input1[31:0] + ex_alu_input2[31:0];
  assign subw_result = ex_alu_input1[31:0] - ex_alu_input2[31:0];
  assign mulw_result = ex_alu_input1[31:0] * ex_alu_input2[31:0];

  assign divw_result  = $signed(ex_alu_input1[31:0]) / $signed(ex_alu_input2[31:0]);
  assign divuw_result = ex_alu_input1[31:0] / ex_alu_input2[31:0];
  assign remw_result  = $signed(ex_alu_input1[31:0]) % $signed(ex_alu_input2[31:0]);
  assign remuw_result = ex_alu_input1[31:0] % ex_alu_input2[31:0];

  assign sra_mask_32    = {32'hffffffff, ~(32'hffffffff >> sft_input2)};
  assign sra_mask_64    = {~(64'hffffffffffffffff >> sft_input2)};
  assign sft_input2  = ex_alu_input2[5:0];
  assign src1_srlw   = ex_alu_input1[31:0] >> sft_input2;
  assign src1_sllw   = ex_alu_input1[31:0] << sft_input2;

  assign sext_src1_sraw    = ({64{ex_alu_input1[31]}} & sra_mask_32) | {32'h0, src1_srlw};//{{32{src1_sraw[31]}}, src1_sraw[31:0]};
  assign sext_src1_sllw    = {{32{src1_sllw[31]}}, src1_sllw[31:0]};
  assign sext_src1_srlw    = {{32{src1_srlw[31]}}, src1_srlw[31:0]};

  wire[63:0]res_sra,res_srl,res_sll;
  assign res_sra = ({64{ex_alu_input1[63]}} & sra_mask_64) | res_srl;//to be tested
  assign res_srl = ex_alu_input1 >> sft_input2;
  assign res_sll = ex_alu_input1 << sft_input2;

  assign sext_addw_result  = {{32{addw_result[31]}}, addw_result};
  assign sext_subw_result  = {{32{subw_result[31]}}, subw_result};
  assign sext_mulw_result  = {{32{mulw_result[31]}}, mulw_result};

  assign sext_divw_result  = {{32{divw_result[31]}}, divw_result};
  assign sext_divuw_result = {{32{divuw_result[31]}}, divuw_result};
  assign sext_remw_result  = {{32{remw_result[31]}} , remw_result};
  assign sext_remuw_result = {{32{remuw_result[31]}}, remuw_result};
  assign rtype_calc_result = 
  {64{rtype_alu_op[op_add]}}  & (ex_alu_input1 + ex_alu_input2) |
  {64{rtype_alu_op[op_mul]}}  & (ex_alu_input1 * ex_alu_input2) |
  {64{rtype_alu_op[op_sub]}}  & (ex_alu_input1 - ex_alu_input2) |
  {64{rtype_alu_op[op_sll]}}  & (res_sll) |        //to be tested
  {64{rtype_alu_op[op_slt]}}  & ($signed(ex_alu_input1) < $signed(ex_alu_input2) ? 1 : 0) |
  {64{rtype_alu_op[op_sltu]}} & (ex_alu_input1 < ex_alu_input2 ? 1 : 0) |
  {64{rtype_alu_op[op_and]}}  & (ex_alu_input1 & ex_alu_input2) |
  {64{rtype_alu_op[op_xor]}}  & (ex_alu_input1 ^ ex_alu_input2) |
  {64{rtype_alu_op[op_or]}}   & (ex_alu_input1 | ex_alu_input2) |
  {64{rtype_alu_op[op_div]}}  & ($signed(ex_alu_input1) / $signed(ex_alu_input2))  |
  {64{rtype_alu_op[op_divu]}} & ex_alu_input1 / ex_alu_input2 |
  {64{rtype_alu_op[op_remu]}} & ex_alu_input1 % ex_alu_input2 |
  {64{rtype_alu_op[op_rem]}}  & $signed(ex_alu_input1) % $signed(ex_alu_input2)|
  {64{rtype_alu_op[op_addw]}} & sext_addw_result |
  {64{rtype_alu_op[op_subw]}} & sext_subw_result |
  {64{rtype_alu_op[op_mulw]}} & sext_mulw_result |
  {64{rtype_alu_op[op_srl]}}  & res_srl          | //to be tested
  {64{rtype_alu_op[op_sllw]}} & sext_src1_sllw   |
  {64{rtype_alu_op[op_srlw]}} & sext_src1_srlw   |
  {64{rtype_alu_op[op_sra]}}  & res_sra          | //to be tested
  {64{rtype_alu_op[op_sraw]}} & sext_src1_sraw   |

  {64{rtype_alu_op[op_divw]}}  & sext_divw_result   |
  {64{rtype_alu_op[op_divuw]}} & sext_divuw_result  |
  {64{rtype_alu_op[op_remw]}}  & sext_remw_result   |
  {64{rtype_alu_op[op_remuw]}} & sext_remuw_result;

  
  assign itype_calc_result = {64{ex_memread | (&ex_aluop[3:2])}} & (ex_alu_input1 + ex_alu_input2) |//loads, jalr
  {64{itype_alu_op[op_addi]}} & (ex_alu_input1 + ex_alu_input2)  | //addi
  {64{itype_alu_op[op_andi]}} & (ex_alu_input1 & ex_alu_input2 ) | //andi
  {64{itype_alu_op[op_ori]}}  & (ex_alu_input1 | ex_alu_input2 ) | //ori
  {64{itype_alu_op[op_xori]}} & (ex_alu_input1 ^ ex_alu_input2 ) | //xori
  {64{itype_alu_op[op_sltiu]}}& (ex_alu_input1 < ex_alu_input2 ? 64'b1 : 64'b0)|//sltiu
  {64{itype_alu_op[op_sri] & ex_aluop[5] }} & (res_sra) |//srai
  {64{itype_alu_op[op_sri] & !ex_aluop[5]}} & (res_srl) |//srli
  {64{itype_alu_op[op_slli]}} & (res_sll) | //slli

  {64{itype_alu_op[op_addiw]}}  & sext_addw_result  | //addiw
  {64{itype_alu_op[op_slliw]}}  & sext_src1_sllw    | //slliw
  {64{itype_alu_op[op_sriw] & ex_aluop[5]  }} & sext_src1_sraw | //sraiw
  {64{itype_alu_op[op_sriw] & !ex_aluop[5] }} & sext_src1_srlw;  //srliw

  assign sub = ex_alu_input1 - ex_alu_input2;
  //num,out,in
  always @(*) begin
    case(ex_inst_type)
      TYPE_I : ex_alu_output = itype_calc_result;//I_type
      TYPE_S : ex_alu_output = ex_alu_input1 + ex_alu_input2;
      TYPE_U : ex_alu_output = ex_aluop[2] ? ex_alu_input1 : ex_alu_input1 + {32'b0,ex_pc}; //auipc:lui
      TYPE_R : ex_alu_output = rtype_calc_result;

      default: ex_alu_output = 0;
    endcase
  end
endmodule
