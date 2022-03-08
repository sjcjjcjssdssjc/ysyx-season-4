module ysyx_22040127_top(
  input clk,
  input rst,
  input  [31:0] instruction,
  output reg[31:0] pc
);
  wire [63:0] r_wdata;
  wire r_wen;//reg_wen
  wire[4:0]  rd;
  wire[4:0]  rs1;
  wire[4:0]  rs2;
  wire[2:0]  inst_type;
  wire[63:0] imm;
  wire       imm_src0;//src0 is imm
  wire       imm_src1;
  wire       ebreak;
  wire[63:0] src0;
  wire[63:0] src1;
  wire[63:0] reg_data0;
  wire[63:0] reg_data1;
  assign imm_src0 = 0;
  assign imm_src1 = (inst_type == 3'b000);
  assign src0 = reg_data0;
  assign src1 = imm_src1 ? imm :reg_data1;
  assign ebreak = (inst_type == 3'b110) & instruction[20]
      & !(|{instruction[31:21],instruction[19:7]});
  import "DPI-C" function void set_simtime();
  always @(posedge clk) begin
    if(ebreak)//TYPE_N
      set_simtime();
  end

  ysyx_22040127_RegisterFile #(5, 64) regs(clk, r_wen, r_wdata, rd, rs1, rs2, reg_data0, reg_data1);
  always @(posedge clk) begin
    if(rst == 1'b1)
      pc <= 32'h80000000;
    else pc <= pc + 4;
  end
  ysyx_22040127_decode dec(instruction, clk, rst, r_wen, rd, rs1, rs2, inst_type, imm);
  ysyx_22040127_execute exe(instruction, clk, rst, src0, src1, imm, inst_type, r_wdata);
  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

