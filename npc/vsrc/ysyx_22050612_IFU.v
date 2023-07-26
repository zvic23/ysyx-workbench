
import "DPI-C" function void read_inst(int npc_inst);
import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);

module ysyx_22050612_IFU (
   input clk,
   input rst, 
   input [63:0]dnpc,
   output reg valid_IF_ID,
   input ready_IF_ID,
   output [63:0]pc,
   input pc_update,
   //output reg [31:0]inst, 
   output [31:0]inst 

/*
   output reg arvalid,
   output reg [31:0]araddr,
   input arready,

   input reg rvalid,
   input [63:0]rdata,
   input [1:0]rresp,
   output rready,

   input exu_block
*/

);

/*
//****************  AXI  ************************
reg [63:0]inst_64;

assign rready = 1'b1;

always @(posedge clk) begin
	//$display("ifu:   arvalid = %d  arready = %d  \n",arvalid, arready);   

	if(rvalid == 1'b1 && rready == 1'b1)begin
		inst <= araddr[2]?rdata[63:32] : rdata[31:0];
		//inst_64 = rdata;
		//$display("inst:%x",inst);
		//$display("3\n");
	end
	else if(arvalid == 1'b1 && arready == 1'b1 ) begin
		inst <= 32'b0;
	end
end



always @(edge clk) begin
	if(rst == 1'b1 && clk == 1'b0)begin
		arvalid <= 1'b1;
		araddr <= 32'h80000000;
	end
	//else if(rvalid == 1'b0 && exu_block == 1'b0 && clk == 1'b0 )begin
	else if(pc_update == 1'b1 && clk == 1'b0 )begin
		arvalid <= 1'b1;
		araddr <= dnpc[31:0];
	//$display("block = %d ",exu_block);
	//$display("1\n");
	//$display("%d   \n",arvalid);
	end
	else if(arvalid == 1'b1 && arready == 1'b1 && clk == 1'b1) begin
		arvalid <= 1'b0;
	end
//	else if(rvalid == 1'b1 && clk == 1'b0) begin
//		arvalid <= 1'b0;
//	end
end
//**************************************
*/


reg  [63:0]pc_next;
reg  pc_en;
//assign pc_next = pc_update ? dnpc : pc+64'd4;
always @(*) begin
	if((branching!=4'b0) && pc_update)begin
		pc_next = dnpc;
		pc_en   = 1'b1;
	end
	else if(branching!=4'b0) begin
		pc_next = pc;
		pc_en   = 1'b0;
	end
	else if(ready_IF_ID == 1'b0)begin
		pc_next = pc;
		pc_en   = 1'b0;
	end
	else begin
		pc_next = pc + 64'd4;
		pc_en   = 1'b1;
	end
end

ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, pc_next, pc, pc_en);
//ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, pc+64'd4, pc, 1'b1);

//ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, dnpc, pc, pc_update);
//ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, dnpc, pc, 1'b1);



//************************  pipeline  ******************************
reg [1:0]if_current_state, if_next_state;

localparam if_idle  = 2'b00;
localparam if_branch_id = 2'b01;        //the first cycle of getting the branch inst
localparam if_waiting_branch = 2'b11;        //waiting for processing

always @(posedge clk) begin
	if(rst == 1'b1) if_current_state <= if_idle;
	else            if_current_state <= if_next_state;
end

always @(*) begin
	case(if_current_state)
		if_idle: begin
			valid_IF_ID = 1'b1;
			if(inst[6:0] == 7'b1101111)begin
				if_next_state= ready_IF_ID ? if_branch_id :if_idle;    //jal
			end
			else begin
                 	  case ({inst[14:12],inst[6:0]})
                     10'b000_1100111:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //jalr
                     10'b000_1100011:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //beq
                     10'b001_1100011:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //bne
                     10'b100_1100011:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //blt
                     10'b101_1100011:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //bge
                     10'b110_1100011:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //bltu
                     10'b111_1100011:  if_next_state= ready_IF_ID ? if_branch_id : if_idle;    //bgeu
                     default:          if_next_state= if_idle ;
                 	  endcase
		        end
                /* 
                 	  case (inst[6:0])
                         7'b1101111:   if_next_state= if_branch_id ;    //jal
                     default:          if_next_state= if_idle ;
                 	  endcase
			  */
		end
		if_branch_id: begin
			valid_IF_ID = 1'b0;
			if_next_state = pc_update ? if_idle : if_branch_id ;
		end
		/*
		if_waiting_branch: begin
			bvalid = 1'b0;
			bresp  = 2'b0;
			if_next_state = if_idle;
		end
		*/
		default: begin
			valid_IF_ID = 1'b1;
			if_next_state = if_idle;
		end
	endcase
end


//assign  valid_IF_ID = branching ? 1'b1 : 1'b0;

reg [3:0]branching;

  always @(inst) begin
	  case ({inst[14:12],inst[6:0]})
    10'b000_1100111:  branching[0] = 1'b1 ;    //jalr
    10'b000_1100011:  branching[0] = 1'b1 ;    //beq
    10'b001_1100011:  branching[0] = 1'b1 ;    //bne
    10'b100_1100011:  branching[0] = 1'b1 ;    //blt
    10'b101_1100011:  branching[0] = 1'b1 ;    //bge
    10'b110_1100011:  branching[0] = 1'b1 ;    //bltu
    10'b111_1100011:  branching[0] = 1'b1 ;    //bgeu
    default:          branching[0] = 1'b0 ;
	  endcase


	  case (inst[6:0])
    7'b1101111: branching[1] = 1'b1 ;        //jal
    default:    branching[1] = 1'b0 ;
	  endcase

  end
/*
reg branch_processing;
always @(posedge clk) begin
	if(rst)begin
		branch_processing <= 1'b0;
	end
	else if (branching) begin
		branch_processing <= 1'b1;
	end
	else begin

	end
end
*/



always @(negedge clk) begin
	//$display("IF   pc:%x   inst:%x   valid:%d",pc,inst,valid_IF_ID);
end


//*****************************************************************



//Reg #(1,1'b0) pc0  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc1  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//
//Reg #(1,1'b0) pc2  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc3  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc4  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc5  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc6  (clk, rst, ~pc[ ], pc[ ], 1'b1);



wire [63:0]inst_mix;
always @(*) begin
  pmem_read_pc(pc, inst_mix);
end
assign inst = pc[2]?inst_mix[63:32] : inst_mix[31:0];

//assign inst = pc[2]?inst_64[63:32] : inst_64[31:0];




always @(*) begin
  read_inst(inst);
end


endmodule
