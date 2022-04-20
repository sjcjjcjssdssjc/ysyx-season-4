`include "mycpu.h"

module ysyx_22040127_RegisterFile (
  input clk,
  input rst,
  output       wb_allowin,    //for last stage
  input        mem_to_wb_valid, //from last stage
  input [`MEM_TO_WB_WIDTH-1:0] mem_to_wb_bus,
  input [4:0] raddr1,
  input [4:0] raddr2,
  output[63:0] rdata1,
  output[63:0] rdata2
);
  reg [63:0] rf [31:0];
  wire[4:0]  wb_rd;
  reg [63:0] wb_reg_wdata;
  reg [`MEM_TO_WB_WIDTH-1:0] mem_to_wb_bus_reg;
  wire wb_reg_wen;
  wire non_zerow;
  assign non_zerow = (|wb_rd);
  assign rf[0] = 64'b0;
  assign rdata1 = rf[raddr1];
  assign rdata2 = rf[raddr2];
  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(rf);

  reg  wb_valid;
  wire wb_ready_go;
  assign wb_ready_go = 1'b1;
  assign wb_allowin  = !wb_valid || wb_ready_go;
  assign 
  { wb_reg_wen,
    wb_rd,
    wb_reg_wdata
  } = mem_to_wb_bus_reg;

  always @(posedge clk) begin
    if(rst) begin
      wb_valid <= 1'b0;      
    end else if(wb_allowin)begin
      wb_valid <= mem_to_wb_valid;
    end
    
    if(mem_to_wb_valid && wb_allowin) begin
      mem_to_wb_bus_reg <= mem_to_wb_bus;
    end
  end

  always @(posedge clk) begin
    if (wb_reg_wen && (|wb_rd)) rf[wb_rd] <= wb_reg_wdata;
  end
endmodule
