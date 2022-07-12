`include "mycpu.h"

module ysyx_22040127_execute(
  input  clk,
  input  rst,
  output ex_allowin,     //for last stage
  input  mem_allowin,    //from next stage
  input  id_to_ex_valid, //from last stage
  output ex_to_mem_valid,//for next stage
  input [`ID_TO_EX_WIDTH  - 1:0]id_to_ex_bus,
  output[`EX_TO_MEM_WIDTH - 1:0]ex_to_mem_bus,
  input  mem_mret,
  input  id_flush,
  input  cache_pipelinehit,// cache_state == IDLE & (cache_way0hit | cache_way1hit)
  input[2:0]  cache_state,
  output reg  ex_flush,
  output[31:0]ex_pc,
  output      ex_ready_go
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
  wire[5:0]  ex_aluop;
  wire[2:0]  ex_memop;
  wire       ex_memwrite;
  wire       ex_memread;
  wire[4:0]  ex_rd;
  wire[2:0]  ex_inst_type;
  wire       ex_jalr;
  wire[63:0] ex_alu_input1;
  wire[63:0] ex_alu_input2;
  wire[4:0]  ex_rs1;
  wire[4:0]  ex_rs2;
  wire       ex_reg_wen;

  wire mul_type;//ex1
  wire div_type;
  wire div_sign;
  wire mul_stage2;
  wire mul_ok;  //ex3
  wire sign1;
  wire sign2;
  wire[63:0]mul_res_high;
  wire[63:0]mul_res_low;

  reg        ex_valid;
  reg[`ID_TO_EX_WIDTH - 1:0]  id_to_ex_bus_reg; 


  //outputs
  reg [63:0]  ex_alu_output;
  //wire[63:0]  ex_mem_waddr;
  //wire[63:0]  ex_mem_raddr;

  reg div_ready;
  wire[1:0]  div_state;
  wire[63:0] quo;
  wire[63:0] rem;

  wire       ex_mret;
  wire       ex_ecall;
  wire       ex_csrrw;
  wire       ex_csrrs;
  wire       ex_csrrc;
  wire       ex_csrrwi;
  wire       ex_csrrsi;
  wire       ex_csrrci;
  wire       ex_csr_we;
  wire[11:0] ex_des_csr;
  wire       ex_ebreak;

  assign ex_csr_we = (ex_csrrs | ex_csrrw | ex_csrrc | ex_csrrwi | ex_csrrsi | ex_csrrci
   | ex_mret | ex_ecall);//id_to_ex_valid_reg
 
  wire cache_readygo = cache_state == 3'b110 | (!ex_memwrite & !ex_memread) | cache_pipelinehit;
  assign ex_ready_go = ((!(mul_type || mul_stage2) && 
  !(div_type || (div_state[0] ^ div_state[1]))) || mul_ok || div_ready)
  && cache_readygo;
  assign ex_allowin  = !ex_valid || ex_ready_go && mem_allowin;
  assign ex_to_mem_valid = ex_ready_go && ex_valid;
  assign 
  { ex_ebreak,
    ex_des_csr,
    ex_mret,        
    ex_ecall,       
    ex_csrrw,       
    ex_csrrs,       
    ex_csrrc,       
    ex_csrrwi,      
    ex_csrrsi,      
    ex_csrrci,      
    ex_pc,          
    ex_aluop,       
    ex_memop,       
    ex_reg_wen,     
    ex_memwrite,    
    ex_memread,     
    ex_rd,
    ex_rs1,     
    ex_rs2,       
    ex_inst_type,   
    ex_jalr,        
    ex_alu_input1,  
    ex_alu_input2,  
    ex_mem_wdata
  } = id_to_ex_bus_reg;

  assign ex_to_mem_bus = 
  { ex_ebreak,    //262:262
    ex_des_csr,   //261:250
    ex_alu_input1,//249:186
    ex_rs1,       //185:181
    ex_csr_we,    //180:180
    ex_mret,      //179:179
    ex_ecall,     //178:178
    ex_csrrw,     //177:177
    ex_csrrs,     //176:176
    ex_csrrc,     //175:175
    ex_csrrwi,    //174:174
    ex_csrrsi,    //173:173
    ex_csrrci,    //172:172
    ex_jalr,      //171:171
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
    if(rst)begin
      id_to_ex_bus_reg <= `ID_TO_EX_WIDTH'b0;
    end else if(id_to_ex_valid && ex_allowin) begin
      id_to_ex_bus_reg <= id_to_ex_bus;
      ex_flush <= id_flush | mem_mret | ex_mret;
    end else if(!mul_stage2 & !mul_type & !div_type
    & cache_readygo)begin 
      //critical: we need not flush the ex stage write signals when stalled by muls and cache
      id_to_ex_bus_reg[210:206] <= 5'b0;//ex_rd
      id_to_ex_bus_reg[211:211] <= 1'b0;//ex_memread
      id_to_ex_bus_reg[212:212] <= 1'b0;//ex_memwrite
      id_to_ex_bus_reg[213:213] <= 1'b0;//ex_reg_wen
      //id_to_ex_bus_reg[195:193] <= 3'b0;//ex_inst_type
    end
  end
 
  //assign ex_mem_waddr = ex_alu_output;
  //assign ex_mem_raddr = ex_alu_output;
  //30(aluop[5]), 25(aluop[4]), 14:12(ex_memop), 6:5(aluop[3:2]), 4:3(aluop[1:0])
  //138000ef ->010001
  ysyx_22040127_decoder_6_64 dec_rtype(.in({ex_aluop[5], ex_aluop[4], ex_memop, 
  ex_aluop[0]}),.out(rtype_alu_op));
  ysyx_22040127_decoder_5_32 dec_itype(.in({ex_aluop[1:0], ex_memop}),.out(itype_alu_op));

  localparam 
  op_add    = 6'b000000, op_mul   = 6'b010000, op_sub  = 6'b100000,
  op_addw   = 6'b000001, op_or    = 6'b001100, op_xor  = 6'b001000,
  op_sll    = 6'b000010, op_slt   = 6'b000100, op_sltu = 6'b000110,
  op_and    = 6'b001110, op_div   = 6'b011000, op_divu = 6'b011010,
  op_remu   = 6'b011110, op_rem   = 6'b011100, op_subw = 6'b100001,
  op_mulw   = 6'b010001, op_sllw  = 6'b000011, op_srl  = 6'b001010,
  op_sra    = 6'b101010, op_divw  = 6'b011001, op_srlw = 6'b001011, 
  op_sraw   = 6'b101011, op_divuw = 6'b011011, op_remw = 6'b011101, 
  op_remuw  = 6'b011111, op_mulhu = 6'b010110, op_mulh = 6'b010010,
  op_mulhsu = 6'b010100;
  localparam 
  op_addi  = 5'b10000,op_andi  = 5'b10111,op_ori  = 5'b10110,
  op_xori  = 5'b10100,op_sltiu = 5'b10011,op_sri  = 5'b10101,
  op_slli = 5'b10001, op_addiw = 5'b11000,op_slliw= 5'b11001,
  op_sriw = 5'b11101, op_slti  = 5'b10010;

  assign addw_result = ex_alu_input1[31:0] + ex_alu_input2[31:0];
  assign subw_result = ex_alu_input1[31:0] - ex_alu_input2[31:0];
  assign mulw_result = mul_res_low[31:0];

  assign divw_result  = quo[31:0];//$signed(ex_alu_input1[31:0]) / $signed(ex_alu_input2[31:0]);//to be deleted
  assign divuw_result = quo[31:0];//ex_alu_input1[31:0] / ex_alu_input2[31:0];//to be deleted
  assign remw_result  = rem[31:0];//$signed(ex_alu_input1[31:0]) % $signed(ex_alu_input2[31:0]);//to be deleted
  assign remuw_result = rem[31:0];//ex_alu_input1[31:0] % ex_alu_input2[31:0];//to be deleted

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

  /*
  wire[127:0]ans;
  wire[63:0]ans_high;
  wire[63:0]ans_low;
  //wire[63:0]ans_low2;
  assign ans = {{64{ex_alu_input1[63]}}, ex_alu_input1} * {{64{ex_alu_input2[63]}}, ex_alu_input2};
  assign ans_high = ans[127:64];
  assign ans_low  = ans[63:0];
  */
  assign sign1    = !(ex_memop[0] & ex_memop[1]); 
  assign sign2    = !ex_memop[1];
  assign mul_type = !(mul_stage2 || mul_ok) & (ex_inst_type == 3'b100)
   & (rtype_alu_op[op_mul] | rtype_alu_op[op_mulw] 
   | rtype_alu_op[op_mulh] | rtype_alu_op[op_mulhsu] | rtype_alu_op[op_mulhu]);//to be added(2/5)
  assign div_type = !(div_ready) & (ex_inst_type == 3'b100) & (rtype_alu_op[op_rem] | rtype_alu_op[op_remu] |
  rtype_alu_op[op_div]  | rtype_alu_op[op_remw]  | rtype_alu_op[op_remuw] | 
  rtype_alu_op[op_divu] | rtype_alu_op[op_divuw] | rtype_alu_op[op_divw]);
  assign div_sign = rtype_alu_op[op_div] | rtype_alu_op[op_divw] | 
  rtype_alu_op[op_rem] | rtype_alu_op[op_remw];

  ysyx_22040127_mul mul(
    clk, 
    rst, 
    ex_alu_input1, 
    ex_alu_input2,
    sign1,
    sign2, 
    mul_res_high, 
    mul_res_low,
    mul_type,
    mul_stage2,
    mul_ok
  );
  ysyx_22040127_div div(
    clk,
    rst,
    (rtype_alu_op[op_divw] | rtype_alu_op[op_divuw] | rtype_alu_op[op_remw] | rtype_alu_op[op_remuw])
     ? {{32{ex_alu_input1[31] & (rtype_alu_op[op_divw] | rtype_alu_op[op_remw])}}, ex_alu_input1[31:0]}
     : ex_alu_input1,
    (rtype_alu_op[op_divw] | rtype_alu_op[op_divuw] | rtype_alu_op[op_remw] | rtype_alu_op[op_remuw])
     ? {{32{ex_alu_input2[31] & (rtype_alu_op[op_divw] | rtype_alu_op[op_remw])}}, ex_alu_input2[31:0]}
     : ex_alu_input2,
    div_sign,//input s,//w or y is signed
    div_type,//input is_div,
    div_ready,
    div_state,
    quo,
    rem
  );
  assign rtype_calc_result = 
  {64{rtype_alu_op[op_add]}}  & (ex_alu_input1 + ex_alu_input2) |
  {64{rtype_alu_op[op_mul]}}  & (mul_res_low) | //(ex_alu_input1 * ex_alu_input2) |
  {64{rtype_alu_op[op_mulh]}}   & (mul_res_high) |
  {64{rtype_alu_op[op_mulhu]}}  & (mul_res_high) |
  {64{rtype_alu_op[op_mulhsu]}} & (mul_res_high) |
  {64{rtype_alu_op[op_sub]}}  & (ex_alu_input1 - ex_alu_input2) |
  {64{rtype_alu_op[op_sll]}}  & (res_sll) |        //to be tested
  {64{rtype_alu_op[op_slt]}}  & ($signed(ex_alu_input1) < $signed(ex_alu_input2) ? 1 : 0) |
  {64{rtype_alu_op[op_sltu]}} & (ex_alu_input1 < ex_alu_input2 ? 1 : 0) |
  {64{rtype_alu_op[op_and]}}  & (ex_alu_input1 & ex_alu_input2) |
  {64{rtype_alu_op[op_xor]}}  & (ex_alu_input1 ^ ex_alu_input2) |
  {64{rtype_alu_op[op_or]}}   & (ex_alu_input1 | ex_alu_input2) |
  {64{rtype_alu_op[op_div]}}  & quo  |
  {64{rtype_alu_op[op_divu]}} & quo  |
  {64{rtype_alu_op[op_remu]}} & rem  |
  {64{rtype_alu_op[op_rem]}}  & rem  |
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
  {64{itype_alu_op[op_slti]}} & ($signed(ex_alu_input1) < $signed(ex_alu_input2) ? 64'b1 : 64'b0)|//sltiu
  {64{itype_alu_op[op_sltiu]}}& (ex_alu_input1 < ex_alu_input2 ? 64'b1 : 64'b0)|//sltiu
  {64{itype_alu_op[op_sri] & ex_aluop[5] }} & (res_sra) |//srai
  {64{itype_alu_op[op_sri] & !ex_aluop[5]}} & (res_srl) |//srli
  {64{itype_alu_op[op_slli]}} & (res_sll) | //slli

  {64{itype_alu_op[op_addiw]}}  & sext_addw_result  | //addiw
  {64{itype_alu_op[op_slliw]}}  & sext_src1_sllw    | //slliw
  {64{itype_alu_op[op_sriw] & ex_aluop[5]  }} & sext_src1_sraw | //sraiw
  {64{itype_alu_op[op_sriw] & !ex_aluop[5] }} & sext_src1_srlw;  //srliw

  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  assign sub = ex_alu_input1 - ex_alu_input2;
  //num,out,in
  always @(*) begin
    case(ex_inst_type)
      TYPE_I : ex_alu_output = ex_jalr ? ({32'b0, ex_pc + 4}) : itype_calc_result;//I_type
      TYPE_S : ex_alu_output = ex_alu_input1 + ex_alu_input2;
      TYPE_U : ex_alu_output = ex_aluop[2] ? ex_alu_input1 : ex_alu_input1 + {32'b0,ex_pc}; //auipc:lui
      TYPE_R : ex_alu_output = rtype_calc_result;
      TYPE_J : ex_alu_output = {32'b0, ex_pc + 4};

      default: ex_alu_output = 0;
    endcase
  end
endmodule
