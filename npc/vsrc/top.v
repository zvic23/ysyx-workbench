module top(clk,clr,hex0,hex1);
   input  clk, clr;
   output [6:0]hex0;
   output [6:0]hex1;

   reg [7:0]x=8'b1;
   reg c=1; 

   always @(posedge clk or posedge clr) begin
   if(clr ==1 ) begin x<=8'b00000001; c<=1; end
   else begin
	    x<={c,x[7:1]};
   end
   
	    c<=x[4]^x[3]^x[2]^x[0];
end

bcd7seg s0(x[3:0] , hex0);
bcd7seg s1(x[7:4] , hex1);

endmodule





