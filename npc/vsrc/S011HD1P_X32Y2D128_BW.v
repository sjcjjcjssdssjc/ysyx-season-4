module S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 128;//lines
parameter Add_Width = 7;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = CEN;
wire wen  = WEN;
wire [Wen_Width-1:0] bwen = BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
        if(A == 7'h69)
        $display("write cache with addr 0x%0h, data is 0x%0h, strb 0x%0h\n",A,D,bwen);
    end
    Q <= cen ? ram[A] : {4{$random}};
    if(cen)begin
       // $display("read cache with addr 0x%0h, data is 0x%0h\n",A,Q);
    end
end

endmodule
