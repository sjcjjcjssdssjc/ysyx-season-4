module ysyx_22040127_top(
  input clk,
  input rst,
  output reg[31:0] pc
);
  reg [63:0] pcdata;
  wire[31:0] instruction;

  reg [63:0] reg_wdata;
  wire [63:0] alu_output;
  wire [31:0] branch_result;
  wire reg_wen;
  wire[4:0]  rd;
  wire[4:0]  rs1;
  wire[4:0]  rs2;
  wire[2:0]  inst_type;
  wire[63:0] imm;//output of decode
  wire       imm_src1;//src1 is imm
  wire       imm_src2;
  wire       ebreak;
  wire[63:0] alu_input1;
  wire[63:0] alu_input2;
  wire[63:0] reg_data1;
  wire[63:0] reg_data2;
  wire       jalr;
  wire       beq,bne,blt,bltu,bge,bgeu;
  wire       branch_taken;
  wire       lb,lh,lw,ld,lbu,lhu,lwu;
  wire       sb,sh,sw,sd;

  wire [63:0] mem_wdata;
  wire [63:0] mem_waddr;
  wire [63:0] mem_raddr;
  wire [63:0] loaded_data;
  wire        memread;
  wire        memwrite;

  //ID
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  assign imm_src1 = (inst_type == TYPE_U || inst_type == TYPE_J);//type_u,type_j
  assign imm_src2 = (inst_type == TYPE_I || inst_type == TYPE_S);//type_i
  assign jalr = inst_type == 3'b000 && instruction[6:5] == 2'b11; 
  assign beq  = !(|instruction[14:12]);
  assign bne  = !(|instruction[14:13]) & instruction[12];
  assign blt  = instruction[14:12] == 3'b100;
  assign bltu = instruction[14:12] == 3'b110;
  assign bge  = instruction[14:12] == 3'b101;
  assign bgeu = instruction[14:12] == 3'b111;

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
  

  //EX
  assign alu_input1 = imm_src1 ? imm :reg_data1;
  assign alu_input2 = imm_src2 ? imm :reg_data2;
  assign mem_wdata = reg_data2;//rs2
  assign mem_waddr = alu_output;
  assign mem_raddr = alu_output;
  assign branch_result = branch_taken ? pc + imm[31:0]: pc + 4;
  assign branch_taken = beq && (reg_data1 == reg_data2)
  || bne  && (reg_data1 != reg_data2)//for B_TYPE only
  || blt  && ($signed(reg_data1) <  $signed(reg_data2))
  || bltu && reg_data1 < reg_data2
  || bge  && ($signed(reg_data1) >= $signed(reg_data2))
  || bgeu && reg_data1 >= reg_data2;

  import "DPI-C" function void set_simtime();//terminate
  import "DPI-C" function void set_pc(input bit[31:0] pc);
  import "DPI-C" function void pmem_read(
  input longint raddr, output longint doubly_aligned_data);
  always @(*)begin
    pmem_read({32'b0, pc}, pcdata);
    if(jalr) reg_wdata = {32'b0, pc + 4};
    else if(memread) reg_wdata = loaded_data;
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
  ysyx_22040127_decode dec(instruction, clk, rst, reg_wen, memread,
  rd, rs1, rs2, inst_type, imm);
  ysyx_22040127_execute exe(instruction, clk, rst, pc, alu_input1, alu_input2, imm, inst_type, 
  memread, alu_output);
  ysyx_22040127_RegisterFile #(5, 64) regs(clk, reg_wen, reg_wdata, rd, rs1, rs2, reg_data1, reg_data2);//wb
  ysyx_22040127_memory mem(.clk(clk),.memwrite(memwrite),.wdata(mem_wdata),.waddr(mem_waddr),
  .raddr(mem_raddr),.lb(lb),.lh(lh),.lw(lw),.ld(ld),
  .lbu(lbu),.lhu(lhu),.lwu(lwu),.loaded_data(loaded_data),.sb(sb),.sh(sh),.sw(sw),.sd(sd));

  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

