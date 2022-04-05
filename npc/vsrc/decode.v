module ysyx_22040127_decode(
  input [31:0] instruction,
  input [63:0] reg_data1,
  input [63:0] reg_data2,
  input [31:0] pc,
  input clk,
  input rst,
  output reg_wen,
  output memread,
  output[4:0] rd,
  output[4:0] rs1,
  output[4:0] rs2,
  output reg[2:0] inst_type,
  output reg[63:0] imm,
  output[63:0] alu_input1,
  output[63:0] alu_input2,
  output[63:0] mem_wdata,
  output[31:0] branch_result,
  output       branch_taken
);
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
   TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  wire   beq,bne,blt,bltu,bge,bgeu;
  wire       imm_src1;//src1 is imm
  wire       imm_src2;
  assign beq  = !(|instruction[14:12]);
  assign bne  = !(|instruction[14:13]) & instruction[12];
  assign blt  = instruction[14:12] == 3'b100;
  assign bltu = instruction[14:12] == 3'b110;
  assign bge  = instruction[14:12] == 3'b101;
  assign bgeu = instruction[14:12] == 3'b111;

  assign rd  = instruction[11:7];
  assign rs1 = instruction[19:15];
  assign rs2 = instruction[24:20];

  assign imm_src1 = (inst_type == TYPE_U || inst_type == TYPE_J);//type_u,type_j
  assign imm_src2 = (inst_type == TYPE_I || inst_type == TYPE_S);//type_i
  assign alu_input1 = imm_src1 ? imm :reg_data1;
  assign alu_input2 = imm_src2 ? imm :reg_data2;
  assign mem_wdata = reg_data2;//rs2
  assign branch_result = branch_taken ? pc + imm[31:0]: pc + 4;
  assign branch_taken = beq && (reg_data1 == reg_data2)
  || bne  && (reg_data1 != reg_data2)//for B_TYPE only
  || blt  && ($signed(reg_data1) <  $signed(reg_data2))
  || bltu && reg_data1 < reg_data2
  || bge  && ($signed(reg_data1) >= $signed(reg_data2))
  || bgeu && reg_data1 >= reg_data2;
  //assign imm = {{52{instruction[31]}},instruction[31:20]};
  assign reg_wen = !(|inst_type) || inst_type == TYPE_U || inst_type == TYPE_J
  || inst_type == TYPE_R;//typeI is first
  assign memread = !instruction[2] & !instruction[3] & !instruction[4] 
  & !instruction[5] & !instruction[6] ;//right?
  //typei,typeu writes register
  always @(*)begin
    case(inst_type)
      3'b001:imm = {{32{instruction[31]}}, instruction[31:12], 12'b0};
      3'b000:imm = {{52{instruction[31]}}, instruction[31:20]};
      3'b011:imm = {{43{instruction[31]}}, instruction[31], instruction[19:12], instruction[20],
      instruction[30:21], 1'b0};
      3'b110:imm = {{52{instruction[31]}}, instruction[31:20]};
      3'b010:imm = {{52{instruction[31]}}, instruction[31:25], instruction[11:7]};//might be wrong
      3'b101:imm = {{51{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
      default:imm = 64'b0;
    endcase
  end
  //number of keys,width of key/data (output input 
  
  ysyx_22040127_MuxKeyWithDefault #(12, 7, 3) inst_mux (inst_type, instruction[6:0], TYPE_I,{
    7'b0010111,TYPE_U,//auipc
    7'b0110111,TYPE_U,//lui

    7'b0011011,TYPE_I,//addiw,sraiw,srliw,slliw
    7'b0010011,TYPE_I,//addi,andi,ori,xori,sltiu,srai,srli,slli(new)
    7'b0000011,TYPE_I,//lb,lh,lw,ld,lbu,lhu,lwu(src1+src2)
    7'b1100111,TYPE_I,//jalr

    7'b1101111,TYPE_J,//jal
    7'b0111011,TYPE_R,//addw subw mulw sllw srlw sraw divw divuw remw remuw
    7'b0110011,TYPE_R,//add mul sub sll slt sltu xor or and
    7'b1110011,TYPE_N,//ebreak
    7'b0100011,TYPE_S,//sb sh sw sd
    7'b1100011,TYPE_B //beq bne
    //load and store are problematic
    //49
  });
  
endmodule