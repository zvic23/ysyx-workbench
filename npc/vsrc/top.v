module top(clk,clr,ps2_clk,ps2_data,seg0,seg1,seg2,seg3,seg4,seg5,seg6,seg7,cmb);
   input  clk, clr, ps2_clk, ps2_data;
   output [6:0]seg0,seg1,seg2,seg3,seg4,seg5,seg6,seg7;
   output cmb;
   reg [7:0]data;
   reg rel;
   reg [15:0]sum;
   reg [6:0]hex0,hex1,hex2,hex3,hex6,hex7;


ps2_keyboard p0(clk,clr,ps2_clk,ps2_data,data,rel,sum,cmb);

bcd7seg s0(data[3:0] , hex0);
bcd7seg s1(data[7:4] , hex1);
bcd7seg s2(data[3:0] , hex2);
bcd7seg s3(data[7:4] , hex3);
bcd7seg s4(sum[3:0]  , seg6);
bcd7seg s5(sum[7:4]  , seg7);

assign seg0=rel? 7'hFF:hex0;
assign seg1=rel? 7'hFF:hex1;
assign seg2=rel? 7'hFF:hex2;
assign seg3=rel? 7'hFF:hex3;
assign seg4=7'hFF;
assign seg5=7'hFF;






endmodule





