module ysyx_22040127_memory(
  input clk,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
  output[DATA_WIDTH-1:0] rdata1,
  output[DATA_WIDTH-1:0] rdata2
);
  reg [DATA_WIDTH-1:0] rf [(1<<ADDR_WIDTH)-1:0];
  wire non_zerow;//waddr != 0
  assign non_zerow = (|waddr);
  assign rf[0] = 64'b0;
  assign rdata1 = rf[raddr1];
  assign rdata2 = rf[raddr2];
  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量

  always @(posedge clk) begin
    if (wen && (|waddr)) rf[waddr] <= wdata;
  end
endmodule
