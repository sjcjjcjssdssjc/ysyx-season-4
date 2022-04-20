`include "mycpu.h"

module ysyx_22040127_decode(
  input        clk,
  input        rst,
  output       id_allowin,    //for last stage
  input        ex_allowin,    //from next stage
  input        if_to_id_valid,//from last stage
  output       id_to_ex_valid,//for next stage
  output[`ID_TO_EX_WIDTH - 1:0]id_to_ex_bus,
  input [`IF_TO_ID_WIDTH - 1:0]if_to_id_bus,
  output[4:0]  id_rs1,
  output[4:0]  id_rs2,
  input [63:0] id_regdata1,
  input [63:0] id_regdata2,
  output[31:0] id_branch_result,
  output       id_branch_taken,
  input[4:0]   ex_rd,
);
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
   TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  wire       beq;
  wire       bne;
  wire       blt;
  wire       bltu;
  wire       bge;
  wire       bgeu;
  wire       btype_taken; 
  wire       imm_src1;//whether src1 is imm?
  wire       imm_src2;//whether src2 is imm?

  //outputs
  wire[5:0]id_aluop;
  wire[2:0]id_memop;
  wire[4:0]id_rd;
  wire id_reg_wen;
  wire id_memwrite;
  wire id_memread;
  reg[2:0]   id_inst_type;
  reg[63:0]  id_imm;
  wire       id_jalr;
  wire[63:0] id_alu_input1;
  wire[63:0] id_alu_input2;
  wire[63:0] id_mem_wdata;

  //hazard
  wire   id_raw_hazard1;
  wire   id_raw_hazard2;
  assign id_raw_hazard1 = ex_rd && (ex_rd == id_rs1);
  assign id_raw_hazard2 = ex_rd && (ex_rd == id_rs2);

  //for pipeline
  wire       id_ready_go;
  reg        id_valid;
  reg[`IF_TO_ID_WIDTH - 1:0]  if_to_id_bus_reg; 
  assign id_to_ex_bus
  = {id_pc,          //254:223
     id_aluop,       //222:217
     id_memop,       //216:214
     id_reg_wen,     //213:213
     id_memwrite,    //212:212
     id_memread,     //211:211
     id_rd,          //210:206
     id_raw_hazard1 ? id_rs1 : ex_alu_output,         //205:201
     id_raw_hazard2 ? id_rs2 : ex_alu_output,         //200:196
     id_inst_type,   //195:193
     id_jalr,        //192:192
     id_alu_input1,  //191:128
     id_alu_input2,  //127:64
     id_mem_wdata    //63:0
    };

  assign id_memop = id_instruction[14:12];
  assign id_aluop = {id_instruction[30], id_instruction[25], id_instruction[6:5], id_instruction[4:3]};
  assign id_memwrite = (id_inst_type == TYPE_S);//for mem

  assign beq  = !(|id_instruction[14:12]);//in id only
  assign bne  = !(|id_instruction[14:13]) & id_instruction[12];
  assign blt  = id_instruction[14:12] == 3'b100;
  assign bltu = id_instruction[14:12] == 3'b110;
  assign bge  = id_instruction[14:12] == 3'b101;
  assign bgeu = id_instruction[14:12] == 3'b111;

  assign id_rd  = id_instruction[11:7];
  assign id_rs1 = id_instruction[19:15];
  assign id_rs2 = id_instruction[24:20];

  assign imm_src1 = (id_inst_type == TYPE_U || id_inst_type == TYPE_J);//type_u,type_j
  assign imm_src2 = (id_inst_type == TYPE_I || id_inst_type == TYPE_S);//type_i
  assign id_alu_input1 = imm_src1 ? id_imm :id_regdata1;
  assign id_alu_input2 = imm_src2 ? id_imm :id_regdata2;
  assign id_mem_wdata = id_regdata2;

  assign id_jalr = id_inst_type == 3'b000 && id_instruction[6:5] == 2'b11; 
  assign id_branch_result = {32{btype_taken}} & (id_pc + id_imm[31:0]) |
  {32{id_jalr}} & ((id_regdata1[31:0] + {{20{id_instruction[31]}}, id_instruction[31:20]}) & (~1))|
  {32{id_inst_type == TYPE_J}} & (id_pc + id_alu_input1[31:0]);//jal
  assign id_branch_taken = (btype_taken && (id_inst_type == TYPE_B))|| id_jalr || (id_inst_type == TYPE_J);
  assign btype_taken  = beq && (id_regdata1 == id_regdata2)
  || bne  && (id_regdata1 != id_regdata2)//for B_TYPE only
  || blt  && ($signed(id_regdata1) <  $signed(id_regdata2))
  || bltu && id_regdata1 < id_regdata2
  || bge  && ($signed(id_regdata1) >= $signed(id_regdata2)) 
  || bgeu && id_regdata1 >= id_regdata2;

  assign id_reg_wen = !(|id_inst_type) || id_inst_type == TYPE_U || id_inst_type == TYPE_J
  || id_inst_type == TYPE_R;//typeI is first
  assign id_memread = !id_instruction[2] & !id_instruction[3] & !id_instruction[4] 
  & !id_instruction[5] & !id_instruction[6] ;//right?

  //pipeline
  assign id_ready_go = 1'b1;
  assign id_allowin  = !id_valid || id_ready_go && ex_allowin;//!id_valid is for the begining 
  assign id_to_ex_valid = id_ready_go && id_valid;//all about id. Has nothing to do with ex

  wire[31:0] id_pc;
  wire[31:0] id_instruction;
  assign {id_instruction, id_pc} = if_to_id_bus_reg;//data from if delayed a cycle

  always @(posedge clk) begin
    if(rst) begin
      id_valid <= 1'b0;      
    end else if(id_allowin)begin//the valid from last stage
      id_valid <= if_to_id_valid;
    end

    if(if_to_id_valid && id_allowin) begin
      if_to_id_bus_reg <= if_to_id_bus;
    end
  end

  //typei,typeu writes register
  always @(*)begin
    case(id_inst_type)
      3'b001:id_imm = {{32{id_instruction[31]}}, id_instruction[31:12], 12'b0};
      3'b000:id_imm = {{52{id_instruction[31]}}, id_instruction[31:20]};
      3'b011:id_imm = {{43{id_instruction[31]}}, id_instruction[31], 
      id_instruction[19:12], id_instruction[20], id_instruction[30:21], 1'b0};
      3'b110:id_imm = {{52{id_instruction[31]}}, id_instruction[31:20]};
      3'b010:id_imm = {{52{id_instruction[31]}}, id_instruction[31:25], 
      id_instruction[11:7]};//might be wrong
      3'b101:id_imm = {{51{id_instruction[31]}}, id_instruction[31], id_instruction[7], id_instruction[30:25], id_instruction[11:8], 1'b0};
      default:id_imm = 64'b0;
    endcase
  end
  //number of keys,width of key/data (output input 
  
  ysyx_22040127_MuxKeyWithDefault #(12, 7, 3) inst_mux (id_inst_type, id_instruction[6:0], TYPE_I,{
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
    //49
  });
  
endmodule