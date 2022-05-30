`include "mycpu.h"

module ysyx_22040127_top(
  input clk,
  input rst,
  output reg[31:0] if_pc,
  output           wb_valid,
  output    [31:0] wb_pc,
  output wire[63:0] mepc,
  output wire[63:0] mtvec,
  output wire[63:0] mstatus,
  output wire[63:0] mcause,
  output wire[63:0] mie,
  output wire[63:0] mip,
  output wire[63:0] mscratch,
  output wire[63:0] mtval
);
  //TODO: add difftest to mhartid between nemu and npc, nemu and spike
  wire[63:0] mhartid;
  assign mtval = 64'b0;
  //todo: branchstall, load-use
  reg [63:0] if_pcdata;
  wire[31:0] if_instruction;
  wire       if_ebreak;
  wire       if_uart;//temporary(dpic is also)
  reg        id_ebreak;
  reg        ex_ebreak;
  reg        mem_ebreak;
  reg        wb_ebreak;

  reg [63:0] reg_wdata;
  wire[63:0] alu_output;
  wire[31:0] id_branch_result;
  wire       id_branch_taken;
  wire[4:0]  id_rs1;
  wire[4:0]  id_rs2;
  wire[63:0] id_regdata1;
  wire[63:0] id_regdata2;
  wire       id_jalr;


  wire        if_allowin;
  wire        id_allowin;
  wire        ex_allowin;
  wire        ex_ready_go;
  wire        mem_allowin;
  wire        wb_allowin;//ready_go is distributed in every module.
  wire        cache_pipelinehit;

  wire        if_to_id_valid;
  wire        if_to_id_valid;
  wire        id_to_ex_valid;
  wire        ex_to_mem_valid;
  wire        mem_to_wb_valid;

  wire        if_flush;
  wire        id_flush;
  wire        ex_flush;
  wire        mem_flush;
 // wire        wb_flush;

  wire[`IF_TO_ID_WIDTH - 1:0]  if_to_id_bus;
  wire[`ID_TO_EX_WIDTH - 1:0]  id_to_ex_bus;
  wire[`EX_TO_MEM_WIDTH - 1:0] ex_to_mem_bus;//width TBD
  wire[`MEM_TO_WB_WIDTH - 1:0] mem_to_wb_bus;//width TBD
  wire[63:0] mem_alu_output;
  wire       mem_memread;
  wire[63:0] mem_final_rdata;
  wire[63:0] wb_reg_wdata;
  wire[63:0] wb_csrwdata;
  wire[63:0] wb_csrrdata;
  wire       wb_mret;
  wire       wb_csr_we;
  wire[4:0]  wb_rd;
  wire       wb_reg_wen;
  wire       diff_output_ready;
  wire[2:0]  cache_state;
  //bus to be added.
  //IF
  reg         if_valid;
  wire        if_ready_go;
  import "DPI-C" function void set_simtime();//terminate
  import "DPI-C" function void set_pc(input bit[31:0] pc);
  import "DPI-C" function void pmem_read(input longint raddr, output longint doubly_aligned_data);
  assign if_flush  = wb_mret;
  assign if_instruction = (if_pc[2]) ? if_pcdata[63:32] : if_pcdata[31:0];
  assign if_ebreak = (if_instruction[6:0] == 7'b1110011) & if_instruction[20]
      & !(|{if_instruction[31:21],if_instruction[19:7]});
  assign if_uart   = if_instruction[6:0] == 7'b1111011;
  assign if_ready_go    = 1'b1;
  assign if_allowin     = !if_valid || if_ready_go && id_allowin;
  //once rst = 0, if_allowin is set to 1
  assign if_to_id_valid = if_valid && if_ready_go;//always ready to go
  assign if_to_id_bus   = {(id_branch_taken | wb_mret | if_uart ? 32'b0 : if_instruction), if_pc};

  always @(*)begin //need change to posedge clock
    if(if_pc >= 32'h80000000)pmem_read({32'b0, if_pc}, if_pcdata);
    else pmem_read({64'h80000000}, if_pcdata);
  end

  always @(posedge clk) begin
    id_ebreak <= if_ebreak;
    ex_ebreak <= id_ebreak;
    mem_ebreak <= ex_ebreak;
    wb_ebreak <= mem_ebreak;
    if(wb_ebreak)//TYPE_N
      set_simtime();
  end

  always @(posedge clk) begin
    if(rst) begin
      if_valid <= 1'b0;
    end else if(if_allowin)begin
      if_valid <= 1'b1;
    end

    if(rst == 1'b1)
      if_pc <= 32'h80000000;
    else if(id_branch_taken && if_allowin) if_pc <= id_branch_result;//id_inst_type == TYPE_B -> id_branch_taken
    else if(wb_mret)if_pc <= mepc[31:0];
    else if(if_allowin)if_pc <= if_pc + 4;

    //else if(id_inst_type == TYPE_J && if_allowin)//type_u:auipc,j (to_if_valid is deprecated)
    //  pc <= pc + alu_input1[31:0];
    //else if(jalr && if_allowin) pc <= alu_output[31:0] & (~1);
    //else if(if_allowin)pc <= pc + 4;

    set_pc(if_pc);
  end

  //ID
  localparam TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
  TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, TYPE_N = 3'b110;
  
  ysyx_22040127_decode dec(
    .clk(clk), 
    .rst(rst), 
    .id_allowin(id_allowin),
    .ex_allowin(ex_allowin),
    .if_to_id_valid(if_to_id_valid),
    .id_to_ex_valid(id_to_ex_valid),
    .id_to_ex_bus(id_to_ex_bus),
    .if_to_id_bus(if_to_id_bus),
    .id_rs1(id_rs1),
    .id_rs2(id_rs2),
    .id_regdata1_tmp(id_regdata1), 
    .id_regdata2_tmp(id_regdata2), 
    .id_branch_result(id_branch_result),
    .id_branch_taken(id_branch_taken),
    .ex_rd(ex_to_mem_bus[132:128]),
    .mem_rd(mem_to_wb_bus[68:64]),
    .wb_rd(wb_rd),
    .ex_alu_output(ex_to_mem_bus[127:64]),
    .mem_alu_output(mem_alu_output),
    .wb_reg_wdata(wb_reg_wdata),
    .ex_memread(ex_to_mem_bus[133:133]),
    .mem_memread(mem_memread),
    .mem_final_rdata(mem_final_rdata),
    .ex_reg_wen(ex_to_mem_bus[135:135]),
    .mem_reg_wen(mem_to_wb_bus[69:69]),
    .wb_reg_wen(wb_reg_wen),
    .mem_mret(mem_to_wb_bus[109:109]),
    .ex_csr_we(ex_to_mem_bus[180:180]),
    .mem_csr_we(mem_to_wb_bus[110:110]),
    .wb_csr_we(wb_csr_we),
    .if_flush(if_flush),
    .id_flush(id_flush)
  );
  ysyx_22040127_execute exe(
    .clk(clk), 
    .rst(rst), 
    .ex_allowin(ex_allowin),
    .mem_allowin(mem_allowin),
    .id_to_ex_valid(id_to_ex_valid),
    .ex_to_mem_valid(ex_to_mem_valid),
    .id_to_ex_bus(id_to_ex_bus),
    .ex_to_mem_bus(ex_to_mem_bus),
    .mem_mret(mem_to_wb_bus[109:109]),
    .id_flush(id_flush),
    .cache_pipelinehit(cache_pipelinehit),
    .cache_state(cache_state),
    .ex_flush(ex_flush),
    .ex_ready_go(ex_ready_go)
  );
  ysyx_22040127_memory mem(
    .clk(clk),
    .rst(rst),
    .mem_allowin(mem_allowin),     //for last stage
    .wb_allowin(wb_allowin),       //from next stage
    .ex_to_mem_valid(ex_to_mem_valid),//from last stage
    .mem_to_wb_valid(mem_to_wb_valid),//for next stage
    .ex_to_mem_bus(ex_to_mem_bus),
    .mem_to_wb_bus(mem_to_wb_bus),
    .mem_alu_output(mem_alu_output),
    .mem_final_rdata(mem_final_rdata),
    .mem_memread(mem_memread),
    .ex_flush(ex_flush),
    .ex_ready_go(ex_ready_go),
    .mem_flush(mem_flush),
    .diff_output_ready(diff_output_ready),
    .cache_pipelinehit(cache_pipelinehit),
    .cache_state(cache_state)
  );
  ysyx_22040127_RegisterFile wb(
    .clk(clk), 
    .rst(rst),
    .wb_allowin(wb_allowin),           //for last stage
    .mem_to_wb_valid(mem_to_wb_valid), //from last stage
    .mem_to_wb_bus(mem_to_wb_bus),
    .raddr1(id_rs1), 
    .raddr2(id_rs2),
    .rdata1(id_regdata1), 
    .rdata2(id_regdata2),
    .wb_rd(wb_rd),
    .wb_reg_wdata(wb_reg_wdata),
    .wb_valid(wb_valid),
    .wb_pc(wb_pc),
    .wb_reg_wen(wb_reg_wen),
    .wb_csrwdata(wb_csrwdata),
    .wb_csrrdata(wb_csrrdata),
    .wb_mret(wb_mret),
    .wb_csr_we(wb_csr_we),
    .csr_mepc(mepc),
    .csr_mtvec(mtvec),
    .csr_mstatus(mstatus),
    .csr_mcause(mcause),
    .csr_mie(mie),
    .csr_mip(mip),
    .csr_mscratch(mscratch),
    .csr_mhartid(mhartid),
    .mem_flush(mem_flush)
  );//wb
  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

