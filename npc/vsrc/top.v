module ysyx_22040127_top(
  input clk,
  input rst,
  output reg[31:0] pc
);
  reg [63:0] pcdata;
  wire[31:0] instruction;

  reg [63:0] reg_wdata;
  wire[63:0] alu_output;
  wire[31:0] branch_result;
  wire       branch_taken;
  wire reg_wen;
  wire[4:0]  rd;
  wire[4:0]  rs1;
  wire[4:0]  rs2;
  wire[2:0]  inst_type;
  wire[63:0] imm;//output of decode
  wire       ebreak;
  wire[63:0] alu_input1;
  wire[63:0] alu_input2;
  wire[63:0] reg_data1;
  wire[63:0] reg_data2;
  wire       jalr;
  wire       lb,lh,lw,ld,lbu,lhu,lwu;
  wire       sb,sh,sw,sd;

  wire [63:0] mem_wdata;
  wire [63:0] mem_waddr;
  wire [63:0] mem_raddr;
  wire [63:0] mem_rdata;
  wire        memread;
  wire        memwrite;

  //ID
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  assign jalr = inst_type == 3'b000 && instruction[6:5] == 2'b11; 

  assign ebreak = (inst_type == 3'b110) & instruction[20]
      & !(|{instruction[31:21],instruction[19:7]});
  assign instruction = (pc[2]) ? pcdata[63:32] : pcdata[31:0];
  assign lb = instruction[14:12] == 3'b000;
  assign lh = instruction[14:12] == 3'b001;
  assign lw = instruction[14:12] == 3'b010;
  assign lbu = instruction[14:12] == 3'b100;
  assign lhu = instruction[14:12] == 3'b101;
  assign lwu = instruction[14:12] == 3'b110;
  assign ld = instruction[14:12] == 3'b011;

  assign sb = instruction[13:12] == 2'b00;
  assign sh = instruction[13:12] == 2'b01;
  assign sw = instruction[13:12] == 2'b10;
  assign sd = instruction[13:12] == 2'b11;
  assign memwrite = (inst_type == TYPE_S);
  //inst_type == 3'b001 && instruction[5]: lui
  

  import "DPI-C" function void set_simtime();//terminate
  import "DPI-C" function void set_pc(input bit[31:0] pc);
  import "DPI-C" function void pmem_read(
  input longint raddr, output longint doubly_aligned_data);
  always @(*)begin
    pmem_read({32'b0, pc}, pcdata);
    if(jalr) reg_wdata = {32'b0, pc + 4};
    else if(memread) reg_wdata = mem_rdata;
    else reg_wdata = alu_output;
  end

  always @(posedge clk) begin
    if(ebreak)//TYPE_N
      set_simtime();
  end

  always @(posedge clk) begin
    if(rst == 1'b1)
      pc <= 32'h80000000;
    else if(inst_type == TYPE_J)//type_u:auipc,j
      pc <= pc + alu_input1[31:0];
    else if(inst_type == TYPE_B) pc <= branch_result;
    else if(jalr) pc <= alu_output[31:0] & (~1);
    else pc <= pc + 4;
    set_pc(pc);
  end
  ysyx_22040127_decode dec(instruction, reg_data1, reg_data2, pc, clk, rst, reg_wen, memread,
  rd, rs1, rs2, inst_type, imm, alu_input1, alu_input2, mem_wdata, branch_result,
  branch_taken);
  ysyx_22040127_execute exe(instruction, clk, rst, pc, alu_input1, alu_input2, imm, inst_type, 
  memread, alu_output, mem_waddr, mem_raddr);
  ysyx_22040127_memory mem(.clk(clk),.memwrite(memwrite),.wdata(mem_wdata),.waddr(mem_waddr),
  .raddr(mem_raddr),.lb(lb),.lh(lh),.lw(lw),.ld(ld),
  .lbu(lbu),.lhu(lhu),.lwu(lwu),.sext_data(mem_rdata),.sb(sb),.sh(sh),.sw(sw),.sd(sd));
  ysyx_22040127_RegisterFile #(5, 64) regs(clk, reg_wen, reg_wdata, rd, rs1, rs2,
  reg_data1, reg_data2);//wb
  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

