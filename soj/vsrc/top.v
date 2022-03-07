module top(
  input clk,
  input rst,
  input  [31:0] instruction,
  output [31:0] pc,
);
  wire [63:0] wdata;
  wire wen;
  reg [31:0]pc = 32'h80000000;
  wire[4:0] rd;
  wire[4:0] rs1;
  wire[4:0] rs2;
  wire[2:0] inst_type;
  wire[63:0] imm;
  wire[63:0] src0;
  wire[63:0] src1;
  RegisterFile #(5, 64) regs(clk, wdata, rd, rs1, rs2, wen, src0, src1);
  always @(posedge clk) begin
    if(rst == 1'b1)
      pc <= 32'h80000000;
    else pc <= 0;
  end
  decode dec(instruction, clk, rst, rd, rs1, rs2, inst_type);
  execude exe();
  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

