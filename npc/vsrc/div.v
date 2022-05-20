module ysyx_22040127_div (
  input clk,
  input rst,
  input [63:0] x,
  input [63:0] y,
  input s,//w or y is signed
  input is_div,
  output reg ready,
  output reg[1:0] state,
  output [63:0] quo,
  output [63:0] rem
);
  localparam IDLE = 2'b00, DIV_ON = 2'b01, DIV_ZERO = 2'b11, DIV_END = 2'b10;
  reg[6:0]  cnt;

  reg[128:0]dividend; //cdividend
  reg[63:0] divisor;//c

  wire[64:0]subres;
  assign subres = {dividend[128:64]} - {1'b0, divisor};//unsigned substract
  assign rem = dividend[128:65];
  assign quo = dividend[63:0];
  always @(posedge clk) begin
    case(state)
      IDLE:begin
        if(is_div)begin
          state  <= DIV_ON;
          cnt    <= 7'b0;
          ready  <= 0;
          if(x[63] & s)dividend <= {64'b0, ~x + 1, 1'b0};//(1)
          else dividend <= {64'b0, x, 1'b0};//(1)
          if(y[63] & s)divisor <= ~y + 1;
          else divisor <= y;
        end else begin
          ready <= 0;
        end
      end
      DIV_ON:begin
        if(cnt != 7'b1000000)begin
          if(subres[64] == 1'b1)begin
            dividend <= {dividend[127:0], 1'b0};//shift left(2)
          end else begin
            dividend <= {subres[63:0], dividend[63:0], 1'b1};//zhe ge qiao miao(3)
          end
          cnt <= cnt + 1;
        end else begin
          if(s & (x[63] ^ y[63]))begin
            dividend[63:0] <= ~dividend[63:0] + 1;
          end 
          if(s & x[63])begin
            dividend[128:65] <= ~dividend[128:65] + 1;
          end

          state <= DIV_END;
          cnt   <= 7'b0;
        end
      end
      DIV_END:begin

        ready <= 1'b1;
        state <= IDLE;
      end
      default:state <= IDLE;
    endcase
  end

endmodule