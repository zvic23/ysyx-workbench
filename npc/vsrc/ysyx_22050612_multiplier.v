module ysyx_22050612_multiplier(
	input clk,
	input rst,
	input mul_valid,
	input flush,
	input mulw,
	input [1:0]mul_signed,
	input [63:0]multiplicand,
	input [63:0]multiplier,
	output mul_ready,
	output out_valid,
	output [63:0]result_hi,
	output [63:0]result_lo
);

always @(negedge clk)begin
	//$display("mulcand:%h  mulier:%h",multiplicand,multiplier);
end


wire [65:0]mul_a;
wire [65:0]mul_b;
assign mul_a[31: 0] = mul_valid ? multiplicand[31:0] : 32'b0;
assign mul_b[31: 0] = mul_valid ? multiplier  [31:0] : 32'b0;
assign mul_a[63:32] = mul_valid ? (mulw ? {32{multiplicand[31]}} : multiplicand[63:32]) : 32'b0;
assign mul_b[63:32] = mul_valid ? (mulw ? {32{multiplier  [31]}} : multiplier  [63:32]) : 32'b0;
assign mul_a[65:64] = (mul_valid&&mul_signed!=2'b0) ? (mulw ? {2{multiplicand[31]}} : {2{multiplicand[63]}}) :  2'b0;
assign mul_b[65:64] = (mul_valid&&mul_signed!=2'b0) ? (mulw ? {2{multiplier  [31]}} : {2{multiplier  [63]}}) :  2'b0;

wire [131:0]p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31,p32;
wire [32:0]c;
//wire c00,c01,c02,c03,c04,c05,c06,c07,c08,c09,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32;


ysyx_22050612_PART_PRODUCT  part_product00 ({mul_a[1:0],1'b0}, {{66{1'b0}},mul_b}           , p00, c[ 0]);
ysyx_22050612_PART_PRODUCT  part_product01 (mul_a[ 3: 1]     , {{64{1'b0}},mul_b,{ 2{1'b0}}}, p01, c[ 1]);
ysyx_22050612_PART_PRODUCT  part_product02 (mul_a[ 5: 3]     , {{62{1'b0}},mul_b,{ 4{1'b0}}}, p02, c[ 2]);
ysyx_22050612_PART_PRODUCT  part_product03 (mul_a[ 7: 5]     , {{60{1'b0}},mul_b,{ 6{1'b0}}}, p03, c[ 3]);
ysyx_22050612_PART_PRODUCT  part_product04 (mul_a[ 9: 7]     , {{58{1'b0}},mul_b,{ 8{1'b0}}}, p04, c[ 4]);
ysyx_22050612_PART_PRODUCT  part_product05 (mul_a[11: 9]     , {{56{1'b0}},mul_b,{10{1'b0}}}, p05, c[ 5]);
ysyx_22050612_PART_PRODUCT  part_product06 (mul_a[13:11]     , {{54{1'b0}},mul_b,{12{1'b0}}}, p06, c[ 6]);
ysyx_22050612_PART_PRODUCT  part_product07 (mul_a[15:13]     , {{52{1'b0}},mul_b,{14{1'b0}}}, p07, c[ 7]);
ysyx_22050612_PART_PRODUCT  part_product08 (mul_a[17:15]     , {{50{1'b0}},mul_b,{16{1'b0}}}, p08, c[ 8]);
ysyx_22050612_PART_PRODUCT  part_product09 (mul_a[19:17]     , {{48{1'b0}},mul_b,{18{1'b0}}}, p09, c[ 9]);
ysyx_22050612_PART_PRODUCT  part_product10 (mul_a[21:19]     , {{46{1'b0}},mul_b,{20{1'b0}}}, p10, c[10]);
ysyx_22050612_PART_PRODUCT  part_product11 (mul_a[23:21]     , {{44{1'b0}},mul_b,{22{1'b0}}}, p11, c[11]);
ysyx_22050612_PART_PRODUCT  part_product12 (mul_a[25:23]     , {{42{1'b0}},mul_b,{24{1'b0}}}, p12, c[12]);
ysyx_22050612_PART_PRODUCT  part_product13 (mul_a[27:25]     , {{40{1'b0}},mul_b,{26{1'b0}}}, p13, c[13]);
ysyx_22050612_PART_PRODUCT  part_product14 (mul_a[29:27]     , {{38{1'b0}},mul_b,{28{1'b0}}}, p14, c[14]);
ysyx_22050612_PART_PRODUCT  part_product15 (mul_a[31:29]     , {{36{1'b0}},mul_b,{30{1'b0}}}, p15, c[15]);
ysyx_22050612_PART_PRODUCT  part_product16 (mul_a[33:31]     , {{34{1'b0}},mul_b,{32{1'b0}}}, p16, c[16]);
ysyx_22050612_PART_PRODUCT  part_product17 (mul_a[35:33]     , {{32{1'b0}},mul_b,{34{1'b0}}}, p17, c[17]);
ysyx_22050612_PART_PRODUCT  part_product18 (mul_a[37:35]     , {{30{1'b0}},mul_b,{36{1'b0}}}, p18, c[18]);
ysyx_22050612_PART_PRODUCT  part_product19 (mul_a[39:37]     , {{28{1'b0}},mul_b,{38{1'b0}}}, p19, c[19]);
ysyx_22050612_PART_PRODUCT  part_product20 (mul_a[41:39]     , {{26{1'b0}},mul_b,{40{1'b0}}}, p20, c[20]);
ysyx_22050612_PART_PRODUCT  part_product21 (mul_a[43:41]     , {{24{1'b0}},mul_b,{42{1'b0}}}, p21, c[21]);
ysyx_22050612_PART_PRODUCT  part_product22 (mul_a[45:43]     , {{22{1'b0}},mul_b,{44{1'b0}}}, p22, c[22]);
ysyx_22050612_PART_PRODUCT  part_product23 (mul_a[47:45]     , {{20{1'b0}},mul_b,{46{1'b0}}}, p23, c[23]);
ysyx_22050612_PART_PRODUCT  part_product24 (mul_a[49:47]     , {{18{1'b0}},mul_b,{48{1'b0}}}, p24, c[24]);
ysyx_22050612_PART_PRODUCT  part_product25 (mul_a[51:49]     , {{16{1'b0}},mul_b,{50{1'b0}}}, p25, c[25]);
ysyx_22050612_PART_PRODUCT  part_product26 (mul_a[53:51]     , {{14{1'b0}},mul_b,{52{1'b0}}}, p26, c[26]);
ysyx_22050612_PART_PRODUCT  part_product27 (mul_a[55:53]     , {{12{1'b0}},mul_b,{54{1'b0}}}, p27, c[27]);
ysyx_22050612_PART_PRODUCT  part_product28 (mul_a[57:55]     , {{10{1'b0}},mul_b,{56{1'b0}}}, p28, c[28]);
ysyx_22050612_PART_PRODUCT  part_product29 (mul_a[59:57]     , {{ 8{1'b0}},mul_b,{58{1'b0}}}, p29, c[29]);
ysyx_22050612_PART_PRODUCT  part_product30 (mul_a[61:59]     , {{ 6{1'b0}},mul_b,{60{1'b0}}}, p30, c[30]);
ysyx_22050612_PART_PRODUCT  part_product31 (mul_a[63:61]     , {{ 4{1'b0}},mul_b,{62{1'b0}}}, p31, c[31]);
ysyx_22050612_PART_PRODUCT  part_product32 (mul_a[65:63]     , {{ 2{1'b0}},mul_b,{64{1'b0}}}, p32, c[32]);


wire [32:0] walloc_din [131:0];
/* verilator lint_off UNOPTFLAT */
wire [30:0] walloc_cgroup [131:1];
/* verilator lint_on UNOPTFLAT */
wire [30:0] walloc_cgroup1[131:1];
wire [130:0] walloc_c;
wire [131:0] walloc_s;
genvar i;
generate
	for(i=0;i<=131;i=i+1) begin
		assign walloc_din [i] = {p00[i],p01[i],p02[i],p03[i],p04[i],p05[i],p06[i],p07[i],p08[i],p09[i],p10[i],p11[i],p12[i],p13[i],p14[i],p15[i],p16[i],p17[i],p18[i],p19[i],p20[i],p21[i],p22[i],p23[i],p24[i],p25[i],p26[i],p27[i],p28[i],p29[i],p30[i],p31[i],p32[i]};
	end
endgenerate


ysyx_22050612_WALLOC_33BITS walloc_tree0   (walloc_din[0],c[30:0],walloc_cgroup[1],walloc_c[0],walloc_s[0] );
ysyx_22050612_WALLOC_33BITS walloc_tree131 (walloc_din[131],walloc_cgroup[131], , ,walloc_s[131] );

genvar j;
generate
	for(j=1;j<131;j=j+1) begin: walloc_gen
		ysyx_22050612_WALLOC_33BITS walloc_tree  (walloc_din[j],walloc_cgroup[j],walloc_cgroup[j+1],walloc_c[j],walloc_s[j] );
	end
endgenerate


wire [131:0]result;
assign result = walloc_s + {walloc_c,c[31]} + {{131{1'b0}},c[32]};

assign result_hi = result[127:64];
assign result_lo = result[63:0];

endmodule
