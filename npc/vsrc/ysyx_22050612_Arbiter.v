
module ysyx_22050612_Arbiter(
   input clk,
   input rst,

//read address channel 
   input  [31:0]araddr_ifu,
   input  [31:0]araddr_mem,
   output [31:0]araddr,
   input  [ 7:0]arlen_ifu,
   input  [ 7:0]arlen_mem,
   output [ 7:0]arlen,
   input  [ 2:0]arsize_ifu,
   input  [ 2:0]arsize_mem,
   output [ 2:0]arsize,
   input  [ 1:0]arburst_ifu,
   input  [ 1:0]arburst_mem,
   output [ 1:0]arburst,
   input        arvalid_ifu,
   input        arvalid_mem,
   output reg   arvalid,
   input        arready,
   output       arready_ifu,
   output       arready_mem,

//read data channel
   input  [63:0]rdata,
   output [63:0]rdata_ifu,
   output [63:0]rdata_mem,
   input  [ 1:0]rresp,
   output [ 1:0]rresp_ifu,
   output [ 1:0]rresp_mem,
   input        rlast,
   output       rlast_ifu,
   output       rlast_mem,
   input        rvalid,
   output       rvalid_ifu,
   output       rvalid_mem,
   input        rready_ifu,
   input        rready_mem,
   output       rready,


//write address channel
   input  [31:0]awaddr_ifu,
   input  [31:0]awaddr_mem,
   output [31:0]awaddr,
   input  [ 7:0]awlen_ifu,
   input  [ 7:0]awlen_mem,
   output [ 7:0]awlen,
   input  [ 2:0]awsize_ifu,
   input  [ 2:0]awsize_mem,
   output [ 2:0]awsize,
   input  [ 1:0]awburst_ifu,
   input  [ 1:0]awburst_mem,
   output [ 1:0]awburst,
   input        awvalid_ifu,
   input        awvalid_mem,
   output       awvalid,
   input        awready,
   output       awready_ifu,
   output       awready_mem,



//write data channel
   input  [63:0]wdata_ifu,
   input  [63:0]wdata_mem,
   output [63:0]wdata,
   input  [ 7:0]wstrb_ifu,
   input  [ 7:0]wstrb_mem,
   output [ 7:0]wstrb,
   input        wlast_ifu,
   input        wlast_mem,
   output       wlast,
   input        wvalid_ifu,
   input        wvalid_mem,
   output       wvalid,
   input        wready,
   output       wready_ifu,
   output       wready_mem,



//write respond channel
   input  [ 1:0]bresp,
   output [ 1:0]bresp_ifu,
   output [ 1:0]bresp_mem,
   input        bvalid,
   output       bvalid_ifu,
   output       bvalid_mem,
   input        bready_ifu,
   input        bready_mem,
   output       bready


);




//*********************    read    ********************
reg [1:0]arbi_r_state, arbi_r_next_state;
wire ifu_r_wen, mem_r_wen;

localparam r_idle        = 2'b00;
localparam r_ifu_trans   = 2'b01;
localparam r_mem_trans   = 2'b10;

always @(posedge clk) begin
	if(rst)  arbi_r_state <= r_idle;
	else     arbi_r_state <= arbi_r_next_state;

	$display("arbit:   arvalid_ifu:%x",arvalid_ifu);
end

always @(*) begin
	case(arbi_r_state)
		r_idle: begin
			arvalid = arvalid_ifu || arvalid_mem;
			arbi_r_next_state = arvalid_ifu ? r_ifu_trans : (arvalid_mem ? r_mem_trans : r_idle);
		end
		r_ifu_trans: begin
			arvalid = 1'b0;
			arbi_r_next_state = rlast_ifu ? r_idle : r_ifu_trans;
		end
		r_mem_trans: begin
			arvalid = 1'b0;
			arbi_r_next_state = rlast_mem ? r_idle : r_mem_trans;
		end
		default : begin
			arvalid = 1'b0;
			arbi_r_next_state = r_idle;
		end
	endcase

end

assign araddr   = (arbi_r_state==r_ifu_trans) ? araddr_ifu  : ((arbi_r_state==r_ifu_trans) ? araddr_mem  : 32'b0);
assign arlen    = (arbi_r_state==r_ifu_trans) ? arlen_ifu   : ((arbi_r_state==r_ifu_trans) ? arlen_mem   :  8'b0);
assign arsize   = (arbi_r_state==r_ifu_trans) ? arsize_ifu  : ((arbi_r_state==r_ifu_trans) ? arsize_mem  :  3'b0);
assign arburst  = (arbi_r_state==r_ifu_trans) ? arburst_ifu : ((arbi_r_state==r_ifu_trans) ? arburst_mem :  2'b0);
assign arready_ifu  = (arbi_r_state==r_ifu_trans) ? arready :  1'b0;
assign arready_mem  = (arbi_r_state==r_mem_trans) ? arready :  1'b0;

assign rdata_ifu  = (arbi_r_state==r_ifu_trans) ? rdata  : 64'b0;
assign rresp_ifu  = (arbi_r_state==r_ifu_trans) ? rresp  :  2'b0;
assign rlast_ifu  = (arbi_r_state==r_ifu_trans) ? rlast  :  1'b0;
assign rvalid_ifu = (arbi_r_state==r_ifu_trans) ? rvalid :  1'b0;
assign rdata_mem  = (arbi_r_state==r_mem_trans) ? rdata  : 64'b0;
assign rresp_mem  = (arbi_r_state==r_mem_trans) ? rresp  :  2'b0;
assign rlast_mem  = (arbi_r_state==r_mem_trans) ? rlast  :  1'b0;
assign rvalid_mem = (arbi_r_state==r_mem_trans) ? rvalid :  1'b0;
assign rready  = (arbi_r_state==r_ifu_trans) ? rready_ifu : ((arbi_r_state==r_ifu_trans) ? rready_mem :  1'b0);


/*
reg reading_ifu;
reg reading_mem;
wire reading;
assign reading = reading_ifu || reading_mem;

always @(*) begin
	if(reading == 1'b0 && arvalid_ifu == 1'b1) begin
		arvalid   = arvalid_ifu;
		araddr    = araddr_ifu;
		arready_ifu = arready;
		arready_mem = 1'b0; 
		rvalid_ifu  = rvalid;
		rvalid_mem  = 1'b0; 
		rdata_ifu   = rdata;
		rdata_mem   = 64'b0; 
		rresp_ifu   = rresp;
		rresp_mem   = 2'b0; 
		rready    = rready_ifu;
	end
	else if(reading == 1'b0 && arvalid_mem == 1'b1) begin
		arvalid   = arvalid_mem;
		araddr    = araddr_mem;
		arready_ifu = 1'b0; 
		arready_mem = arready;
		rvalid_ifu  = 1'b0; 
		rvalid_mem  = rvalid;
		rdata_ifu   = 64'b0; 
		rdata_mem   = rdata;
		rresp_ifu   = 2'b0; 
		rresp_mem   = rresp;
		rready    = rready_mem;
	end
	else if(reading_ifu == 1'b1) begin
		arvalid   = arvalid_ifu;
		araddr    = araddr_ifu;
		arready_ifu = arready;
		arready_mem = 1'b0; 
		rvalid_ifu  = rvalid;
		rvalid_mem  = 1'b0; 
		rdata_ifu   = rdata;
		rdata_mem   = 64'b0; 
		rresp_ifu   = rresp;
		rresp_mem   = 2'b0; 
		rready    = rready_ifu;
	end
	else if(reading_mem == 1'b1) begin
		arvalid   = arvalid_mem;
		araddr    = araddr_mem;
		arready_ifu = 1'b0; 
		arready_mem = arready;
		rvalid_ifu  = 1'b0; 
		rvalid_mem  = rvalid;
		rdata_ifu   = 64'b0; 
		rdata_mem   = rdata;
		rresp_ifu   = 2'b0; 
		rresp_mem   = rresp;
		rready    = rready_mem;
	end
	else  begin
		arvalid   = 1'b0; 
		araddr    = 32'b0; 
		arready_ifu = 1'b0; 
		arready_mem = 1'b0; 
		rvalid_ifu  = 1'b0; 
		rvalid_mem  = 1'b0; 
		rdata_ifu   = 64'b0; 
		rdata_mem   = 64'b0; 
		rresp_ifu   = 2'b0; 
		rresp_mem   = 2'b0; 
		rready    = 1'b0; 
	end
end

always @(posedge clk) begin
	if(rst == 1'b1)begin
		reading_ifu <=1'b0;
		reading_mem <=1'b0;
	end
	else if(reading == 1'b0 && arvalid_ifu == 1'b1) begin
		reading_ifu <=1'b1;
	end
	else if(reading == 1'b0 && arvalid_mem == 1'b1) begin
		reading_mem <=1'b1;
	end
	else if(reading_ifu == 1'b1 && rvalid_ifu == 1'b1 && rready_ifu == 1'b1) begin
		reading_ifu <=1'b0;
	end
	else if(reading_mem == 1'b1 && rvalid_mem == 1'b1 && rready_mem == 1'b1) begin
		reading_mem <=1'b0;
	end
end
*/



//*********************    write    ********************
assign awaddr      = awaddr_mem   ;
assign awlen       = awlen_mem    ;
assign awsize      = awsize_mem   ;
assign awburst     = awburst_mem  ;
assign awvalid     = awvalid_mem  ;
assign awready_ifu = 1'b0       ;
assign awready_mem = awready    ;

assign wdata       = wdata_mem    ;
assign wstrb       = wstrb_mem    ;
assign wlast       = wlast_mem    ;
assign wvalid      = wvalid_mem   ;
assign wready_ifu  = 1'b0       ;
assign wready_mem  = wready     ;

assign bresp_ifu   = 2'b0       ;
assign bresp_mem   = bresp      ;
assign bvalid_ifu  = 1'b0       ;
assign bvalid_mem  = bvalid     ;
assign bready      = bready_mem   ;

endmodule
