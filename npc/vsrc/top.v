module ysyx_22040127_top(
  input clk,
  input rst,
  input  [31:0] instruction,
  output reg[31:0] pc
);
  reg [63:0] reg_wdata;
  wire [63:0] alu_output;
  wire reg_wen;
  wire[4:0]  rd;
  wire[4:0]  rs1;
  wire[4:0]  rs2;
  wire[2:0]  inst_type;
  wire[63:0] imm;//output of decode
  wire       imm_src0;//src0 is imm
  wire       imm_src1;
  wire       ebreak;
  wire[63:0] src0;
  wire[63:0] src1;
  wire[63:0] reg_data0;
  wire[63:0] reg_data1;
  wire       jalr;
  
  assign imm_src0 = (inst_type == 3'b001 || inst_type == 3'b011);//type_u,type_j
  assign imm_src1 = (inst_type == 3'b000);//type_i
  assign src0 = imm_src0 ? imm :reg_data0;
  assign src1 = imm_src1 ? imm :reg_data1;
  assign jalr = inst_type == 3'b000 && instruction[6:5] == 2'b11; 
  assign ebreak = (inst_type == 3'b110) & instruction[20]
      & !(|{instruction[31:21],instruction[19:7]});
  import "DPI-C" function void set_simtime();
  import "DPI-C" function void set_pc(input bit[31:0] pc);
  always @(*)begin
    if(jalr) reg_wdata = {32'b0, pc + 4};
    else reg_wdata = alu_output;
  end

  always @(posedge clk) begin
    if(ebreak)//TYPE_N
      set_simtime();
  end

  always @(posedge clk) begin
    if(rst == 1'b1)
      pc <= 32'h80000000;
    else if(inst_type == 3'b001 && instruction[5] || inst_type == 3'b011)//type_u:auipc,j
      pc <= pc + src0[31:0];
    else if(jalr) pc <= alu_output[31:0] & (~1);
    else pc <= pc + 4;
    set_pc(pc);
  end
  ysyx_22040127_decode dec(instruction, clk, rst, reg_wen, rd, rs1, rs2, inst_type, imm);
  ysyx_22040127_execute exe(instruction, clk, rst, pc, src0, src1, imm, inst_type, alu_output);
  ysyx_22040127_RegisterFile #(5, 64) regs(clk, reg_wen, reg_wdata, rd, rs1, rs2, reg_data0, reg_data1);//wb
  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

