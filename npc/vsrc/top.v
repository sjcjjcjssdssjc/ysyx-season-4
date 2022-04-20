module ysyx_22040127_top(
  input clk,
  input rst,
  output reg[31:0] if_pc//if_pc
);
  reg [63:0] if_pcdata;
  wire[31:0] if_instruction;
  wire       ebreak;

  reg [63:0] reg_wdata;
  wire[63:0] alu_output;
  wire[31:0] id_branch_result;
  wire       id_branch_taken;
  wire[4:0]  id_rs1;
  wire[4:0]  id_rs2;
  wire[2:0]  id_inst_type;
  wire[63:0] id_regdata1;
  wire[63:0] id_regdata2;
  wire       id_jalr;


  wire        if_allowin;
  wire        id_allowin;
  wire        ex_allowin;
  wire        mem_allowin;
  wire        wb_allowin;//ready_go is distributed in every module.

  wire        if_to_id_valid;
  wire        if_to_id_valid;
  wire        id_to_ex_valid;
  wire        ex_to_mem_valid;
  wire        mem_to_wb_valid;

  wire[`IF_TO_ID_WIDTH - 1:0]  if_to_id_bus;
  wire[`ID_TO_EX_WIDTH - 1:0]  id_to_ex_bus;
  wire[`EX_TO_MEM_WIDTH - 1:0] ex_to_mem_bus;//width TBD
  wire[`MEM_TO_WB_WIDTH - 1:0] mem_to_wb_bus;//width TBD

  //bus to be added.
  //IF
  reg         if_valid;
  wire        if_ready_go;
  import "DPI-C" function void set_simtime();//terminate
  import "DPI-C" function void set_pc(input bit[31:0] pc);
  import "DPI-C" function void pmem_read(input longint raddr, output longint doubly_aligned_data);
  assign if_instruction = (if_pc[2]) ? if_pcdata[63:32] : if_pcdata[31:0];
  assign ebreak = (id_inst_type == 3'b110) & if_instruction[20]
      & !(|{if_instruction[31:21],if_instruction[19:7]});
  assign if_ready_go    = 1'b1;
  assign if_allowin     = !if_valid || if_ready_go && id_allowin;
  //once rst = 0, if_allowin is set to 1
  assign if_to_id_valid = if_valid && if_ready_go;//always ready to go
  assign if_to_id_bus   = {if_instruction, if_pc};

  always @(*)begin
    pmem_read({32'b0, if_pc}, if_pcdata);
  end

  always @(posedge clk) begin
    if(ebreak)//TYPE_N
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
    .id_regdata1(id_regdata1), 
    .id_regdata2(id_regdata2), 
    .id_branch_result(id_branch_result),
    .id_branch_taken(id_branch_taken),
    .ex_rd(ex_to_mem_bus[132:128]),
    .ex_alu_output(ex_to_mem_bus[127:64])
  );
  ysyx_22040127_execute exe(
    .clk(clk), 
    .rst(rst), 
    .ex_allowin(ex_allowin),
    .mem_allowin(mem_allowin),
    .id_to_ex_valid(id_to_ex_valid),
    .ex_to_mem_valid(ex_to_mem_valid),
    .id_to_ex_bus(id_to_ex_bus),
    .ex_to_mem_bus(ex_to_mem_bus)
  );
  ysyx_22040127_memory mem(
    .clk(clk),
    .rst(rst),
    .mem_allowin(mem_allowin),     //for last stage
    .wb_allowin(wb_allowin),       //from next stage
    .ex_to_mem_valid(ex_to_mem_valid),//from last stage
    .mem_to_wb_valid(mem_to_wb_valid),//for next stage
    .ex_to_mem_bus(ex_to_mem_bus),
    .mem_to_wb_bus(mem_to_wb_bus)
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
    .rdata2(id_regdata2)
  );//wb
  //Reg #(4, 4'b0) i1 (clk, rst, in, out, in[0]);
endmodule

