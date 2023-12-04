import "DPI-C" function void pmem_read_icache_low64(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_read_icache_high64(
  input longint raddr, output longint rdata);
import "DPI-C" function void icache_collect(int hit);
import "DPI-C" function void ICACHE_state_trace (longint a,longint b,longint c,longint d,longint e,longint f,longint g,longint h,longint i,longint j,longint k,longint l,longint m,longint n,longint o,longint p); //16 parameters

module ysyx_22050612_ICACHE (
input clk,
input rst,

input [63:0]addr,
input [63:0]addr_prev,
input valid,
input flush,
input ready_IF_ID,

output [31:0]inst,
output reg ready,

output way_hit_out,     //output the info about miss
input [63:0]waddr,      //waddr comes from MEM, and it's uesd to maintain icache and dcache consistency

//***  axi_full signal from icache ***//
output [31:0]araddr,
output [7:0]arlen,
output [2:0]arsize,
output [1:0]arburst,
output reg arvalid,
input arready,

input [63:0]rdata,
input [1:0]rrsep,
input rlast,
input rvalid,
output rready
);


//************************  pipeline trace ******************************
always @(negedge clk) begin
	ICACHE_state_trace (addr_prev, {32'b0,inst}, {63'b0,valid}, {63'b0,ready}, line_mem_prev[127:64], line_mem_prev[63:0], {60'b0,index}, {58'b0,addr_prev[9:4]},
	{60'b0,addr[3:0]}, {60'b0,addr_prev[3:0]}, {60'b0,way_hit}, {60'b0,way_hit_prev}, {60'b0,cen3,cen2,cen1,cen0}, {60'b0,random_cnt}, {63'b0,arvalid}, {62'b0,icache_current_state});
	//ICACHE_state_trace (addr_prev, {32'b0,inst}, {63'b0,valid}, {63'b0,ready}, line_mem_prev[127:64], line_mem_prev[63:0], {58'b0,index}, {58'b0,addr_prev[9:4]},
	//{60'b0,addr[3:0]}, {60'b0,addr_prev[3:0]}, {60'b0,way_hit}, {60'b0,way_hit_prev}, {60'b0,cen3,cen2,cen1,cen0}, {63'b0,wen}, line_mem[127:64], line_mem[63:0]);




	//$display("icache   pc:%x   inst:%x   valid:%d   ready:%d",addr_prev,inst,valid,ready);
	//$display("icache   %b   %b    %d  %d  %d  %d   ",way_hit,way_hit_prev,cen0,cen1,cen2,cen3);
	//$display("icache   pc:%x   inst:%x   valid:%d   ready:%d   line_prev:%x  index:%x  index_prev:%x  offset:%x  offset_prev:%x  din:%x  wen:%x  state:%x, arready:%x",addr_prev,inst,valid,ready,line_mem_prev,index,addr_prev[9:4],addr[3:0],addr_prev[3:0]    ,din,wen,icache_current_state,arready);
	//$display("icache   %b   %b    %d  %d  %d  %d   dout:%x  dout0:%x dout1:%x dout2:%x dout3:%x  wen:%x  line:%x     ready_ifid:%d\ntag0:%x  tag1:%x  tag2:%x  tag3:%x\n",way_hit,way_hit_prev,cen0,cen1,cen2,cen3,dout,dout0,dout1,dout2,dout3,wen,line_mem   ,ready_IF_ID,tag0[index],tag1[index],tag2[index],tag3[index],);
//	if(~(way_hit==4'b1||way_hit==4'd2||way_hit==4'd4||way_hit==4'd8||way_hit==4'd0))begin
//		$display("woho!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
//	end
/*
if(addr>=64'h83004840 &&  addr<=64'h8300484c) begin
	$display("1add:%x   icache   pc:%x   inst:%x   valid:%d   ready:%d   line_prev:%x  index:%x  index_prev:%x  offset:%x  offset_prev:%x",addr,addr_prev,inst,valid,ready,line_mem_prev,index,addr_prev[9:4],addr[3:0],addr_prev[3:0]);
	$display("icache   %b   %b    %d  %d  %d  %d   dout:%x  dout0:%x dout1:%x dout2:%x dout3:%x  wen:%x  line:%x    dump:%d  ready_ifid:%d\ntag0:%x  tag1:%x  tag2:%x  tag3:%x\n",way_hit,way_hit_prev,cen0,cen1,cen2,cen3,dout,dout0,dout1,dout2,dout3,wen,line_mem   ,dump,ready_IF_ID,tag0[index],tag1[index],tag2[index],tag3[index],);
end
if(addr>=64'h83005d30 &&  addr<=64'h83005d3c) begin
	$display("0add:%x   icache   pc:%x   inst:%x   valid:%d   ready:%d   line_prev:%x  index:%x  index_prev:%x  offset:%x  offset_prev:%x",addr,addr_prev,inst,valid,ready,line_mem_prev,index,addr_prev[9:4],addr[3:0],addr_prev[3:0]);
	$display("icache   %b   %b    %d  %d  %d  %d   dout:%x  dout0:%x dout1:%x dout2:%x dout3:%x  wen:%x  line:%x    dump:%d  ready_ifid:%d\ntag0:%x  tag1:%x  tag2:%x  tag3:%x\n",way_hit,way_hit_prev,cen0,cen1,cen2,cen3,dout,dout0,dout1,dout2,dout3,wen,line_mem   ,dump,ready_IF_ID,tag0[index],tag1[index],tag2[index],tag3[index],);
end
*/
end
//*****************************************************************


reg [21:0]tag0[15:0];
reg [21:0]tag1[15:0];
reg [21:0]tag2[15:0];
reg [21:0]tag3[15:0];
reg [15:0]v0;
reg [15:0]v1;
reg [15:0]v2;
reg [15:0]v3;

integer i;
always @(posedge clk) begin
	if(rst) begin
		v0 <= 16'b0;
		v1 <= 16'b0;
		v2 <= 16'b0;
		v3 <= 16'b0;
		for(i=0;i<=15;i=i+1)begin
			tag0[i] <= 22'b0;
			tag1[i] <= 22'b0;
			tag2[i] <= 22'b0;
			tag3[i] <= 22'b0;
		end
	end
	else if(!wen && rlast) begin
		case({!cen3,!cen2,!cen1,!cen0})
			4'b0001: begin v0[addr_wr_sram[9:6]] <= 1'b1; tag0[addr_wr_sram[9:6]] <= addr_wr_sram[31:10]; end 
			4'b0010: begin v1[addr_wr_sram[9:6]] <= 1'b1; tag1[addr_wr_sram[9:6]] <= addr_wr_sram[31:10]; end
			4'b0100: begin v2[addr_wr_sram[9:6]] <= 1'b1; tag2[addr_wr_sram[9:6]] <= addr_wr_sram[31:10]; end
			4'b1000: begin v3[addr_wr_sram[9:6]] <= 1'b1; tag3[addr_wr_sram[9:6]] <= addr_wr_sram[31:10]; end
			default: begin end
		endcase
	end

	if(waddr!=0) begin
		if(tag0[waddr[9:6]] == waddr[31:10]) begin v0[waddr[9:6]] <= 1'b0; end
		if(tag1[waddr[9:6]] == waddr[31:10]) begin v1[waddr[9:6]] <= 1'b0; end
		if(tag2[waddr[9:6]] == waddr[31:10]) begin v2[waddr[9:6]] <= 1'b0; end
		if(tag3[waddr[9:6]] == waddr[31:10]) begin v3[waddr[9:6]] <= 1'b0; end
	end

end

wire [3:0]index;
assign index = addr[9:6];
wire [3:0]way_hit;
assign way_hit[0] = v0[index] && (tag0[index] == addr[31:10]);
assign way_hit[1] = v1[index] && (tag1[index] == addr[31:10]);
assign way_hit[2] = v2[index] && (tag2[index] == addr[31:10]);
assign way_hit[3] = v3[index] && (tag3[index] == addr[31:10]);
assign way_hit_out = (icache_current_state==idle) && (way_hit!=4'b0);


wire [127:0]dout0, dout1, dout2, dout3;
wire cen0, cen1, cen2, cen3;
wire wen;
wire [127:0]bwen;
wire [5:0]addr_sram;
wire [127:0]din;


reg [3:0]wr_sram_count;
reg [3:0]random_cnt;

reg [63:0]addr_wr_sram;
always @(posedge clk) begin
	if(rst) begin
		wr_sram_count      <= 4'b0;
		random_cnt         <= 4'b1;
	end
	else if(icache_current_state==idle) begin
		wr_sram_count      <= 4'b0;
		random_cnt[0]      <= random_cnt[3];
		random_cnt[3:1]    <= random_cnt[2:0];
	end
	else begin
		wr_sram_count      <= wr_sram_count+4'b1;
		random_cnt         <= random_cnt;
	end

	if(rst) begin
		addr_wr_sram       <= 64'b0;
	end
	else if(arvalid&&arready) begin
		addr_wr_sram       <= addr;
	end
end

assign addr_sram = icache_current_state==idle ? addr[9:4] : {addr_wr_sram[9:6],wr_sram_count[2:1]};
assign bwen[63 :0 ] = (wr_sram_count[0]==1'b0) ? 64'b0 : {64{1'b1}}; 
assign bwen[127:64] = (wr_sram_count[0]==1'b1) ? 64'b0 : {64{1'b1}}; 
assign  din[63 :0 ] = (wr_sram_count[0]==1'b0) ? rdata : 64'b0; 
assign  din[127:64] = (wr_sram_count[0]==1'b1) ? rdata : 64'b0; 
assign cen0 = ~(  (icache_current_state==idle) ? (valid&&way_hit[0]) : (random_cnt[0]&&rvalid&&rready)      ) ;
assign cen1 = ~(  (icache_current_state==idle) ? (valid&&way_hit[1]) : (random_cnt[1]&&rvalid&&rready)      ) ;
assign cen2 = ~(  (icache_current_state==idle) ? (valid&&way_hit[2]) : (random_cnt[2]&&rvalid&&rready)      ) ;
assign cen3 = ~(  (icache_current_state==idle) ? (valid&&way_hit[3]) : (random_cnt[3]&&rvalid&&rready)      ) ;
assign  wen = ~(   icache_current_state==readmemory && rvalid && rready            ) ;

S011HD1P_X32Y2D128_BW sram_i0(dout0, clk, cen0, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i1(dout1, clk, cen1, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i2(dout2, clk, cen2, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i3(dout3, clk, cen3, wen, bwen, addr_sram, din);


reg [3:0]way_hit_prev;
reg [127:0]line_mem_prev;
always @(posedge clk) begin
	if(rst || flush) begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end

	else if(valid && way_hit!=4'b0 && icache_current_state==idle)begin
	     	way_hit_prev    <= way_hit;
		line_mem_prev   <= line_mem;
		ready           <= 1'b1;
	end
	else begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <= line_mem;
		ready           <= 1'b0;
	end
end
/*
always @(posedge clk) begin
	if(rst) begin
		way_hit_prev    <= 4'b0;
		random_cnt      <= 4'b1;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end
	else if(icache_current_state == 2'b1 && flush) begin
	end
	else if() begin
		way_hit_prev    <= way_hit_prev ;
		random_cnt      <= random_cnt   ;
		line_mem_prev   <= line_mem_prev;
		ready           <= ready        ;
	end
	else if(flush) begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end
	else begin
	     	way_hit_prev    <= way_hit;
		random_cnt[0]   <= random_cnt[3];
		random_cnt[3:1] <= random_cnt[2:0];
		line_mem_prev   <= line_mem;
		ready           <= valid;
	end
end
*/
reg [127:0]dout;
always @(*) begin
	case(way_hit_prev)
		4'b0001: dout = dout0;
		4'b0010: dout = dout1;
		4'b0100: dout = dout2;
		4'b1000: dout = dout3;
		default: dout = 128'b0;
		//default: dout = line_mem_prev;
	endcase
end

assign inst =  addr_prev[3:2]==2'b0 ? dout[31:0] : (addr_prev[3:2]==2'b01 ? dout[63:32] : (addr_prev[3:2]==2'b10 ? dout[95:64] : (addr_prev[3:2]==2'b11 ? dout[127:96] : 32'b0)))  ;





wire [127:0]line_mem;
always @(*) begin
//	if(valid && (way_hit == 4'b0)) begin
		pmem_read_icache_low64 (addr, line_mem[63:0]);
		pmem_read_icache_high64(addr, line_mem[127:64]);
//	end
end



//*******************   AXI-FULL    ***********************
//wire [31:0]araddr;
//wire [7:0]arlen;
//wire [2:0]arsize;
//wire [1:0]arburst;
//reg arvalid;
//wire arready;
//
//wire [63:0]rdata;
//wire [1:0]rrsep;
//wire rlast;
//wire rvalid;
//wire rready;


//ysyx_22050612_SRAM  sram_ifu (clk, rst, araddr, arlen, arsize, arburst, arvalid, arready,    rdata, rrsep, rlast, rvalid, rready);
//ysyx_22050612_SRAM  sram_ifu (clk, rst, araddr, arlen, arsize, arburst, arvalid, arready,    rdata, rrsep, rlast, rvalid, rready,   
//	                                 32'b0,  8'b0,   3'b0,    2'b0,    1'b0,    ,    64'b0,  8'b0,  1'b0,   1'b0,   ,
//				      	 , , 1'b0);
	                                 //32'b0,  8'b0,   3'b0,    2'b0,    1'b0,    ,    64'b0,  8'b0,  1'b0,   1'b0,   ,   , , 1'b0   , , , , , 2'b0,64'b0,8'b0);

assign araddr  = {addr[31:6],6'b0};
assign arlen   = 8'b111;                                    //The real length is arlen + 1
assign arsize  = 3'b110;                                     //64bits
assign arburst = 2'b01;

assign rready  = 1'b1;


//****************     icahce state machine   ***************
reg [1:0]icache_current_state, icache_next_state;

localparam idle       = 2'b00;        //
localparam readmemory = 2'b01;        //
//localparam readsram   = 2'b11;        //


always @(posedge clk) begin
	if(rst == 1'b1) icache_current_state <= idle;
	else            icache_current_state <= icache_next_state;
end

always @(*) begin
	case(icache_current_state)
		idle: begin
			arvalid = valid && (way_hit==4'b0);
			icache_next_state = (valid && way_hit==4'b0 && arready) ? readmemory : idle;
		end
		readmemory: begin
			arvalid = 1'b0;
			icache_next_state = rlast ? idle : readmemory;
		end
		/*
		readsram: begin
			arvalid = 1'b0;
			icache_next_state = rlast ? readsram : readmemory;
		end
		*/
		default: begin
			arvalid = 1'b0;
			icache_next_state = idle;
		end
	endcase
end









always @(negedge clk) begin
	if(valid&&icache_current_state==2'b0) begin
		if(way_hit != 4'b0) begin
			icache_collect(1);
		end
		else begin
			icache_collect(0);
		end
	end
end

  
endmodule
