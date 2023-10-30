import "DPI-C" function void pmem_read_dcache_low64(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_read_dcache_high64(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write_dcache_low64(
  input longint raddr, input wren, input longint wdata, input longint wmask, output longint rdata_low, output longint rdata_high);
import "DPI-C" function void pmem_write_dcache_high64(
  input longint raddr, input byte wren, input longint wdata, input longint wmask, output longint rdata);
import "DPI-C" function void dcache_collect(int hit);
import "DPI-C" function void DCACHE_state_trace (longint a,longint b,longint c,longint d,longint e,longint f,longint g,longint h,longint i,longint j,longint k,longint l,longint m,longint n,longint o,longint p); //16 parameters

module ysyx_22050612_DCACHE (
input clk,
input rst,

input valid,
output reg ready,

input [63:0]addr,
output [63:0]dout,

input wren,
input [63:0]din,
input [63:0]mask
);


//reg [53:0]tag0[63:0];
//reg [53:0]tag1[63:0];
//reg [53:0]tag2[63:0];
//reg [53:0]tag3[63:0];
//reg [63:0]v0;
//reg [63:0]v1;
//reg [63:0]v2;
//reg [63:0]v3;
reg [21:0]tag0[15:0];
reg [21:0]tag1[15:0];
reg [21:0]tag2[15:0];
reg [21:0]tag3[15:0];
reg [15:0]v0;
reg [15:0]v1;
reg [15:0]v2;
reg [15:0]v3;
//************************  pipeline  ******************************
always @(negedge clk) begin
	DCACHE_state_trace (addr, dout, {63'b0,valid}, {63'b0,ready}, din_sram[127:64], din_sram[63:0], {60'b0,index}, {58'b0,addr[9:4]},
	{62'b0,dcache_current_state}, {60'b0,addr[3:0]}, {60'b0,way_hit}, {60'b0,way_hit_prev}, {60'b0,cen3,cen2,cen1,cen0}, {63'b0,wen}, line_mem[127:64], line_mem[63:0]);
	//{60'b0,addr[3:0]}, {60'b0,addr[3:0]}, {60'b0,way_hit}, {60'b0,way_hit_prev}, {60'b0,cen3,cen2,cen1,cen0}, {63'b0,wen}, line_mem[127:64], line_mem[63:0]);
end
//*****************************************************************

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
	else if( !wen && rlast  ) begin
	    if(not_device) begin   //暂时用来维持设备和dcache的一致性
		case({!cen3,!cen2,!cen1,!cen0})
			4'b0001: begin v0[index] <= 1'b1; tag0[index] <= addr[31:10]; end 
			4'b0010: begin v1[index] <= 1'b1; tag1[index] <= addr[31:10]; end
			4'b0100: begin v2[index] <= 1'b1; tag2[index] <= addr[31:10]; end
			4'b1000: begin v3[index] <= 1'b1; tag3[index] <= addr[31:10]; end
			default: begin $display("dcache all misses!!!!!!!!!!!!!!!!!!!!!!!!\n\n");end
		endcase
	    end
	end

	if(addr!=0 && wren) begin
		if(tag0[addr[9:6]] == addr[31:10]) begin v0[addr[9:6]] <= 1'b0; end
		if(tag1[addr[9:6]] == addr[31:10]) begin v1[addr[9:6]] <= 1'b0; end
		if(tag2[addr[9:6]] == addr[31:10]) begin v2[addr[9:6]] <= 1'b0; end
		if(tag3[addr[9:6]] == addr[31:10]) begin v3[addr[9:6]] <= 1'b0; end
	end

end

wire [3:0]index;
assign index = addr[9:6];
wire [3:0]way_hit;
assign way_hit[0] = v0[index] && (tag0[index] == addr[31:10]);
assign way_hit[1] = v1[index] && (tag1[index] == addr[31:10]);
assign way_hit[2] = v2[index] && (tag2[index] == addr[31:10]);
assign way_hit[3] = v3[index] && (tag3[index] == addr[31:10]);

wire not_device;
assign not_device = (addr <= 64'h8fffffff);    //暂时用来调整一致性

wire [127:0]dout0, dout1, dout2, dout3;
wire cen0, cen1, cen2, cen3;
wire wen;
wire [127:0]bwen;
wire [5:0]addr_sram;
wire [127:0]din_sram;


reg [3:0]wr_sram_count;
reg [3:0]random_cnt;

always @(posedge clk) begin
	if(rst) begin
		wr_sram_count      <= 4'b0;
		random_cnt         <= 4'b1;
	end
	else if(dcache_current_state==idle) begin
		wr_sram_count      <= 4'b0;
		random_cnt[0]      <= random_cnt[3];
		random_cnt[3:1]    <= random_cnt[2:0];
	end
	else begin
		wr_sram_count      <= wr_sram_count+4'b1;
		random_cnt         <= random_cnt;
	end
end



assign        addr_sram =  dcache_current_state==2'b0 ? addr[9:4] : {addr[9:6],wr_sram_count[3:2]};
assign     bwen[31 :0 ] = (wr_sram_count[1:0]==2'b00) ? 32'b0 : 32'hffffffff; 
assign     bwen[63 :32] = (wr_sram_count[1:0]==2'b01) ? 32'b0 : 32'hffffffff; 
assign     bwen[95 :64] = (wr_sram_count[1:0]==2'b10) ? 32'b0 : 32'hffffffff; 
assign     bwen[127:96] = (wr_sram_count[1:0]==2'b11) ? 32'b0 : 32'hffffffff; 
assign din_sram[31 :0 ] = (wr_sram_count[1:0]==2'b00) ? rdata : 32'b0; 
assign din_sram[63 :32] = (wr_sram_count[1:0]==2'b01) ? rdata : 32'b0; 
assign din_sram[95 :64] = (wr_sram_count[1:0]==2'b10) ? rdata : 32'b0; 
assign din_sram[127:96] = (wr_sram_count[1:0]==2'b11) ? rdata : 32'b0; 
assign cen0 = ~(  (dcache_current_state==idle) ? (valid&&way_hit[0]) : (random_cnt[0]&&rvalid&&rready)      ) ;
assign cen1 = ~(  (dcache_current_state==idle) ? (valid&&way_hit[1]) : (random_cnt[1]&&rvalid&&rready)      ) ;
assign cen2 = ~(  (dcache_current_state==idle) ? (valid&&way_hit[2]) : (random_cnt[2]&&rvalid&&rready)      ) ;
assign cen3 = ~(  (dcache_current_state==idle) ? (valid&&way_hit[3]) : (random_cnt[3]&&rvalid&&rready)      ) ;
assign  wen = ~(   dcache_current_state==readmemory && rvalid && rready            ) ;
//assign addr_sram = index;
//assign cen0 = ~( (valid&&!ready && not_device) ? (way_hit[0] ? 1'b1 : (way_hit==4'b0&&random_cnt[0] ? 1'b1 : 1'b0)) : 1'b0) ;
//assign cen1 = ~( (valid&&!ready && not_device) ? (way_hit[1] ? 1'b1 : (way_hit==4'b0&&random_cnt[1] ? 1'b1 : 1'b0)) : 1'b0) ;
//assign cen2 = ~( (valid&&!ready && not_device) ? (way_hit[2] ? 1'b1 : (way_hit==4'b0&&random_cnt[2] ? 1'b1 : 1'b0)) : 1'b0) ;
//assign cen3 = ~( (valid&&!ready && not_device) ? (way_hit[3] ? 1'b1 : (way_hit==4'b0&&random_cnt[3] ? 1'b1 : 1'b0)) : 1'b0) ;
//assign  wen = ~( (valid&&!ready && not_device) && (wren || ((!wren)&&(way_hit == 4'b0))) )  ;
//assign  din_sram = wren ? (way_hit==4'b0 ? line_mem_wr:(addr[3] ? {din,64'b0}:{64'b0,din})) : line_mem;
//assign bwen = wren ? (way_hit==4'b0 ? 128'b0 : (addr[3] ? (~{mask,64'b0}):(~{64'b0,mask}))) : 128'b0;
S011HD1P_X32Y2D128_BW sram_d0(dout0, clk, cen0, wen, bwen, addr_sram, din_sram);
S011HD1P_X32Y2D128_BW sram_d1(dout1, clk, cen1, wen, bwen, addr_sram, din_sram);
S011HD1P_X32Y2D128_BW sram_d2(dout2, clk, cen2, wen, bwen, addr_sram, din_sram);
S011HD1P_X32Y2D128_BW sram_d3(dout3, clk, cen3, wen, bwen, addr_sram, din_sram);


reg [3:0]way_hit_prev;
reg [127:0]line_mem_prev;
always @(posedge clk) begin
	if(rst) begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end
	/*
	else if(!ready_IF_ID) begin
		way_hit_prev    <= way_hit_prev ;
		random_cnt      <= random_cnt   ;
		line_mem_prev   <= line_mem_prev;
		ready           <= ready        ;
	end
	*/
        else if(valid && !wren  && dcache_current_state==idle &&!not_device)begin
	     	way_hit_prev    <= 4'b0;
		line_mem_prev   <= line_mem;
		ready           <= 1'b1;
	end
	else if(valid && wren && dcache_current_state==idle)begin
	     	way_hit_prev    <= 4'b0;
		line_mem_prev   <= line_mem;
		ready           <= 1'b1;
	end
	else if(valid && way_hit!=4'b0 && !wren && dcache_current_state==idle)begin
	     	way_hit_prev    <= way_hit;
		line_mem_prev   <= line_mem;
		ready           <= 1'b1;
	end
	else begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <= line_mem;
		ready           <= 1'b0;
	end



       /*
	else if(ready && valid) begin
	     	way_hit_prev    <= way_hit;
		line_mem_prev   <= line_mem;
		ready           <= 1'b0;
	end
	else if(!ready && valid) begin
	     	way_hit_prev    <= way_hit;
		line_mem_prev   <= line_mem;
		ready           <= 1'b1;
	end
	*/
end

reg [127:0]line_read;
always @(*) begin
	case(way_hit_prev)
		4'b0001: line_read = dout0;
		4'b0010: line_read = dout1;
		4'b0100: line_read = dout2;
		4'b1000: line_read = dout3;
		//default: line_read = 128'b0;
		default: line_read = line_mem_prev;
	endcase
end



assign dout =  addr[3] ?  line_read[127:64] : line_read[63:0] ;


//*******************   AXI-FULL    ***********************
wire [31:0]araddr;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]arburst;
reg arvalid;
wire arready;

wire [31:0]rdata;
wire [1:0]rrsep;
wire rlast;
wire rvalid;
wire rready;


ysyx_22050612_SRAM  sram_mem (clk, rst, araddr, arlen, arsize, arburst, arvalid, arready,    rdata, rrsep, rlast, rvalid, rready);

assign araddr  = {addr[31:6],6'b0};
//assign arlen   = 8'b11;                                    //The real length is arlen + 1
assign arlen   = 8'b1111;                                    //The real length is arlen + 1
assign arsize  = 3'b101;
assign arburst = 2'b01;

assign rready  = 1'b1;


//****************     dcahce state machine   ***************
reg [1:0]dcache_current_state, dcache_next_state;

localparam idle       = 2'b00;        //
localparam readmemory = 2'b01;        //


always @(posedge clk) begin
	if(rst == 1'b1) dcache_current_state <= idle;
	else            dcache_current_state <= dcache_next_state;
end

always @(*) begin
	case(dcache_current_state)
		idle: begin
			arvalid = valid && (way_hit==4'b0) && !wren && not_device;
			dcache_next_state = (valid && (way_hit==4'b0) && !wren && arready&& not_device) ? readmemory : idle;
		end
		readmemory: begin
			arvalid = 1'b0;
			dcache_next_state = rlast ? idle : readmemory;
		end
		default: begin
			arvalid = 1'b0;
			dcache_next_state = idle;
		end
	endcase
end
















wire [127:0]line_mem;
wire [127:0]line_mem_wr;
always @(negedge clk) begin
		pmem_read_dcache_low64 (addr, line_mem[63:0]);
		pmem_read_dcache_high64(addr, line_mem[127:64]);
	if(valid && wren && dcache_current_state==idle)begin
		pmem_write_dcache_low64 (addr, wren, din, mask, line_mem_wr[63:0],line_mem_wr[127:64]);
		//pmem_write_dcache_high64(addr, {7'b0,wren}, din, mask, line_mem_wr[127:64]);
	end
end


always @(negedge clk) begin
	if(valid&&!ready&&!wren) begin
		if(way_hit != 4'b0) begin
			dcache_collect(1);
		end
		else begin
			dcache_collect(2);
		end
	end
	else if(valid&&!ready&&wren) begin
		if(way_hit != 4'b0) begin
			dcache_collect(3);
		end
		else begin
			dcache_collect(4);
		end
	end
end

  
endmodule
