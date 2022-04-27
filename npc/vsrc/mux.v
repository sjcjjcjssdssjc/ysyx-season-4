module ysyx_22040127_MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  //width and length
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  //<key,data> pair
  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule

// 不带默认值的选择器模板
module ysyx_22040127_MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_22040127_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule

// 带默认值的选择器模板
module ysyx_22040127_MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_22040127_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule

module ysyx_22040127_mux21(a,b,s,y);
  input[63:0] a,b;
  input s;
  output[63:0] y;

  // 通过MuxKey实现如下always代码
  // always @(*) begin
  //  case (s)
  //    1'b0: y = a;
  //    1'b1: y = b;
  //  endcase
  // end
  ysyx_22040127_MuxKey #(2, 1, 64) i0 (y, s, {
    1'b0, a,//y = a
    1'b1, b //y = b 
  });
endmodule

module ysyx_22040127_decoder_2_4
(
  input [1:0]     in,
  output[3:0]   out
);

genvar i;
generate
for(i=0;i<4;i=i+1)
begin
  assign out[i] = (in == i);
end
endgenerate
endmodule

module ysyx_22040127_decoder_3_8
(
  input [2:0]     in,
  output[7:0]     out
);

genvar i;
generate
for(i=0;i<8;i=i+1)
begin
  assign out[i] = (in == i);
end
endgenerate
endmodule


module ysyx_22040127_decoder_5_32
(
  input [4:0]     in,
  output[31:0]   out
);

  genvar i;
  generate
    for(i=0;i<32;i=i+1)
    begin
      assign out[i] = (in == i);
    end
  endgenerate
endmodule


module ysyx_22040127_decoder_6_64
(
  input [5:0]     in,
  output[63:0]   out
);
  genvar i;
  generate
    for(i=0;i<64;i=i+1)
    begin
      assign out[i] = (in == i);
    end
  endgenerate
endmodule