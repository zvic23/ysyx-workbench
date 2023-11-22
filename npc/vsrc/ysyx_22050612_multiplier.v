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
assign mul_a[63:32] = mul_valid ? (mulw ? (mul_signed[0] ? {32{multiplicand[31]}} : 32'b0) : multiplicand[63:32]) : 32'b0;
assign mul_b[63:32] = mul_valid ? (mulw ? (mul_signed[1] ? {32{multiplier  [31]}} : 32'b0) : multiplier  [63:32]) : 32'b0;
assign mul_a[65:64] = (mul_valid&&mul_signed[0]) ? (mulw ? {2{multiplicand[31]}} : {2{multiplicand[63]}}) :  2'b0;
assign mul_b[65:64] = (mul_valid&&mul_signed[1]) ? (mulw ? {2{multiplier  [31]}} : {2{multiplier  [63]}}) :  2'b0;

wire [131:0]p[32:0];
//wire [131:0]p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31,p32;
wire [32:0]c;
//wire c00,c01,c02,c03,c04,c05,c06,c07,c08,c09,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32;


ysyx_22050612_PART_PRODUCT  part_product00 ({mul_a[1:0],1'b0}, {{66{mul_b[65]}},mul_b}           , p[00], c[ 0]);
ysyx_22050612_PART_PRODUCT  part_product01 (mul_a[ 3: 1]     , {{64{mul_b[65]}},mul_b,{ 2{1'b0}}}, p[01], c[ 1]);
ysyx_22050612_PART_PRODUCT  part_product02 (mul_a[ 5: 3]     , {{62{mul_b[65]}},mul_b,{ 4{1'b0}}}, p[02], c[ 2]);
ysyx_22050612_PART_PRODUCT  part_product03 (mul_a[ 7: 5]     , {{60{mul_b[65]}},mul_b,{ 6{1'b0}}}, p[03], c[ 3]);
ysyx_22050612_PART_PRODUCT  part_product04 (mul_a[ 9: 7]     , {{58{mul_b[65]}},mul_b,{ 8{1'b0}}}, p[04], c[ 4]);
ysyx_22050612_PART_PRODUCT  part_product05 (mul_a[11: 9]     , {{56{mul_b[65]}},mul_b,{10{1'b0}}}, p[05], c[ 5]);
ysyx_22050612_PART_PRODUCT  part_product06 (mul_a[13:11]     , {{54{mul_b[65]}},mul_b,{12{1'b0}}}, p[06], c[ 6]);
ysyx_22050612_PART_PRODUCT  part_product07 (mul_a[15:13]     , {{52{mul_b[65]}},mul_b,{14{1'b0}}}, p[07], c[ 7]);
ysyx_22050612_PART_PRODUCT  part_product08 (mul_a[17:15]     , {{50{mul_b[65]}},mul_b,{16{1'b0}}}, p[08], c[ 8]);
ysyx_22050612_PART_PRODUCT  part_product09 (mul_a[19:17]     , {{48{mul_b[65]}},mul_b,{18{1'b0}}}, p[09], c[ 9]);
ysyx_22050612_PART_PRODUCT  part_product10 (mul_a[21:19]     , {{46{mul_b[65]}},mul_b,{20{1'b0}}}, p[10], c[10]);
ysyx_22050612_PART_PRODUCT  part_product11 (mul_a[23:21]     , {{44{mul_b[65]}},mul_b,{22{1'b0}}}, p[11], c[11]);
ysyx_22050612_PART_PRODUCT  part_product12 (mul_a[25:23]     , {{42{mul_b[65]}},mul_b,{24{1'b0}}}, p[12], c[12]);
ysyx_22050612_PART_PRODUCT  part_product13 (mul_a[27:25]     , {{40{mul_b[65]}},mul_b,{26{1'b0}}}, p[13], c[13]);
ysyx_22050612_PART_PRODUCT  part_product14 (mul_a[29:27]     , {{38{mul_b[65]}},mul_b,{28{1'b0}}}, p[14], c[14]);
ysyx_22050612_PART_PRODUCT  part_product15 (mul_a[31:29]     , {{36{mul_b[65]}},mul_b,{30{1'b0}}}, p[15], c[15]);
ysyx_22050612_PART_PRODUCT  part_product16 (mul_a[33:31]     , {{34{mul_b[65]}},mul_b,{32{1'b0}}}, p[16], c[16]);
ysyx_22050612_PART_PRODUCT  part_product17 (mul_a[35:33]     , {{32{mul_b[65]}},mul_b,{34{1'b0}}}, p[17], c[17]);
ysyx_22050612_PART_PRODUCT  part_product18 (mul_a[37:35]     , {{30{mul_b[65]}},mul_b,{36{1'b0}}}, p[18], c[18]);
ysyx_22050612_PART_PRODUCT  part_product19 (mul_a[39:37]     , {{28{mul_b[65]}},mul_b,{38{1'b0}}}, p[19], c[19]);
ysyx_22050612_PART_PRODUCT  part_product20 (mul_a[41:39]     , {{26{mul_b[65]}},mul_b,{40{1'b0}}}, p[20], c[20]);
ysyx_22050612_PART_PRODUCT  part_product21 (mul_a[43:41]     , {{24{mul_b[65]}},mul_b,{42{1'b0}}}, p[21], c[21]);
ysyx_22050612_PART_PRODUCT  part_product22 (mul_a[45:43]     , {{22{mul_b[65]}},mul_b,{44{1'b0}}}, p[22], c[22]);
ysyx_22050612_PART_PRODUCT  part_product23 (mul_a[47:45]     , {{20{mul_b[65]}},mul_b,{46{1'b0}}}, p[23], c[23]);
ysyx_22050612_PART_PRODUCT  part_product24 (mul_a[49:47]     , {{18{mul_b[65]}},mul_b,{48{1'b0}}}, p[24], c[24]);
ysyx_22050612_PART_PRODUCT  part_product25 (mul_a[51:49]     , {{16{mul_b[65]}},mul_b,{50{1'b0}}}, p[25], c[25]);
ysyx_22050612_PART_PRODUCT  part_product26 (mul_a[53:51]     , {{14{mul_b[65]}},mul_b,{52{1'b0}}}, p[26], c[26]);
ysyx_22050612_PART_PRODUCT  part_product27 (mul_a[55:53]     , {{12{mul_b[65]}},mul_b,{54{1'b0}}}, p[27], c[27]);
ysyx_22050612_PART_PRODUCT  part_product28 (mul_a[57:55]     , {{10{mul_b[65]}},mul_b,{56{1'b0}}}, p[28], c[28]);
ysyx_22050612_PART_PRODUCT  part_product29 (mul_a[59:57]     , {{ 8{mul_b[65]}},mul_b,{58{1'b0}}}, p[29], c[29]);
ysyx_22050612_PART_PRODUCT  part_product30 (mul_a[61:59]     , {{ 6{mul_b[65]}},mul_b,{60{1'b0}}}, p[30], c[30]);
ysyx_22050612_PART_PRODUCT  part_product31 (mul_a[63:61]     , {{ 4{mul_b[65]}},mul_b,{62{1'b0}}}, p[31], c[31]);
ysyx_22050612_PART_PRODUCT  part_product32 (mul_a[65:63]     , {{ 2{mul_b[65]}},mul_b,{64{1'b0}}}, p[32], c[32]);


reg [131:0]p_reg[32:0];
reg [32:0]c_reg;
reg mul_pipe1_valid;

integer l;
always @(posedge clk) begin
	if(rst || flush) begin
		for(l=0;l<=32;l=l+1) begin
			p_reg[l] <= 132'b0;
		end
		c_reg <= 33'b0;
		mul_pipe1_valid <= 1'b0;
	end
	else if(mul_valid && mul_ready) begin
		for(l=0;l<=32;l=l+1) begin
			p_reg[l] <= p[l];
		end
		c_reg <= c;
		mul_pipe1_valid <= 1'b1;
	end
	else begin
		mul_pipe1_valid <= 1'b0;
	end
end







wire [32:0] walloc_din [131:0];
wire [30:0] walloc_cgroup_00,walloc_cgroup_01,walloc_cgroup_02,walloc_cgroup_03,walloc_cgroup_04,walloc_cgroup_05,walloc_cgroup_06,walloc_cgroup_07,walloc_cgroup_08,walloc_cgroup_09,walloc_cgroup_10,walloc_cgroup_11,walloc_cgroup_12,walloc_cgroup_13,walloc_cgroup_14,walloc_cgroup_15,walloc_cgroup_16,walloc_cgroup_17,walloc_cgroup_18,walloc_cgroup_19,walloc_cgroup_20,walloc_cgroup_21,walloc_cgroup_22,walloc_cgroup_23,walloc_cgroup_24,walloc_cgroup_25,walloc_cgroup_26,walloc_cgroup_27,walloc_cgroup_28,walloc_cgroup_29,walloc_cgroup_30,walloc_cgroup_31,walloc_cgroup_32,walloc_cgroup_33,walloc_cgroup_34,walloc_cgroup_35,walloc_cgroup_36,walloc_cgroup_37,walloc_cgroup_38,walloc_cgroup_39,walloc_cgroup_40,walloc_cgroup_41,walloc_cgroup_42,walloc_cgroup_43,walloc_cgroup_44,walloc_cgroup_45,walloc_cgroup_46,walloc_cgroup_47,walloc_cgroup_48,walloc_cgroup_49,walloc_cgroup_50,walloc_cgroup_51,walloc_cgroup_52,walloc_cgroup_53,walloc_cgroup_54,walloc_cgroup_55,walloc_cgroup_56,walloc_cgroup_57,walloc_cgroup_58,walloc_cgroup_59,walloc_cgroup_60,walloc_cgroup_61,walloc_cgroup_62,walloc_cgroup_63,walloc_cgroup_64,walloc_cgroup_65,walloc_cgroup_66,walloc_cgroup_67,walloc_cgroup_68,walloc_cgroup_69,walloc_cgroup_70,walloc_cgroup_71,walloc_cgroup_72,walloc_cgroup_73,walloc_cgroup_74,walloc_cgroup_75,walloc_cgroup_76,walloc_cgroup_77,walloc_cgroup_78,walloc_cgroup_79,walloc_cgroup_80,walloc_cgroup_81,walloc_cgroup_82,walloc_cgroup_83,walloc_cgroup_84,walloc_cgroup_85,walloc_cgroup_86,walloc_cgroup_87,walloc_cgroup_88,walloc_cgroup_89,walloc_cgroup_90,walloc_cgroup_91,walloc_cgroup_92,walloc_cgroup_93,walloc_cgroup_94,walloc_cgroup_95,walloc_cgroup_96,walloc_cgroup_97,walloc_cgroup_98,walloc_cgroup_99,walloc_cgroup_100,walloc_cgroup_101,walloc_cgroup_102,walloc_cgroup_103,walloc_cgroup_104,walloc_cgroup_105,walloc_cgroup_106,walloc_cgroup_107,walloc_cgroup_108,walloc_cgroup_109,walloc_cgroup_110,walloc_cgroup_111,walloc_cgroup_112,walloc_cgroup_113,walloc_cgroup_114,walloc_cgroup_115,walloc_cgroup_116,walloc_cgroup_117,walloc_cgroup_118,walloc_cgroup_119,walloc_cgroup_120,walloc_cgroup_121,walloc_cgroup_122,walloc_cgroup_123,walloc_cgroup_124,walloc_cgroup_125,walloc_cgroup_126,walloc_cgroup_127,walloc_cgroup_128,walloc_cgroup_129,walloc_cgroup_130,walloc_cgroup_131;



/* verilator lint_off UNOPTFLAT */
wire [30:0] walloc_cgroup [131:1];
/* verilator lint_on UNOPTFLAT */
wire [130:0] walloc_c;
wire [131:0] walloc_s;
genvar i;
generate
	for(i=0;i<=131;i=i+1) begin
		assign walloc_din [i] = {p_reg[00][i],p_reg[01][i],p_reg[02][i],p_reg[03][i],p_reg[04][i],p_reg[05][i],p_reg[06][i],p_reg[07][i],p_reg[08][i],p_reg[09][i],p_reg[10][i],p_reg[11][i],p_reg[12][i],p_reg[13][i],p_reg[14][i],p_reg[15][i],p_reg[16][i],p_reg[17][i],p_reg[18][i],p_reg[19][i],p_reg[20][i],p_reg[21][i],p_reg[22][i],p_reg[23][i],p_reg[24][i],p_reg[25][i],p_reg[26][i],p_reg[27][i],p_reg[28][i],p_reg[29][i],p_reg[30][i],p_reg[31][i],p_reg[32][i]};
		//assign walloc_din [i] = {p00[i],p01[i],p02[i],p03[i],p04[i],p05[i],p06[i],p07[i],p08[i],p09[i],p10[i],p11[i],p12[i],p13[i],p14[i],p15[i],p16[i],p17[i],p18[i],p19[i],p20[i],p21[i],p22[i],p23[i],p24[i],p25[i],p26[i],p27[i],p28[i],p29[i],p30[i],p31[i],p32[i]};
	end
endgenerate


ysyx_22050612_WALLOC_33BITS walloc_tree0   (walloc_din[0],c_reg[30:0],walloc_cgroup[1],walloc_c[0],walloc_s[0] );
ysyx_22050612_WALLOC_33BITS walloc_tree131 (walloc_din[131],walloc_cgroup[131], , ,walloc_s[131] );
//ysyx_22050612_WALLOC_33BITS walloc_tree0   (walloc_din[0],c_reg[30:0],walloc_cgroup_01,walloc_c[0],walloc_s[0] );
//ysyx_22050612_WALLOC_33BITS walloc_tree131 (walloc_din[131],walloc_cgroup_131, , ,walloc_s[131] );
genvar j;
generate
	for(j=1;j<131;j=j+1) begin
		ysyx_22050612_WALLOC_33BITS walloc_tree  (walloc_din[j],walloc_cgroup[j],walloc_cgroup[j+1],walloc_c[j],walloc_s[j] );
	end
endgenerate
/*
ysyx_22050612_WALLOC_33BITS walloc_tree01  (walloc_din[ 01],walloc_cgroup_01,walloc_cgroup_02,walloc_c[ 01],walloc_s[ 01] );
ysyx_22050612_WALLOC_33BITS walloc_tree02  (walloc_din[ 02],walloc_cgroup_02,walloc_cgroup_03,walloc_c[ 02],walloc_s[ 02] );
ysyx_22050612_WALLOC_33BITS walloc_tree03  (walloc_din[ 03],walloc_cgroup_03,walloc_cgroup_04,walloc_c[ 03],walloc_s[ 03] );
ysyx_22050612_WALLOC_33BITS walloc_tree04  (walloc_din[ 04],walloc_cgroup_04,walloc_cgroup_05,walloc_c[ 04],walloc_s[ 04] );
ysyx_22050612_WALLOC_33BITS walloc_tree05  (walloc_din[ 05],walloc_cgroup_05,walloc_cgroup_06,walloc_c[ 05],walloc_s[ 05] );
ysyx_22050612_WALLOC_33BITS walloc_tree06  (walloc_din[ 06],walloc_cgroup_06,walloc_cgroup_07,walloc_c[ 06],walloc_s[ 06] );
ysyx_22050612_WALLOC_33BITS walloc_tree07  (walloc_din[ 07],walloc_cgroup_07,walloc_cgroup_08,walloc_c[ 07],walloc_s[ 07] );
ysyx_22050612_WALLOC_33BITS walloc_tree08  (walloc_din[ 08],walloc_cgroup_08,walloc_cgroup_09,walloc_c[ 08],walloc_s[ 08] );
ysyx_22050612_WALLOC_33BITS walloc_tree09  (walloc_din[ 09],walloc_cgroup_09,walloc_cgroup_10,walloc_c[ 09],walloc_s[ 09] );
ysyx_22050612_WALLOC_33BITS walloc_tree10  (walloc_din[ 10],walloc_cgroup_10,walloc_cgroup_11,walloc_c[ 10],walloc_s[ 10] );
ysyx_22050612_WALLOC_33BITS walloc_tree11  (walloc_din[ 11],walloc_cgroup_11,walloc_cgroup_12,walloc_c[ 11],walloc_s[ 11] );
ysyx_22050612_WALLOC_33BITS walloc_tree12  (walloc_din[ 12],walloc_cgroup_12,walloc_cgroup_13,walloc_c[ 12],walloc_s[ 12] );
ysyx_22050612_WALLOC_33BITS walloc_tree13  (walloc_din[ 13],walloc_cgroup_13,walloc_cgroup_14,walloc_c[ 13],walloc_s[ 13] );
ysyx_22050612_WALLOC_33BITS walloc_tree14  (walloc_din[ 14],walloc_cgroup_14,walloc_cgroup_15,walloc_c[ 14],walloc_s[ 14] );
ysyx_22050612_WALLOC_33BITS walloc_tree15  (walloc_din[ 15],walloc_cgroup_15,walloc_cgroup_16,walloc_c[ 15],walloc_s[ 15] );
ysyx_22050612_WALLOC_33BITS walloc_tree16  (walloc_din[ 16],walloc_cgroup_16,walloc_cgroup_17,walloc_c[ 16],walloc_s[ 16] );
ysyx_22050612_WALLOC_33BITS walloc_tree17  (walloc_din[ 17],walloc_cgroup_17,walloc_cgroup_18,walloc_c[ 17],walloc_s[ 17] );
ysyx_22050612_WALLOC_33BITS walloc_tree18  (walloc_din[ 18],walloc_cgroup_18,walloc_cgroup_19,walloc_c[ 18],walloc_s[ 18] );
ysyx_22050612_WALLOC_33BITS walloc_tree19  (walloc_din[ 19],walloc_cgroup_19,walloc_cgroup_20,walloc_c[ 19],walloc_s[ 19] );
ysyx_22050612_WALLOC_33BITS walloc_tree20  (walloc_din[ 20],walloc_cgroup_20,walloc_cgroup_21,walloc_c[ 20],walloc_s[ 20] );
ysyx_22050612_WALLOC_33BITS walloc_tree21  (walloc_din[ 21],walloc_cgroup_21,walloc_cgroup_22,walloc_c[ 21],walloc_s[ 21] );
ysyx_22050612_WALLOC_33BITS walloc_tree22  (walloc_din[ 22],walloc_cgroup_22,walloc_cgroup_23,walloc_c[ 22],walloc_s[ 22] );
ysyx_22050612_WALLOC_33BITS walloc_tree23  (walloc_din[ 23],walloc_cgroup_23,walloc_cgroup_24,walloc_c[ 23],walloc_s[ 23] );
ysyx_22050612_WALLOC_33BITS walloc_tree24  (walloc_din[ 24],walloc_cgroup_24,walloc_cgroup_25,walloc_c[ 24],walloc_s[ 24] );
ysyx_22050612_WALLOC_33BITS walloc_tree25  (walloc_din[ 25],walloc_cgroup_25,walloc_cgroup_26,walloc_c[ 25],walloc_s[ 25] );
ysyx_22050612_WALLOC_33BITS walloc_tree26  (walloc_din[ 26],walloc_cgroup_26,walloc_cgroup_27,walloc_c[ 26],walloc_s[ 26] );
ysyx_22050612_WALLOC_33BITS walloc_tree27  (walloc_din[ 27],walloc_cgroup_27,walloc_cgroup_28,walloc_c[ 27],walloc_s[ 27] );
ysyx_22050612_WALLOC_33BITS walloc_tree28  (walloc_din[ 28],walloc_cgroup_28,walloc_cgroup_29,walloc_c[ 28],walloc_s[ 28] );
ysyx_22050612_WALLOC_33BITS walloc_tree29  (walloc_din[ 29],walloc_cgroup_29,walloc_cgroup_30,walloc_c[ 29],walloc_s[ 29] );
ysyx_22050612_WALLOC_33BITS walloc_tree30  (walloc_din[ 30],walloc_cgroup_30,walloc_cgroup_31,walloc_c[ 30],walloc_s[ 30] );
ysyx_22050612_WALLOC_33BITS walloc_tree31  (walloc_din[ 31],walloc_cgroup_31,walloc_cgroup_32,walloc_c[ 31],walloc_s[ 31] );
ysyx_22050612_WALLOC_33BITS walloc_tree32  (walloc_din[ 32],walloc_cgroup_32,walloc_cgroup_33,walloc_c[ 32],walloc_s[ 32] );
ysyx_22050612_WALLOC_33BITS walloc_tree33  (walloc_din[ 33],walloc_cgroup_33,walloc_cgroup_34,walloc_c[ 33],walloc_s[ 33] );
ysyx_22050612_WALLOC_33BITS walloc_tree34  (walloc_din[ 34],walloc_cgroup_34,walloc_cgroup_35,walloc_c[ 34],walloc_s[ 34] );
ysyx_22050612_WALLOC_33BITS walloc_tree35  (walloc_din[ 35],walloc_cgroup_35,walloc_cgroup_36,walloc_c[ 35],walloc_s[ 35] );
ysyx_22050612_WALLOC_33BITS walloc_tree36  (walloc_din[ 36],walloc_cgroup_36,walloc_cgroup_37,walloc_c[ 36],walloc_s[ 36] );
ysyx_22050612_WALLOC_33BITS walloc_tree37  (walloc_din[ 37],walloc_cgroup_37,walloc_cgroup_38,walloc_c[ 37],walloc_s[ 37] );
ysyx_22050612_WALLOC_33BITS walloc_tree38  (walloc_din[ 38],walloc_cgroup_38,walloc_cgroup_39,walloc_c[ 38],walloc_s[ 38] );
ysyx_22050612_WALLOC_33BITS walloc_tree39  (walloc_din[ 39],walloc_cgroup_39,walloc_cgroup_40,walloc_c[ 39],walloc_s[ 39] );
ysyx_22050612_WALLOC_33BITS walloc_tree40  (walloc_din[ 40],walloc_cgroup_40,walloc_cgroup_41,walloc_c[ 40],walloc_s[ 40] );
ysyx_22050612_WALLOC_33BITS walloc_tree41  (walloc_din[ 41],walloc_cgroup_41,walloc_cgroup_42,walloc_c[ 41],walloc_s[ 41] );
ysyx_22050612_WALLOC_33BITS walloc_tree42  (walloc_din[ 42],walloc_cgroup_42,walloc_cgroup_43,walloc_c[ 42],walloc_s[ 42] );
ysyx_22050612_WALLOC_33BITS walloc_tree43  (walloc_din[ 43],walloc_cgroup_43,walloc_cgroup_44,walloc_c[ 43],walloc_s[ 43] );
ysyx_22050612_WALLOC_33BITS walloc_tree44  (walloc_din[ 44],walloc_cgroup_44,walloc_cgroup_45,walloc_c[ 44],walloc_s[ 44] );
ysyx_22050612_WALLOC_33BITS walloc_tree45  (walloc_din[ 45],walloc_cgroup_45,walloc_cgroup_46,walloc_c[ 45],walloc_s[ 45] );
ysyx_22050612_WALLOC_33BITS walloc_tree46  (walloc_din[ 46],walloc_cgroup_46,walloc_cgroup_47,walloc_c[ 46],walloc_s[ 46] );
ysyx_22050612_WALLOC_33BITS walloc_tree47  (walloc_din[ 47],walloc_cgroup_47,walloc_cgroup_48,walloc_c[ 47],walloc_s[ 47] );
ysyx_22050612_WALLOC_33BITS walloc_tree48  (walloc_din[ 48],walloc_cgroup_48,walloc_cgroup_49,walloc_c[ 48],walloc_s[ 48] );
ysyx_22050612_WALLOC_33BITS walloc_tree49  (walloc_din[ 49],walloc_cgroup_49,walloc_cgroup_50,walloc_c[ 49],walloc_s[ 49] );
ysyx_22050612_WALLOC_33BITS walloc_tree50  (walloc_din[ 50],walloc_cgroup_50,walloc_cgroup_51,walloc_c[ 50],walloc_s[ 50] );
ysyx_22050612_WALLOC_33BITS walloc_tree51  (walloc_din[ 51],walloc_cgroup_51,walloc_cgroup_52,walloc_c[ 51],walloc_s[ 51] );
ysyx_22050612_WALLOC_33BITS walloc_tree52  (walloc_din[ 52],walloc_cgroup_52,walloc_cgroup_53,walloc_c[ 52],walloc_s[ 52] );
ysyx_22050612_WALLOC_33BITS walloc_tree53  (walloc_din[ 53],walloc_cgroup_53,walloc_cgroup_54,walloc_c[ 53],walloc_s[ 53] );
ysyx_22050612_WALLOC_33BITS walloc_tree54  (walloc_din[ 54],walloc_cgroup_54,walloc_cgroup_55,walloc_c[ 54],walloc_s[ 54] );
ysyx_22050612_WALLOC_33BITS walloc_tree55  (walloc_din[ 55],walloc_cgroup_55,walloc_cgroup_56,walloc_c[ 55],walloc_s[ 55] );
ysyx_22050612_WALLOC_33BITS walloc_tree56  (walloc_din[ 56],walloc_cgroup_56,walloc_cgroup_57,walloc_c[ 56],walloc_s[ 56] );
ysyx_22050612_WALLOC_33BITS walloc_tree57  (walloc_din[ 57],walloc_cgroup_57,walloc_cgroup_58,walloc_c[ 57],walloc_s[ 57] );
ysyx_22050612_WALLOC_33BITS walloc_tree58  (walloc_din[ 58],walloc_cgroup_58,walloc_cgroup_59,walloc_c[ 58],walloc_s[ 58] );
ysyx_22050612_WALLOC_33BITS walloc_tree59  (walloc_din[ 59],walloc_cgroup_59,walloc_cgroup_60,walloc_c[ 59],walloc_s[ 59] );
ysyx_22050612_WALLOC_33BITS walloc_tree60  (walloc_din[ 60],walloc_cgroup_60,walloc_cgroup_61,walloc_c[ 60],walloc_s[ 60] );
ysyx_22050612_WALLOC_33BITS walloc_tree61  (walloc_din[ 61],walloc_cgroup_61,walloc_cgroup_62,walloc_c[ 61],walloc_s[ 61] );
ysyx_22050612_WALLOC_33BITS walloc_tree62  (walloc_din[ 62],walloc_cgroup_62,walloc_cgroup_63,walloc_c[ 62],walloc_s[ 62] );
ysyx_22050612_WALLOC_33BITS walloc_tree63  (walloc_din[ 63],walloc_cgroup_63,walloc_cgroup_64,walloc_c[ 63],walloc_s[ 63] );
ysyx_22050612_WALLOC_33BITS walloc_tree64  (walloc_din[ 64],walloc_cgroup_64,walloc_cgroup_65,walloc_c[ 64],walloc_s[ 64] );
ysyx_22050612_WALLOC_33BITS walloc_tree65  (walloc_din[ 65],walloc_cgroup_65,walloc_cgroup_66,walloc_c[ 65],walloc_s[ 65] );
ysyx_22050612_WALLOC_33BITS walloc_tree66  (walloc_din[ 66],walloc_cgroup_66,walloc_cgroup_67,walloc_c[ 66],walloc_s[ 66] );
ysyx_22050612_WALLOC_33BITS walloc_tree67  (walloc_din[ 67],walloc_cgroup_67,walloc_cgroup_68,walloc_c[ 67],walloc_s[ 67] );
ysyx_22050612_WALLOC_33BITS walloc_tree68  (walloc_din[ 68],walloc_cgroup_68,walloc_cgroup_69,walloc_c[ 68],walloc_s[ 68] );
ysyx_22050612_WALLOC_33BITS walloc_tree69  (walloc_din[ 69],walloc_cgroup_69,walloc_cgroup_70,walloc_c[ 69],walloc_s[ 69] );
ysyx_22050612_WALLOC_33BITS walloc_tree70  (walloc_din[ 70],walloc_cgroup_70,walloc_cgroup_71,walloc_c[ 70],walloc_s[ 70] );
ysyx_22050612_WALLOC_33BITS walloc_tree71  (walloc_din[ 71],walloc_cgroup_71,walloc_cgroup_72,walloc_c[ 71],walloc_s[ 71] );
ysyx_22050612_WALLOC_33BITS walloc_tree72  (walloc_din[ 72],walloc_cgroup_72,walloc_cgroup_73,walloc_c[ 72],walloc_s[ 72] );
ysyx_22050612_WALLOC_33BITS walloc_tree73  (walloc_din[ 73],walloc_cgroup_73,walloc_cgroup_74,walloc_c[ 73],walloc_s[ 73] );
ysyx_22050612_WALLOC_33BITS walloc_tree74  (walloc_din[ 74],walloc_cgroup_74,walloc_cgroup_75,walloc_c[ 74],walloc_s[ 74] );
ysyx_22050612_WALLOC_33BITS walloc_tree75  (walloc_din[ 75],walloc_cgroup_75,walloc_cgroup_76,walloc_c[ 75],walloc_s[ 75] );
ysyx_22050612_WALLOC_33BITS walloc_tree76  (walloc_din[ 76],walloc_cgroup_76,walloc_cgroup_77,walloc_c[ 76],walloc_s[ 76] );
ysyx_22050612_WALLOC_33BITS walloc_tree77  (walloc_din[ 77],walloc_cgroup_77,walloc_cgroup_78,walloc_c[ 77],walloc_s[ 77] );
ysyx_22050612_WALLOC_33BITS walloc_tree78  (walloc_din[ 78],walloc_cgroup_78,walloc_cgroup_79,walloc_c[ 78],walloc_s[ 78] );
ysyx_22050612_WALLOC_33BITS walloc_tree79  (walloc_din[ 79],walloc_cgroup_79,walloc_cgroup_80,walloc_c[ 79],walloc_s[ 79] );
ysyx_22050612_WALLOC_33BITS walloc_tree80  (walloc_din[ 80],walloc_cgroup_80,walloc_cgroup_81,walloc_c[ 80],walloc_s[ 80] );
ysyx_22050612_WALLOC_33BITS walloc_tree81  (walloc_din[ 81],walloc_cgroup_81,walloc_cgroup_82,walloc_c[ 81],walloc_s[ 81] );
ysyx_22050612_WALLOC_33BITS walloc_tree82  (walloc_din[ 82],walloc_cgroup_82,walloc_cgroup_83,walloc_c[ 82],walloc_s[ 82] );
ysyx_22050612_WALLOC_33BITS walloc_tree83  (walloc_din[ 83],walloc_cgroup_83,walloc_cgroup_84,walloc_c[ 83],walloc_s[ 83] );
ysyx_22050612_WALLOC_33BITS walloc_tree84  (walloc_din[ 84],walloc_cgroup_84,walloc_cgroup_85,walloc_c[ 84],walloc_s[ 84] );
ysyx_22050612_WALLOC_33BITS walloc_tree85  (walloc_din[ 85],walloc_cgroup_85,walloc_cgroup_86,walloc_c[ 85],walloc_s[ 85] );
ysyx_22050612_WALLOC_33BITS walloc_tree86  (walloc_din[ 86],walloc_cgroup_86,walloc_cgroup_87,walloc_c[ 86],walloc_s[ 86] );
ysyx_22050612_WALLOC_33BITS walloc_tree87  (walloc_din[ 87],walloc_cgroup_87,walloc_cgroup_88,walloc_c[ 87],walloc_s[ 87] );
ysyx_22050612_WALLOC_33BITS walloc_tree88  (walloc_din[ 88],walloc_cgroup_88,walloc_cgroup_89,walloc_c[ 88],walloc_s[ 88] );
ysyx_22050612_WALLOC_33BITS walloc_tree89  (walloc_din[ 89],walloc_cgroup_89,walloc_cgroup_90,walloc_c[ 89],walloc_s[ 89] );
ysyx_22050612_WALLOC_33BITS walloc_tree90  (walloc_din[ 90],walloc_cgroup_90,walloc_cgroup_91,walloc_c[ 90],walloc_s[ 90] );
ysyx_22050612_WALLOC_33BITS walloc_tree91  (walloc_din[ 91],walloc_cgroup_91,walloc_cgroup_92,walloc_c[ 91],walloc_s[ 91] );
ysyx_22050612_WALLOC_33BITS walloc_tree92  (walloc_din[ 92],walloc_cgroup_92,walloc_cgroup_93,walloc_c[ 92],walloc_s[ 92] );
ysyx_22050612_WALLOC_33BITS walloc_tree93  (walloc_din[ 93],walloc_cgroup_93,walloc_cgroup_94,walloc_c[ 93],walloc_s[ 93] );
ysyx_22050612_WALLOC_33BITS walloc_tree94  (walloc_din[ 94],walloc_cgroup_94,walloc_cgroup_95,walloc_c[ 94],walloc_s[ 94] );
ysyx_22050612_WALLOC_33BITS walloc_tree95  (walloc_din[ 95],walloc_cgroup_95,walloc_cgroup_96,walloc_c[ 95],walloc_s[ 95] );
ysyx_22050612_WALLOC_33BITS walloc_tree96  (walloc_din[ 96],walloc_cgroup_96,walloc_cgroup_97,walloc_c[ 96],walloc_s[ 96] );
ysyx_22050612_WALLOC_33BITS walloc_tree97  (walloc_din[ 97],walloc_cgroup_97,walloc_cgroup_98,walloc_c[ 97],walloc_s[ 97] );
ysyx_22050612_WALLOC_33BITS walloc_tree98  (walloc_din[ 98],walloc_cgroup_98,walloc_cgroup_99,walloc_c[ 98],walloc_s[ 98] );
ysyx_22050612_WALLOC_33BITS walloc_tree99  (walloc_din[ 99],walloc_cgroup_99,walloc_cgroup_100,walloc_c[ 99],walloc_s[ 99] );

ysyx_22050612_WALLOC_33BITS walloc_tree100  (walloc_din[100],walloc_cgroup_100,walloc_cgroup_101,walloc_c[100],walloc_s[100] );
ysyx_22050612_WALLOC_33BITS walloc_tree101  (walloc_din[101],walloc_cgroup_101,walloc_cgroup_102,walloc_c[101],walloc_s[101] );
ysyx_22050612_WALLOC_33BITS walloc_tree102  (walloc_din[102],walloc_cgroup_102,walloc_cgroup_103,walloc_c[102],walloc_s[102] );
ysyx_22050612_WALLOC_33BITS walloc_tree103  (walloc_din[103],walloc_cgroup_103,walloc_cgroup_104,walloc_c[103],walloc_s[103] );
ysyx_22050612_WALLOC_33BITS walloc_tree104  (walloc_din[104],walloc_cgroup_104,walloc_cgroup_105,walloc_c[104],walloc_s[104] );
ysyx_22050612_WALLOC_33BITS walloc_tree105  (walloc_din[105],walloc_cgroup_105,walloc_cgroup_106,walloc_c[105],walloc_s[105] );
ysyx_22050612_WALLOC_33BITS walloc_tree106  (walloc_din[106],walloc_cgroup_106,walloc_cgroup_107,walloc_c[106],walloc_s[106] );
ysyx_22050612_WALLOC_33BITS walloc_tree107  (walloc_din[107],walloc_cgroup_107,walloc_cgroup_108,walloc_c[107],walloc_s[107] );
ysyx_22050612_WALLOC_33BITS walloc_tree108  (walloc_din[108],walloc_cgroup_108,walloc_cgroup_109,walloc_c[108],walloc_s[108] );
ysyx_22050612_WALLOC_33BITS walloc_tree109  (walloc_din[109],walloc_cgroup_109,walloc_cgroup_110,walloc_c[109],walloc_s[109] );
ysyx_22050612_WALLOC_33BITS walloc_tree110  (walloc_din[110],walloc_cgroup_110,walloc_cgroup_111,walloc_c[110],walloc_s[110] );
ysyx_22050612_WALLOC_33BITS walloc_tree111  (walloc_din[111],walloc_cgroup_111,walloc_cgroup_112,walloc_c[111],walloc_s[111] );
ysyx_22050612_WALLOC_33BITS walloc_tree112  (walloc_din[112],walloc_cgroup_112,walloc_cgroup_113,walloc_c[112],walloc_s[112] );
ysyx_22050612_WALLOC_33BITS walloc_tree113  (walloc_din[113],walloc_cgroup_113,walloc_cgroup_114,walloc_c[113],walloc_s[113] );
ysyx_22050612_WALLOC_33BITS walloc_tree114  (walloc_din[114],walloc_cgroup_114,walloc_cgroup_115,walloc_c[114],walloc_s[114] );
ysyx_22050612_WALLOC_33BITS walloc_tree115  (walloc_din[115],walloc_cgroup_115,walloc_cgroup_116,walloc_c[115],walloc_s[115] );
ysyx_22050612_WALLOC_33BITS walloc_tree116  (walloc_din[116],walloc_cgroup_116,walloc_cgroup_117,walloc_c[116],walloc_s[116] );
ysyx_22050612_WALLOC_33BITS walloc_tree117  (walloc_din[117],walloc_cgroup_117,walloc_cgroup_118,walloc_c[117],walloc_s[117] );
ysyx_22050612_WALLOC_33BITS walloc_tree118  (walloc_din[118],walloc_cgroup_118,walloc_cgroup_119,walloc_c[118],walloc_s[118] );
ysyx_22050612_WALLOC_33BITS walloc_tree119  (walloc_din[119],walloc_cgroup_119,walloc_cgroup_120,walloc_c[119],walloc_s[119] );
ysyx_22050612_WALLOC_33BITS walloc_tree120  (walloc_din[120],walloc_cgroup_120,walloc_cgroup_121,walloc_c[120],walloc_s[120] );
ysyx_22050612_WALLOC_33BITS walloc_tree121  (walloc_din[121],walloc_cgroup_121,walloc_cgroup_122,walloc_c[121],walloc_s[121] );
ysyx_22050612_WALLOC_33BITS walloc_tree122  (walloc_din[122],walloc_cgroup_122,walloc_cgroup_123,walloc_c[122],walloc_s[122] );
ysyx_22050612_WALLOC_33BITS walloc_tree123  (walloc_din[123],walloc_cgroup_123,walloc_cgroup_124,walloc_c[123],walloc_s[123] );
ysyx_22050612_WALLOC_33BITS walloc_tree124  (walloc_din[124],walloc_cgroup_124,walloc_cgroup_125,walloc_c[124],walloc_s[124] );
ysyx_22050612_WALLOC_33BITS walloc_tree125  (walloc_din[125],walloc_cgroup_125,walloc_cgroup_126,walloc_c[125],walloc_s[125] );
ysyx_22050612_WALLOC_33BITS walloc_tree126  (walloc_din[126],walloc_cgroup_126,walloc_cgroup_127,walloc_c[126],walloc_s[126] );
ysyx_22050612_WALLOC_33BITS walloc_tree127  (walloc_din[127],walloc_cgroup_127,walloc_cgroup_128,walloc_c[127],walloc_s[127] );
ysyx_22050612_WALLOC_33BITS walloc_tree128  (walloc_din[128],walloc_cgroup_128,walloc_cgroup_129,walloc_c[128],walloc_s[128] );
ysyx_22050612_WALLOC_33BITS walloc_tree129  (walloc_din[129],walloc_cgroup_129,walloc_cgroup_130,walloc_c[129],walloc_s[129] );
ysyx_22050612_WALLOC_33BITS walloc_tree130  (walloc_din[130],walloc_cgroup_130,walloc_cgroup_131,walloc_c[130],walloc_s[130] );
*/



reg [130:0] walloc_c_reg;
reg [131:0] walloc_s_reg;
reg c31_reg;
reg c32_reg;
reg mul_pipe2_valid;

always @(posedge clk) begin
	if(rst || flush) begin
		walloc_c_reg <= 131'b0;
		walloc_s_reg <= 132'b0;
		c31_reg      <= 1'b0;
		c32_reg      <= 1'b0;
		mul_pipe2_valid <= 1'b0;
	end
	else if(mul_pipe1_valid) begin
		walloc_c_reg <= walloc_c;
		walloc_s_reg <= walloc_s;
		c31_reg      <= c_reg[31];
		c32_reg      <= c_reg[32];
		mul_pipe2_valid <= 1'b1;
	end
	else begin
		mul_pipe2_valid <= 1'b0;
	end
end





wire [131:0]result;
assign result = walloc_s_reg + {walloc_c_reg,c_reg[31]} + {{131{1'b0}},c32_reg};

assign result_hi = result[127:64];
assign result_lo = result[63:0];

//assign mul_ready = ~(mul_pipe1_valid || mul_pipe2_valid);
assign mul_ready = mul_pipe2_valid;
assign out_valid = mul_pipe2_valid;


endmodule
