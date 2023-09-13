module ysyx_22050612_ICACHE (

input addr,
input valid,

output [31:0]inst,
output ready

);


reg [53:0]tag0[63:0];
reg [53:0]tag1[63:0];
reg [53:0]tag2[63:0];
reg [53:0]tag3[63:0];
reg [63:0]v0;
reg [63:0]v1;
reg [63:0]v2;
reg [63:0]v3;


always @(posedge clk) begin
	if(rst) begin
		v0 <= 64'b0;
		v1 <= 64'b0;
		v2 <= 64'b0;
		v3 <= 64'b0;
	end
end

wire [5:0]index;
assign index = addr[9:4];
wire [3:0]way_hit;
assign way_hit[0] = v0[index] && (tag0[index] == addr[63:10]);
assign way_hit[1] = v1[index] && (tag1[index] == addr[63:10]);
assign way_hit[2] = v2[index] && (tag2[index] == addr[63:10]);
assign way_hit[3] = v3[index] && (tag3[index] == addr[63:10]);



wire [127:0]dout0, dout1, dout2, dout3;
wire cen0, cen1, cen2, cen3;
wire wen;
wire [127:0]bwen;
wire [5:0]addr_sram;
wire [127:0]din;
assign addr_sram = index;
S011HD1P_X32Y2D128_BW sram_i0(dout0, clk, cen0, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i1(dout1, clk, cen1, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i2(dout2, clk, cen2, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i3(dout3, clk, cen3, wen, bwen, addr_sram, din);


  
endmodule
