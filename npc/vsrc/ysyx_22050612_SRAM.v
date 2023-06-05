import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_SRAM(
   input clk,
   input rst,
   
   input arvalid,
   input [31:0]araddr,
   output arready,

   output reg rvalid,
   output [63:0]rdata,
   output reg [1:0]rresp,
   input rready,

   input awvalid,
   input [31:0]awaddr,
   output awready,

   input wvalid,
   input [63:0]wdata,
   input [ 7:0]wstrb,
   output wready,

   output [1:0]bresp,
   output bvalid,
   input bready


);



//************** write *******************
assign awready = 1'b1;
assign wready  = 1'b1;
/*
//reg delay_write;

always @(posedge clk) begin
	//$display("sram:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rst == 1'b1)begin
		bvalid <= 1'b0;
		bresp <= 2'b0;
	//	delay_write <= 1'b0;
	end
//	else if(awready == 1'b1 && awvalid == 1'b1 && wready == 1'b1 && wvalid == 1'b1)begin
//		delay_write <= 1'b1;
//	end
//	else if(delay_write == 1'b1)begin
	else if(awready == 1'b1 && awvalid == 1'b1 && wready == 1'b1 && wvalid == 1'b1)begin
	//	delay_write <= 1'b0;
		pmem_write({{32{1'b0}},awaddr}, wdata, wstrb);
		//$display("write!!  %x  %x\n",awaddr,wdata);
		//$display("2\n");
		bresp <= 2'b00;
		bvalid <= 1'b1;
	end
	else if(bvalid == 1'b1 && bready == 1'b1)begin
		bvalid <= 1'b0;
		//$display("write  respon!! \n");
		//bresp <= 1'b1;
		//$display("4\n");
	end
end
*/
reg [1:0]write_current_state, write_next_state;

localparam write_idle  = 2'b00;
localparam write_aw_hs = 2'b01;        //write address handshake
localparam write_w_rsp = 2'b11;        //write respone

always @(posedge clk) begin
	if(rst == 1'b1) write_current_state <= write_idle;
	else            write_current_state <= write_next_state;
end

always @(*) begin
	case(write_current_state)
		write_idle: begin
			bvalid = 1'b0;
			bresp  = 2'b0;
			write_next_state = (awvalid && wvalid)? write_aw_hs:write_idle;
		end
		write_aw_hs: begin
			pmem_write({{32{1'b0}},awaddr}, wdata, wstrb);
			bvalid = 1'b1;
			bresp  = 2'b0;
			write_next_state = write_w_rsp;
		end
		write_w_rsp: begin
			bvalid = 1'b0;
			bresp  = 2'b0;
			write_next_state = write_idle;
		end
		default: begin
			bvalid = 1'b0;
			bresp  = 2'b0;
			write_next_state = write_idle;
		end
	endcase
end


//************** read  *******************
assign arready = 1'b1;
/*
//reg delay_read;

always @(posedge clk) begin
	//$display("sram:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rst == 1'b1)begin
		rvalid <= 1'b0;
		rresp <= 2'b0;
	//	delay_read <=1'b0;
	end
//	else if(arready == 1'b1 && arvalid == 1'b1)begin
//		delay_read <=1'b1;
//	end
//	else if(delay_read ==1'b1)begin
	else if(arready == 1'b1 && arvalid == 1'b1)begin
	//	delay_read <=1'b0;
		rvalid <= 1'b1;
  		pmem_read({{32{1'b0}},araddr}, rdata);	
  		//pmem_read_pc({{32{1'b0}},araddr}, rdata);	
		//$display("get inst!!  %x  %x\n",araddr,rdata);
		//$display("2\n");
		rresp <= 2'b0;
	end
	else if(rvalid == 1'b1 && rready == 1'b1)begin
		rvalid <= 1'b0;
		rresp <= 2'b0;
		//$display("4\n");
	end
end
*/


reg [1:0]read_current_state, read_next_state;

localparam read_idle  = 2'b00;
localparam read_ar_hs = 2'b01;        //read address handshake
localparam read_r_rsp = 2'b11;        //read respone

always @(posedge clk) begin
	if(rst == 1'b1) read_current_state <= read_idle;
	else            read_current_state <= read_next_state;
end

always @(*) begin
	case(read_current_state)
		read_idle: begin
			rvalid = 1'b0;
			rresp  = 2'b0;
			read_next_state = (arvalid == 1'b1)? read_ar_hs:read_idle;
		end
		read_ar_hs: begin
  			pmem_read({{32{1'b0}},araddr}, rdata);	
			rvalid = 1'b1;
			rresp  = 2'b0;
			read_next_state = read_r_rsp;
		end
		read_r_rsp: begin
			rvalid = 1'b0;
			rresp  = 2'b0;
			read_next_state = read_idle;
		end
		default: begin
			rvalid = 1'b0;
			rresp  = 2'b0;
			read_next_state = read_idle;
		end
	endcase
end



endmodule

