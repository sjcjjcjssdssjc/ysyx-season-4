module ysyx_22040127_booth (
  input clk,
  input rst,
  input[64:0] x,
  input[2:0]  y,
  output reg[127:0] z//output
);
  wire[64:0] x_comp;
  assign     x_comp = (~x) + 1;
  always @(posedge clk) begin
    z <= {128{y == 3'b000 || y == 3'b111}} & 128'b0      |
    {128{y == 3'b001 || y == 3'b010}} & {{63{x[64]}}, x}           |
    {128{y == 3'b101 || y == 3'b110}} & {{63{x_comp[64]}}, x_comp} |
    {128{y == 3'b011}} & {{62{x[64]}}, x, 1'b0}                    |
    {128{y == 3'b100}} & {{62{x_comp[64]}}, x_comp, 1'b0};
  end

endmodule

module ysyx_22040127_hls (
  input[127:0] x,
  input[127:0] y,
  input[127:0] z,
  output[127:0] s,
  output[127:0] c//need to be multiplied by 2
);
  assign s = x ^ y ^ z;
  assign c = x & y | y & z | x & z;
endmodule

module ysyx_22040127_mul (
  input clk,
  input rst,
  input [63:0] x,
  input [63:0] y,
  input xs,//w or y is signed
  input ys,
  //output reg ready,
  output [63:0] high,
  output [63:0] low,
  input  mul_type, 
  output reg mul_stage2,
  output reg mul_ok
);
  wire[64:0] x_ext;
  wire[66:0] y_ext;//for booth:++
  wire[127:0] psum[32:0];
  assign x_ext = {(xs ? x[63] : 1'b0), x};
  assign y_ext = {(ys ? {3{y[63]}} : 3'b0), y};

  wire[127:0]l1s[10:0];
  wire[127:0]l1c[10:0];//22

  wire[127:0]l2s[6:0];
  wire[127:0]l2c[6:0];//14+1

  wire[127:0]l3s[4:0];
  wire[127:0]l3c[4:0];//10

  wire[127:0]l4s[2:0];
  wire[127:0]l4c[2:0];//6

  wire[127:0]l5s[2:0];
  wire[127:0]l5c[2:0];//6

  wire[127:0]l6s[1:0];
  wire[127:0]l6c[1:0];

  wire[127:0]l7s;
  wire[127:0]l7c;

  wire[127:0]l8s;
  wire[127:0]l8c;
  reg[127:0] res;

  ysyx_22040127_hls l1_1(psum[0], {psum[1][125:0], 2'b0}, {psum[2][123:0], 4'b0}, l1s[0], l1c[0]);
  ysyx_22040127_hls l1_2({psum[3][121:0], 6'b0}, {psum[4][119:0], 8'b0}, {psum[5][117:0], 10'b0}, 
  l1s[1], l1c[1]);
  ysyx_22040127_hls l1_3({psum[6][115:0], 12'b0}, {psum[7][113:0], 14'b0}, {psum[8][111:0], 16'b0}, 
  l1s[2], l1c[2]);
  ysyx_22040127_hls l1_4({psum[9][109:0], 18'b0}, {psum[10][107:0], 20'b0}, {psum[11][105:0], 22'b0}, 
  l1s[3], l1c[3]);
  ysyx_22040127_hls l1_5({psum[12][103:0], 24'b0}, {psum[13][101:0], 26'b0}, {psum[14][99:0], 28'b0}, 
  l1s[4], l1c[4]);
  ysyx_22040127_hls l1_6({psum[15][97:0], 30'b0}, {psum[16][95:0], 32'b0}, {psum[17][93:0], 34'b0}, 
  l1s[5], l1c[5]);
  ysyx_22040127_hls l1_7({psum[18][91:0], 36'b0}, {psum[19][89:0], 38'b0}, {psum[20][87:0], 40'b0}, 
  l1s[6], l1c[6]);
  ysyx_22040127_hls l1_8({psum[21][85:0], 42'b0}, {psum[22][83:0], 44'b0}, {psum[23][81:0], 46'b0}, 
  l1s[7], l1c[7]);
  ysyx_22040127_hls l1_9({psum[24][79:0], 48'b0}, {psum[25][77:0], 50'b0}, {psum[26][75:0], 52'b0}, 
  l1s[8], l1c[8]);
  ysyx_22040127_hls l1_10({psum[27][73:0], 54'b0}, {psum[28][71:0], 56'b0}, {psum[29][69:0], 58'b0}, 
  l1s[9], l1c[9]);
  ysyx_22040127_hls l1_11({psum[30][67:0], 60'b0}, {psum[31][65:0], 62'b0}, {psum[32][63:0], 64'b0}, 
  l1s[10], l1c[10]);
  //assign l1s[10] = {psum[30][67:0], 60'b0} ^ {psum[31][65:0], 62'b0};
  //assign l1c[10] = {psum[30][67:0], 60'b0} & {psum[31][65:0], 62'b0};

  ysyx_22040127_hls l2_1(l1s[0], l1s[1], l1s[2], l2s[0], l2c[0]);
  ysyx_22040127_hls l2_2(l1s[3], l1s[4], l1s[5], l2s[1], l2c[1]);
  ysyx_22040127_hls l2_3(l1s[6], l1s[7], l1s[8], l2s[2], l2c[2]);
  ysyx_22040127_hls l2_4(l1s[9], l1s[10], {l1c[0][126:0], 1'b0}, l2s[3], l2c[3]);
  ysyx_22040127_hls l2_5({l1c[1][126:0], 1'b0}, {l1c[2][126:0], 1'b0}, {l1c[3][126:0], 1'b0}, 
  l2s[4], l2c[4]);
  ysyx_22040127_hls l2_6({l1c[4][126:0], 1'b0}, {l1c[5][126:0], 1'b0}, {l1c[6][126:0], 1'b0}, 
  l2s[5], l2c[5]);
  ysyx_22040127_hls l2_7({l1c[7][126:0], 1'b0}, {l1c[8][126:0], 1'b0}, {l1c[9][126:0], 1'b0}, 
  l2s[6], l2c[6]);
  //l1c[10] left

  ysyx_22040127_hls l3_1(l2s[0], l2s[1], l2s[2], l3s[0], l3c[0]);
  ysyx_22040127_hls l3_2(l2s[3], l2s[4], l2s[5], l3s[1], l3c[1]);
  ysyx_22040127_hls l3_3(l2s[6], {l1c[10][126:0], 1'b0}, {l2c[0][126:0], 1'b0}, l3s[2], l3c[2]);
  ysyx_22040127_hls l3_4(l2c[1] << 1, l2c[2] << 1, l2c[3] << 1, l3s[3], l3c[3]);
  ysyx_22040127_hls l3_5(l2c[4] << 1, l2c[5] << 1, l2c[6] << 1, l3s[4], l3c[4]);

  ysyx_22040127_hls l4_1(l3s[0], l3s[1], l3s[2], l4s[0], l4c[0]);
  ysyx_22040127_hls l4_2(l3s[3], l3s[4], l3c[0] << 1, l4s[1], l4c[1]);
  ysyx_22040127_hls l4_3(l3c[1] << 1, l3c[2] << 1, l3c[3] << 1, l4s[2], l4c[2]);
  //l3c[4] left

  ysyx_22040127_hls l5_1(l4s[0], l4s[1], l4s[2], l5s[0], l5c[0]);
  ysyx_22040127_hls l5_2(l4c[0] << 1, l4c[1] << 1, l4c[2] << 1, l5s[1], l5c[1]);

  ysyx_22040127_hls l6_1(l5s[0], l5s[1], l5c[0] << 1, l6s[0], l6c[0]);
  assign l6s[1] = (l5c[1] << 1) ^ (l3c[4] << 1);
  assign l6c[1] = (l5c[1] << 1) & (l3c[4] << 1);

  ysyx_22040127_hls l7_1(l6s[0], l6s[1], l6c[0] << 1, l7s, l7c);
  //16c[1] left

  always @(posedge clk) begin
    mul_stage2 <= mul_type;
    mul_ok     <= mul_stage2;
    res  <= l8s + ({l8c[126:0], 1'b0});
  end
  ysyx_22040127_hls l8_1(l7s, l7c << 1, l6c[1] << 1, l8s, l8c);
  
  assign high = res[127:64];
  assign low  = res[63:0];



  ysyx_22040127_booth b0(clk, rst, x_ext, {y_ext[1:0] , 1'b0}, psum[0]);
  ysyx_22040127_booth b1(clk, rst, x_ext, y_ext[3:1], psum[1]);
  ysyx_22040127_booth b2(clk, rst, x_ext, y_ext[5:3], psum[2]);
  ysyx_22040127_booth b3(clk, rst, x_ext, y_ext[7:5], psum[3]);
  ysyx_22040127_booth b4(clk, rst, x_ext, y_ext[9:7], psum[4]);
  ysyx_22040127_booth b5(clk, rst, x_ext, y_ext[11:9], psum[5]);
  ysyx_22040127_booth b6(clk, rst, x_ext, y_ext[13:11], psum[6]);
  ysyx_22040127_booth b7(clk, rst, x_ext, y_ext[15:13], psum[7]);
  ysyx_22040127_booth b8(clk, rst, x_ext, y_ext[17:15], psum[8]);
  ysyx_22040127_booth b9(clk, rst, x_ext, y_ext[19:17], psum[9]);
  ysyx_22040127_booth b10(clk, rst, x_ext, y_ext[21:19], psum[10]);
  ysyx_22040127_booth b11(clk, rst, x_ext, y_ext[23:21], psum[11]);
  ysyx_22040127_booth b12(clk, rst, x_ext, y_ext[25:23], psum[12]);
  ysyx_22040127_booth b13(clk, rst, x_ext, y_ext[27:25], psum[13]);
  ysyx_22040127_booth b14(clk, rst, x_ext, y_ext[29:27], psum[14]);
  ysyx_22040127_booth b15(clk, rst, x_ext, y_ext[31:29], psum[15]);
  ysyx_22040127_booth b16(clk, rst, x_ext, y_ext[33:31], psum[16]);

  ysyx_22040127_booth b17(clk, rst, x_ext, y_ext[35:33], psum[17]);
  ysyx_22040127_booth b18(clk, rst, x_ext, y_ext[37:35], psum[18]);
  ysyx_22040127_booth b19(clk, rst, x_ext, y_ext[39:37], psum[19]);
  ysyx_22040127_booth b20(clk, rst, x_ext, y_ext[41:39], psum[20]);
  ysyx_22040127_booth b21(clk, rst, x_ext, y_ext[43:41], psum[21]);
  ysyx_22040127_booth b22(clk, rst, x_ext, y_ext[45:43], psum[22]);
  ysyx_22040127_booth b23(clk, rst, x_ext, y_ext[47:45], psum[23]);
  ysyx_22040127_booth b24(clk, rst, x_ext, y_ext[49:47], psum[24]);
  ysyx_22040127_booth b25(clk, rst, x_ext, y_ext[51:49], psum[25]);
  ysyx_22040127_booth b26(clk, rst, x_ext, y_ext[53:51], psum[26]);
  ysyx_22040127_booth b27(clk, rst, x_ext, y_ext[55:53], psum[27]);
  ysyx_22040127_booth b28(clk, rst, x_ext, y_ext[57:55], psum[28]);
  ysyx_22040127_booth b29(clk, rst, x_ext, y_ext[59:57], psum[29]);
  ysyx_22040127_booth b30(clk, rst, x_ext, y_ext[61:59], psum[30]);
  ysyx_22040127_booth b31(clk, rst, x_ext, y_ext[63:61], psum[31]);
  ysyx_22040127_booth b32(clk, rst, x_ext, y_ext[65:63], psum[32]);


endmodule