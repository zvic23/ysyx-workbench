module top(clk,clr,vga_clk,hsync,vsync,vga_r,vga_g,vga_b,vga_blank
           ,ps2_clk,ps2_data,capital);
   input  clk, clr;
   output hsync,vsync,vga_clk,vga_blank;
   output [7:0] vga_r,vga_g,vga_b;               //vga部分

   input  ps2_clk,ps2_data;                      //keyboard部分
   output capital;
   
   
   
   wire press,enter,backspace; 
   wire [7:0]data,dataascii;
   reg clk_1,clk_2,firstpress;

   ps2_keyboard p0(clk,clr,ps2_clk,ps2_data,data,press,capital,enter,backspace);
   codeconvert c0(data,capital,dataascii);                            //keyboard部分
   clkgen #(50)c1(clk,clr,clk_1);
   clkgen #(50)c2(clk,clr,clk_2);
   reg [6:0]x;
   reg [4:0]y;
   reg [7:0]kpr;
   reg [6:0]nonull [29:0];
   reg [29:0]commandline;
   integer i,j;
   wire kpring;


   always@(posedge clk_1 or negedge press ) begin
	   if (clr)  kpr<=0;
	   else if(press)  kpr<=kpr+1;
	   else       kpr<=0;
   end
   assign kpring=(kpr>4)?clk_1:0;


   always@(posedge clr or posedge press or posedge kpring or posedge enter or posedge backspace) begin
	   if(clr)begin
		   x<=4; y<=0; nonull[0]<=4; 
			   for (i=0;i<30;i=i+1 )begin
				   nonull[i]<=0;
				   for (j=0;j<70;j=j+1)begin
					   ascii_mem[j][i]=0;
				   end
			   end
	           ascii_mem[0][0]<=8'h5A ;
		   ascii_mem[1][0]<=8'h53 ;
                   ascii_mem[2][0]<=8'h4C ;
                   ascii_mem[3][0]<=8'h3A ;
                   commandline[0]<=1;

	   end

	   else if(enter==1) begin 
		   if(y==29) begin
			   for (i=0;i<29;i=i+1 )begin
				   nonull[i]<=nonull[i+1];commandline[y]<=commandline[y+1];
				   for (j=0;j<70;j=j+1)begin
					   ascii_mem[j][i]=ascii_mem[j][i+1];
				   end
			   end
			   for (j=0;j<70;j=j+1) ascii_mem[j][29]=0;
			   ascii_mem[0][29]<=8'h5A ;
			   ascii_mem[1][29]<=8'h53 ;
                           ascii_mem[2][29]<=8'h4C ;
                           ascii_mem[3][29]<=8'h3A ;
                           commandline[29]<=1;
			   x<=4; nonull[29]<=4;  
		   end
		   else begin
			   y<=y+1;x<=4;nonull[y]<=x;
			   ascii_mem[0][y+1]<=8'h5A ;
			   ascii_mem[1][y+1]<=8'h53 ;
                           ascii_mem[2][y+1]<=8'h4C ;
                           ascii_mem[3][y+1]<=8'h3A ;
                           commandline[y+1]<=1;
		   end
	   end

	   else if(backspace==1) begin
		   if(commandline[y]==0)begin
			   if(x!=0)begin
				   ascii_mem[x-1][y]<=0;
			           x<=x-1;   nonull[y]<=nonull[y]-1;
		           end
		           else if((x==0)&&(y!=0)) begin
			           ascii_mem[69][y-1]<=0;
			           x<=69; y<=y-1; nonull[y]<=0;
		           end
		   end
		   else begin
       	                   if(x!=4)begin
				   ascii_mem[x-1][y]<=0;
			           x<=x-1;   nonull[y]<=nonull[y]-1;
		           end
		           else if((x==4)&&(y!=0)) begin
			           //ascii_mem[69][y-1]<=0;
			           x<=nonull[y-1]; y<=y-1; nonull[y]<=0;
           			   ascii_mem[0][y]<=8'h0 ;
	         		   ascii_mem[1][y]<=8'h0 ;
                                   ascii_mem[2][y]<=8'h0 ;
                                   ascii_mem[3][y]<=8'h0 ;
                                   commandline[y]<=0;
		           end

		   end
	   end


	   else if(press==1)begin
		   if((x==69)&&(y==29))begin
                	   for (i=0;i<29;i=i+1 )begin
				   nonull[i]<=nonull[i+1];
				   commandline[y]<=commandline[y+1];
				   for (j=0;j<70;j=j+1)begin
					   ascii_mem[j][i]=ascii_mem[j][i+1];
				   end
			   end
			   for (j=0;j<70;j=j+1) ascii_mem[j][29]=0;
			           ascii_mem[x][y-1]<=dataascii;
				   x<=0; nonull[y]<=0;nonull[y-1]<=70;commandline[y]<=0;
		   end
		   else if(x==69)begin
           	           ascii_mem[x][y]<=dataascii;
		           x<=0; y<=y+1; nonull[y]<=70;

		   end
		   else begin
                           ascii_mem[x][y]<=dataascii;
		           x<=x+1;  nonull[y]<=nonull[y]+1;

		   end
           end



   end




wire valid;
wire [9:0]h_addr,v_addr;
wire [23:0] vga_data;
assign vga_clk=clk;
assign vga_blank=valid;

reg [9:0] h_c,v_c;
reg [6:0] h_n,v_n;
reg [7:0] ascii;
reg [11:0] linesum;
reg [11:0] line;
reg point,cursor;
reg [7:0]  ascii_mem [69:0][29:0];
reg [11:0] point_mem [4095:0];
initial begin
    $readmemh("resource/11.hex", point_mem);
end

vga_ctrl v0(clk,clr,vga_data,h_addr,v_addr,hsync,vsync,valid,vga_r,vga_g,vga_b);

//assign ascii_mem[0][0] = 8'h41;
//assign ascii_mem[1][0] = 8'h42;
//assign ascii_mem[0][1] = 8'h43;
//assign ascii_mem[69][0] = 8'h44;
//assign ascii_mem[0][29] = 8'h45;

assign cursor = (h_n==x)&&(v_n=={2'b0,y})&&(h_c<=2);
assign ascii = ascii_mem[h_n][v_n[4:0]];
assign linesum = ascii*16+1+{2'b0,v_c};
assign line = (cursor&&clk_2)?12'hFFF:point_mem[linesum];
assign point= (h_n<=69)?line[h_c[3:0]]:0;
assign vga_data = point?24'hFFFF00:0;

	always@(h_addr) begin                    //地址计算
                h_c=h_addr;
                v_c=v_addr;
                h_n=0;
		v_n=0;
		while (h_c>=9) begin
			h_c=h_c-9;
			h_n=h_n+1;
		end
                while (v_c>=16) begin
			v_c=v_c-16;
			v_n=v_n+1;
		end
	end
                                                             //vga部分











endmodule





