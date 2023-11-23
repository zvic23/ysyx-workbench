//import "DPI-C" function void npc_loadstore(int getinst, longint raddr, longint waddr);
//import "DPI-C" function void pmem_read(
//  input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(
//  input longint waddr, input longint wdata, input byte wmask);
import "DPI-C" function void MEM_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);



module ysyx_22050612_MEM(
input clk,
input rst,
input       valid_EX_MEM,
output      ready_EX_MEM,
input [63:0]pc_EX_MEM,
input [31:0]inst_EX_MEM,
input [23:0]opcode_in,
input [63:0]ALUoutput_in,
input [63:0]src2_in,



output       valid_MEM_WB  ,
input        ready_MEM_WB  ,
output [63:0]pc_MEM_WB  ,
output [31:0]inst_MEM_WB,

output       reg_wr_wen   ,
output [ 4:0]reg_wr_ID    ,
output [63:0]reg_wr_value ,


output reg MEM_reg_valid,
output reg [31:0]MEM_reg_inst,
output reg [63:0]MEM_reg_aluoutput,

input WB_reg_valid,
input [31:0]WB_reg_inst,
input [63:0]WB_reg_wdata,



output [63:0]raddr_out,
output [63:0]waddr_out,



//AXI-full
output [31:0]araddr_dcache_axi,
output [7:0]arlen_dcache_axi,
output [2:0]arsize_dcache_axi,
output [1:0]arburst_dcache_axi,
output     arvalid_dcache_axi,
input      arready_dcache_axi,

input [63:0]rdata_dcache_axi,
input [1:0]rrsep_dcache_axi,
input rlast_dcache_axi,
input rvalid_dcache_axi,
output rready_dcache_axi,

output [31:0]awaddr_dcache_axi,
output [7:0]awlen_dcache_axi,
output [2:0]awsize_dcache_axi,
output [1:0]awburst_dcache_axi,
output      awvalid_dcache_axi,
input       awready_dcache_axi,
 
output [63:0]wdata_dcache_axi,
output [ 7:0]wstrb_dcache_axi,
output wlast_dcache_axi,
output wvalid_dcache_axi,
input wready_dcache_axi,

input [1:0]bresp_dcache_axi,
input bvalid_dcache_axi,
output bready_dcache_axi

);

assign raddr_out = raddr;
assign waddr_out = waddr;


//*************************  pipeline ********************************
//reg       MEM_reg_valid         ;
reg [63:0]MEM_reg_pc            ;
//reg [31:0]MEM_reg_inst          ;
reg [23:0]MEM_reg_opcode        ;
//reg [63:0]MEM_reg_aluoutput     ;
reg [63:0]MEM_reg_src2          ;

always @(posedge clk) begin
	if(rst) begin
		MEM_reg_valid          <=  1'b0;
		MEM_reg_pc             <= 64'b0;
		MEM_reg_inst           <= 32'b0;
		MEM_reg_opcode         <= 24'b0;
		MEM_reg_aluoutput      <= 64'b0;
		MEM_reg_src2           <= 64'b0;
	end
	else if(!ready_EX_MEM)begin
		MEM_reg_valid          <= MEM_reg_valid      ; 
		MEM_reg_pc             <= MEM_reg_pc         ; 
		MEM_reg_inst           <= MEM_reg_inst       ; 
		MEM_reg_opcode         <= MEM_reg_opcode     ; 
		MEM_reg_aluoutput      <= MEM_reg_aluoutput  ; 
		MEM_reg_src2           <= MEM_reg_src2       ; 
	end
	else begin
		MEM_reg_valid          <= valid_EX_MEM;
		MEM_reg_pc             <= pc_EX_MEM;
		MEM_reg_inst           <= inst_EX_MEM;
		MEM_reg_opcode         <= opcode_in;
		MEM_reg_aluoutput      <= ALUoutput_in;
		MEM_reg_src2           <= src2_in       ;
	end
end

wire [31:0]inst;
assign inst = MEM_reg_valid ? MEM_reg_inst : 32'b0;

wire [23:0]opcode;
assign opcode = MEM_reg_valid ? MEM_reg_opcode : 24'b0;

wire [63:0]aluoutput;
assign aluoutput = MEM_reg_valid ? MEM_reg_aluoutput : 64'b0;

reg [63:0]src2;

assign reg_wr_wen   = (MEM_reg_valid&&!MEM_block) ? wen       : 1'b0;
assign reg_wr_ID    = (MEM_reg_valid&&!MEM_block) ? MEM_reg_inst[11:7] : 5'b0;
assign reg_wr_value = (MEM_reg_valid&&!MEM_block) ? wdata_reg : 64'b0;


//output
assign valid_MEM_WB = (MEM_block==1'b0) ? MEM_reg_valid :  1'b0;
assign pc_MEM_WB    = (MEM_block==1'b0) ? MEM_reg_pc    : 64'b0;
assign inst_MEM_WB  = (MEM_block==1'b0) ? MEM_reg_inst  : 32'b0;

wire MEM_block;
assign MEM_block = MEM_reg_valid && ((MEM_reg_inst[6:0]==7'b0000011)||(MEM_reg_inst[6:0]==7'b0100011)) && !dcache_ready;
assign ready_EX_MEM = MEM_block ? 1'b0 : ready_MEM_WB;


//**************  DCACHE  ******************************
wire dcache_valid;
wire dcache_ready;
assign dcache_valid = MEM_reg_valid && ((MEM_reg_inst[6:0]==7'b0000011)||(MEM_reg_inst[6:0]==7'b0100011));
wire [63:0]dcache_addr;
assign dcache_addr = dcache_wren ? waddr : raddr;
wire [63:0]dcache_dout;
assign rdata = dcache_dout;
//wire [63:0]dcache_waddr;
//assign dcache_waddr = waddr;
wire dcache_wren;
assign dcache_wren = waddr > 0;
wire [63:0]dcache_din;
assign dcache_din = wdata;
wire [63:0]dcache_wmask;
assign dcache_wmask = wmask_dcache;

ysyx_22050612_DCACHE dcache ((clk&& ((MEM_reg_inst[6:0]==7'b0000011)||(MEM_reg_inst[6:0]==7'b0100011))), rst, dcache_valid, dcache_ready, dcache_addr, dcache_dout, dcache_wren, dcache_din, dcache_wmask,
araddr_dcache_axi, arlen_dcache_axi, arsize_dcache_axi, arburst_dcache_axi, arvalid_dcache_axi, arready_dcache_axi, rdata_dcache_axi, rrsep_dcache_axi, rlast_dcache_axi, rvalid_dcache_axi, rready_dcache_axi, awaddr_dcache_axi, awlen_dcache_axi, awsize_dcache_axi, awburst_dcache_axi, awvalid_dcache_axi, awready_dcache_axi,    wdata_dcache_axi, wstrb_dcache_axi, wlast_dcache_axi, wvalid_dcache_axi, wready_dcache_axi,   bresp_dcache_axi, bvalid_dcache_axi, bready_dcache_axi);




//**************    load interlock    ************************

always@(*)begin
	if(MEM_reg_valid)begin
		if(WB_reg_valid&&(MEM_inst_hit!=4'b0)&&(WB_inst_hit!=4'b0)&&rs2_MEM_WB_match)begin
			src2 =  WB_reg_wdata;
		end
		else begin
			src2 = MEM_reg_src2;
		end
	end
	else begin
		src2 = 64'b0;
	end
end

wire rs2_MEM_WB_match;
assign rs2_MEM_WB_match  =  (WB_reg_inst[11:7] == MEM_reg_inst[24:20])&&(MEM_reg_inst[24:20]!=5'b0);

wire [3:0]MEM_inst_hit;
wire [3:0]WB_inst_hit;
always@(*) begin
//   EX/MEM
	case ({MEM_reg_inst[14:12],MEM_reg_inst[6:0]})
    		10'b000_0100011:  MEM_inst_hit[0]= 1'b1  ;    //sb   
    		10'b001_0100011:  MEM_inst_hit[0]= 1'b1  ;    //sh
    		10'b010_0100011:  MEM_inst_hit[0]= 1'b1  ;    //sw
    		10'b011_0100011:  MEM_inst_hit[0]= 1'b1  ;    //sd
		default:          MEM_inst_hit[0]= 1'b0  ;                          
	endcase


//  MEM/WB
	case ({WB_reg_inst[14:12],WB_reg_inst[6:0]})
//    10'b000_1100111:  WB_inst_hit[0]= 1'b1  ;    //jalr
                10'b000_0000011:  WB_inst_hit[0]= 1'b1  ;     //lb
                10'b001_0000011:  WB_inst_hit[0]= 1'b1  ;     //lh
                10'b010_0000011:  WB_inst_hit[0]= 1'b1  ;     //lw
                10'b100_0000011:  WB_inst_hit[0]= 1'b1  ;     //lbu
                10'b101_0000011:  WB_inst_hit[0]= 1'b1  ;     //lhu
		10'b000_0010011:  WB_inst_hit[0]= 1'b1  ;    //addi
		10'b010_0010011:  WB_inst_hit[0]= 1'b1  ;    //slti
		10'b011_0010011:  WB_inst_hit[0]= 1'b1  ;    //sltiu
		10'b100_0010011:  WB_inst_hit[0]= 1'b1  ;    //xori
		10'b110_0010011:  WB_inst_hit[0]= 1'b1  ;    //ori
		10'b111_0010011:  WB_inst_hit[0]= 1'b1  ;    //andi
		10'b110_0000011:  WB_inst_hit[0]= 1'b1  ;     //lwu
                10'b011_0000011:  WB_inst_hit[0]= 1'b1  ;     //ld
		10'b000_0011011:  WB_inst_hit[0]= 1'b1  ;    //addiw
		10'b001_1110011:  WB_inst_hit[0]= 1'b1  ;    //csrrw
		10'b010_1110011:  WB_inst_hit[0]= 1'b1  ;    //csrrs
		default:          WB_inst_hit[0]= 1'b0  ;                          
	endcase
	case (WB_reg_inst[6:0])
		7'b0110111:  WB_inst_hit[1]= 1'b1  ;    //lui
		7'b0010111:  WB_inst_hit[1]= 1'b1  ;    //auipc
//		    7'b1101111: WB_inst_hit[1]= 1'b1  ;       //jal             //unlike the book, jal should add in, or "jal xx ret" will get wrong if the address be corrected at jal in IFU
		default:     WB_inst_hit[1]= 1'b0  ;                               
	endcase
	case ({WB_reg_inst[31:25],WB_reg_inst[14:12],WB_reg_inst[6:0]})
                17'b0000000_000_0110011: WB_inst_hit[2]=1'b1  ;    //add
                17'b0100000_000_0110011: WB_inst_hit[2]=1'b1  ;    //sub
                17'b0000000_001_0110011: WB_inst_hit[2]=1'b1  ;    //sll
                17'b0000000_010_0110011: WB_inst_hit[2]=1'b1  ;    //slt
                17'b0000000_011_0110011: WB_inst_hit[2]=1'b1  ;    //sltu
                17'b0000000_100_0110011: WB_inst_hit[2]=1'b1  ;    //xor
                17'b0000000_101_0110011: WB_inst_hit[2]=1'b1  ;    //srl
                17'b0000000_110_0110011: WB_inst_hit[2]=1'b1  ;    //or
                17'b0000000_111_0110011: WB_inst_hit[2]=1'b1  ;    //and
                17'b0000000_001_0011011: WB_inst_hit[2]=1'b1  ;    //slliw
                17'b0000000_101_0011011: WB_inst_hit[2]=1'b1  ;    //srliw
                17'b0100000_101_0011011: WB_inst_hit[2]=1'b1  ;    //sraiw
                17'b0000000_000_0111011: WB_inst_hit[2]=1'b1  ;    //addw
                17'b0100000_000_0111011: WB_inst_hit[2]=1'b1  ;    //subw
                17'b0000000_001_0111011: WB_inst_hit[2]=1'b1  ;    //sllw
                17'b0000000_101_0111011: WB_inst_hit[2]=1'b1  ;    //srlw
                17'b0100000_101_0111011: WB_inst_hit[2]=1'b1  ;    //sraw
                17'b0000001_000_0110011: WB_inst_hit[2]=1'b1  ;    //mul
                17'b0000001_100_0110011: WB_inst_hit[2]=1'b1  ;    //div
                17'b0000001_101_0110011: WB_inst_hit[2]=1'b1  ;    //divu
                17'b0000001_111_0110011: WB_inst_hit[2]=1'b1  ;    //remu
                17'b0000001_000_0111011: WB_inst_hit[2]=1'b1  ;    //mulw
                17'b0000001_100_0111011: WB_inst_hit[2]=1'b1  ;    //divw
                17'b0000001_101_0111011: WB_inst_hit[2]=1'b1  ;    //divuw
                17'b0000001_110_0111011: WB_inst_hit[2]=1'b1  ;    //remw
                17'b0000001_111_0111011: WB_inst_hit[2]=1'b1  ;    //remuw
		default:                 WB_inst_hit[2]=1'b0  ;                     
	endcase
	case ({WB_reg_inst[31:26],WB_reg_inst[14:12],WB_reg_inst[6:0]})
                 16'b000000_001_0010011: WB_inst_hit[3]=1'b1  ;       //slli
                 16'b000000_101_0010011: WB_inst_hit[3]=1'b1  ;       //srli
                 16'b010000_101_0010011: WB_inst_hit[3]=1'b1  ;       //srai
		default:                 WB_inst_hit[3]=1'b0  ;                     
	endcase
end













always @(negedge clk) begin
	MEM_state_trace(MEM_reg_pc, {32'b0,MEM_reg_inst}, {63'b0,MEM_reg_valid}, rdata,reg_wr_value,64'b0 );
	//$display("MEM  pc:%x   inst:%x   valid:%x   aluout:%x   op_b:%x  wen:%x  wdata:%x  opcode:%x",MEM_reg_pc,MEM_reg_inst,MEM_reg_valid,MEM_reg_aluoutput,MEM_reg_src2   ,wen,wdata_reg,opcode);
end
//********************************************************************




reg wen;
reg [63:0]wdata_reg;
always @(*) begin
//gpr control
	case (opcode)
    24'h4000 : wen=1'b1;
    24'h5000 : wen=1'b1;
    24'h6000 : wen=1'b1;
    24'h7000 : wen=1'b1;
    24'h8000 : wen=1'b1;
    24'h9000 : wen=1'b1;
    24'h10000: wen=1'b1;
    24'h12000: wen=1'b1;
    24'h13000: wen=1'b1;
    24'h14000: wen=1'b1;
    24'h15000: wen=1'b1;
    24'h16000: wen=1'b1;
    24'h17000: wen=1'b1;
    24'h18000: wen=1'b1;
    24'h19000: wen=1'b1;
    24'h1a000: wen=1'b1;
    24'h1b000: wen=1'b1;
    24'h1d000: wen=1'b1;
    24'h21000: wen=1'b1;
    24'h22000: wen=1'b1;
    24'h24000: wen=1'b1;
    24'h25000: wen=1'b1;
    24'h26000: wen=1'b1;
    24'h27000: wen=1'b1;
    24'h28000: wen=1'b1;
    24'h29000: wen=1'b1;
    24'h100  : wen=1'b1;
    24'h200  : wen=1'b1;
    24'h300  : wen=1'b1;
    24'h400  : wen=1'b1;
    24'h800  : wen=1'b1;
    24'hc00  : wen=1'b1;
    24'd4    : wen=1'b1;
    24'd11   : wen=1'b1;
    24'd12   : wen=1'b1;
    24'd13   : wen=1'b1;
    24'd14   : wen=1'b1;
    24'd15   : wen=1'b1;
    24'd19   : wen=1'b1;
    24'd20   : wen=1'b1;
    24'd21   : wen=1'b1;
    24'd22   : wen=1'b1;
    24'd23   : wen=1'b1;
    24'd24   : wen=1'b1;
    24'd41   : wen=1'b1;
    24'd42   : wen=1'b1;
    24'd47   : wen=1'b1;
    24'd49   : wen=1'b1;
    24'd50   : wen=1'b1;
    default:  wen=1'b0;
        endcase


	case (opcode)
    24'h4000 : wdata_reg=aluoutput;
    24'h5000 : wdata_reg=aluoutput;
    24'h6000 : wdata_reg=aluoutput;
    24'h7000 : wdata_reg=aluoutput;
    24'h8000 : wdata_reg=aluoutput;
    24'h9000 : wdata_reg=aluoutput;
    24'h10000: wdata_reg=aluoutput;
    24'h12000: wdata_reg=aluoutput;
    24'h13000: wdata_reg=aluoutput;
//    24'h14000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h15000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h16000: wdata_reg=(aluoutput[63]?({{32{1'b1}},aluoutput[63:32]}):({{32{1'b0}},aluoutput[63:32]}));
//    24'h17000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h18000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h19000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h1a000: wdata_reg=(aluoutput[63]?({{32{1'b1}},aluoutput[63:32]}):({{32{1'b0}},aluoutput[63:32]}));
//    24'h1b000: wdata_reg=(aluoutput[63]?({{32{1'b1}},aluoutput[63:32]}):({{32{1'b0}},aluoutput[63:32]}));
    24'h14000: wdata_reg=aluoutput;
    24'h15000: wdata_reg=aluoutput;
    24'h16000: wdata_reg=aluoutput;
    24'h17000: wdata_reg=aluoutput;
    24'h18000: wdata_reg=aluoutput;
    24'h19000: wdata_reg=aluoutput;
    24'h1a000: wdata_reg=aluoutput;
    24'h1b000: wdata_reg=aluoutput;

    24'h1d000: wdata_reg=aluoutput;
    24'h21000: wdata_reg=aluoutput;
    24'h22000: wdata_reg=aluoutput;
    24'h24000: wdata_reg=aluoutput;
//    24'h25000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h26000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h27000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h28000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
//    24'h29000: wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
    24'h25000: wdata_reg=aluoutput;
    24'h26000: wdata_reg=aluoutput;
    24'h27000: wdata_reg=aluoutput;
    24'h28000: wdata_reg=aluoutput;
    24'h29000: wdata_reg=aluoutput;

    //24'h100  : wdata_reg=imm_U;
    24'h100  : wdata_reg=aluoutput;
    24'h200  : wdata_reg=aluoutput;
    //24'h300  : wdata_reg=pc + 64'd4;
    24'h300  : wdata_reg=MEM_reg_pc + 64'd4;
    24'h400  : wdata_reg=aluoutput;
    24'h800  : wdata_reg=aluoutput;
    24'hc00  : wdata_reg=aluoutput;
    //24'd4    : wdata_reg=pc + 64'd4;
    24'd4    : wdata_reg=MEM_reg_pc + 64'd4;
    24'd11   : wdata_reg=rdata_fix;
    24'd12   : wdata_reg=rdata_fix;
    24'd13   : wdata_reg=rdata_fix;
    24'd14   : wdata_reg=rdata_fix;
    24'd15   : wdata_reg=rdata_fix;
    24'd19   : wdata_reg=aluoutput;
    24'd20   : wdata_reg=aluoutput;
    24'd21   : wdata_reg=aluoutput;
    24'd22   : wdata_reg=aluoutput;
    24'd23   : wdata_reg=aluoutput;
    24'd24   : wdata_reg=aluoutput;
    24'd41   : wdata_reg=rdata_fix;
    24'd42   : wdata_reg=rdata_fix;
    //24'd47   : wdata_reg=(aluoutput[31]?({{32{1'b1}},aluoutput[31:0]}):({{32{1'b0}},aluoutput[31:0]}));
    24'd47   : wdata_reg=aluoutput;
//    24'd49   : wdata_reg=src_csr;
//    24'd50   : wdata_reg=src_csr;
    24'd49   : wdata_reg=MEM_reg_src2;
    24'd50   : wdata_reg=MEM_reg_src2;
    default  : wdata_reg=64'b0;
	endcase
end







//memory

reg [63:0]wmask_1b;
reg [63:0]wmask_2b;
reg [63:0]wmask_dcache;

always @(*) begin
	case(waddr[2:0])
    3'd0  : wdata_1byte={{56{1'b0}},src2[7:0]}; 
    3'd1  : wdata_1byte={{48{1'b0}},src2[7:0],{ 8{1'b0}}};
    3'd2  : wdata_1byte={{40{1'b0}},src2[7:0],{16{1'b0}}};
    3'd3  : wdata_1byte={{32{1'b0}},src2[7:0],{24{1'b0}}};
    3'd4  : wdata_1byte={{24{1'b0}},src2[7:0],{32{1'b0}}};
    3'd5  : wdata_1byte={{16{1'b0}},src2[7:0],{40{1'b0}}};
    3'd6  : wdata_1byte={{ 8{1'b0}},src2[7:0],{48{1'b0}}};
    3'd7  : wdata_1byte={src2[7:0],{56{1'b0}}};
    default:wdata_1byte=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_1byte=8'h1 ; 
    3'd1  : wmask_1byte=8'h2 ;
    3'd2  : wmask_1byte=8'h4 ;
    3'd3  : wmask_1byte=8'h8 ;
    3'd4  : wmask_1byte=8'h10; 
    3'd5  : wmask_1byte=8'h20; 
    3'd6  : wmask_1byte=8'h40; 
    3'd7  : wmask_1byte=8'h80;
    default:wmask_1byte=8'b0;
	endcase


	case(waddr[2:0])
    3'd0  : wmask_1b=64'hff ; 
    3'd1  : wmask_1b=64'hff00;
    3'd2  : wmask_1b=64'hff0000 ;
    3'd3  : wmask_1b=64'hff000000 ;
    3'd4  : wmask_1b=64'hff00000000; 
    3'd5  : wmask_1b=64'hff0000000000; 
    3'd6  : wmask_1b=64'hff000000000000; 
    3'd7  : wmask_1b=64'hff00000000000000;
    default:wmask_1b=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wdata_2byte={{48{1'b0}},src2[15:0]}; 
//    3'd1  : wdata_2byte={{40{1'b0}},src2[15:0],{ 8{1'b0}}};
    3'd2  : wdata_2byte={{32{1'b0}},src2[15:0],{16{1'b0}}};
//    3'd3  : wdata_2byte={{24{1'b0}},src2[15:0],{24{1'b0}}};
    3'd4  : wdata_2byte={{16{1'b0}},src2[15:0],{32{1'b0}}};
//    3'd5  : wdata_2byte={{ 8{1'b0}},src2[15:0],{40{1'b0}}};
    3'd6  : wdata_2byte={           src2[15:0],{48{1'b0}}};
    default:wdata_2byte=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_2byte=8'h3 ; 
//    3'd1  : wmask_2byte=8'h6 ;
    3'd2  : wmask_2byte=8'hc ;
//    3'd3  : wmask_2byte=8'h18;
    3'd4  : wmask_2byte=8'h30; 
//    3'd5  : wmask_2byte=8'h60; 
    3'd6  : wmask_2byte=8'hc0;
    default:wmask_2byte=8'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_2b=64'hffff ; 
//    3'd1  : wmask_2byte=8'h6 ;
    3'd2  : wmask_2b=64'hffff0000 ;
//    3'd3  : wmask_2byte=8'h18;
    3'd4  : wmask_2b=64'hffff00000000; 
//    3'd5  : wmask_2byte=8'h60; 
    3'd6  : wmask_2b=64'hffff000000000000;
    default:wmask_2b=64'b0;
	endcase




	case(raddr[2:0])
    3'd0  : rdata_1byte=rdata[ 7: 0]; 
    3'd1  : rdata_1byte=rdata[15: 8];
    3'd2  : rdata_1byte=rdata[23:16];
    3'd3  : rdata_1byte=rdata[31:24];
    3'd4  : rdata_1byte=rdata[39:32];
    3'd5  : rdata_1byte=rdata[47:40];
    3'd6  : rdata_1byte=rdata[55:48];
    3'd7  : rdata_1byte=rdata[63:56];
    default: rdata_1byte=8'b0;
	endcase

	case(raddr[2:0])
    3'd0  : rdata_2byte=rdata[15: 0]; 
//    3'd1  : rdata_2byte=rdata[23: 8];
    3'd2  : rdata_2byte=rdata[31:16];
//    3'd3  : rdata_2byte=rdata[39:24];
    3'd4  : rdata_2byte=rdata[47:32];
//    3'd5  : rdata_2byte=rdata[55:40];
    3'd6  : rdata_2byte=rdata[63:48];
    default:rdata_2byte=16'b0;
	endcase

	case(opcode)
    24'd16  : wdata=wdata_1byte;
    24'd17  : wdata=wdata_2byte;
    24'd18  : wdata=(waddr[2]?{src2[31:0],{32{1'b0}}}:{{32{1'b0}},src2[31:0]});
    24'd43  : wdata=src2;
    default: wdata=64'b0;
	endcase

	case(opcode)
    24'd16  : wmask=wmask_1byte;
    24'd17  : wmask=wmask_2byte;
    24'd18  : wmask=(waddr[2]? 8'b11110000:8'b00001111);
    24'd43  : wmask=8'hff;
    default: wmask=8'b0;
	endcase

	case(opcode)
    24'd16  : wmask_dcache=wmask_1b;
    24'd17  : wmask_dcache=wmask_2b;
    24'd18  : wmask_dcache=(waddr[2]? 64'hffffffff00000000:64'hffffffff);
    24'd43  : wmask_dcache=64'hffffffffffffffff;
    default: wmask_dcache=64'b0;
	endcase

	case(opcode)
    24'd11  : rdata_fix=(rdata_1byte[7]?{{56{1'b1}},rdata_1byte}:{{56{1'b0}},rdata_1byte});
    24'd12  : rdata_fix=(rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte});
    24'd13  : rdata_fix=(raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]}));
    24'd14  : rdata_fix={{56{1'b0}},rdata_1byte};
    24'd15  : rdata_fix={{48{1'b0}},rdata_2byte};
    24'd41  : rdata_fix=raddr[2]?{{32{1'b0}},rdata[63:32]}:{{32{1'b0}},rdata[31:0]};
    24'd42  : rdata_fix=rdata;
    default: rdata_fix=64'b0;
	endcase
end

always @(*) begin
	case(opcode)
    24'd11  : raddr=aluoutput;
    24'd12  : raddr=aluoutput;
    24'd13  : raddr=aluoutput;
    24'd14  : raddr=aluoutput;
    24'd15  : raddr=aluoutput;
    24'd41  : raddr=aluoutput;
    24'd42  : raddr=aluoutput;
    default: raddr=64'b0;
	endcase

	case(opcode)
    24'd16  : waddr=aluoutput;
    24'd17  : waddr=aluoutput;
    24'd18  : waddr=aluoutput;
    24'd43  : waddr=aluoutput;
    default: waddr=64'b0;
	endcase



end



/*
always @(edge clk) begin
	//$display(" clk=%d    block=%d   waddr=%x   raddr=%x  ls=%d",clk,exu_block,waddr,raddr,exu_block_ls);
end
//***********************   AXI   *********************
reg exu_block_ls;
assign exu_block = (((raddr!=64'b0)||(waddr!=64'b0))? 1'b1:1'b0) & exu_block_ls;
always @(posedge clk) begin
	if(rst == 1'b1)begin
		exu_block_ls <= 1'b1;
	end
	else if(rresp == 2'b0 && rvalid == 1'b1)begin
		//$display("unblock");
		exu_block_ls <= 1'b0;
	end
	else if(bresp == 2'b0 && bvalid == 1'b1)begin
		exu_block_ls <= 1'b0;
	end
	else begin
		exu_block_ls <= 1'b1;
	end

//	if(rst == 1'b1)begin
//		exu_block_ls = 1'b0;
//	end
//	else if(rresp == 2'b0 && rvalid == 1'b1)begin
//		exu_block_ls = 1'b0;
//	end
//	else if(bresp == 2'b0 && bvalid == 1'b1)begin
//		exu_block_ls = 1'b0;
//	end
//	else if(raddr != 64'b0 || waddr != 64'b0)begin
//		exu_block_ls = 1'b1;
//	end
//	else begin
//		exu_block_ls = 1'b0;
//	end
end

//***********************   read   *********************

assign rready = 1'b1;

always @(posedge clk) begin
	//$display("ifu:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rvalid == 1'b1 && rready == 1'b1)begin
		rdata <= rrdata;
		//inst_64 = rdata;
		//$display("inst:%x",inst);
		//$display("3\n");
	end
//	else begin
//		rdata <= 64'b0;
//	end
end


always @(posedge clk) begin
	if(rst == 1'b1)begin
		arvalid <= 1'b0;
		araddr <= 32'h0;
	end
	else if(rvalid == 1'b0 && raddr != 64'h0 && opcode_lastcycle == 24'b0)begin
		arvalid <= 1'b1;
		araddr <= raddr[31:0];
	end
	else if(arvalid == 1'b1 && arready == 1'b1) begin
		arvalid <= 1'b0;
	end
end
 
 
 
//***********************   write   *********************
assign bready = 1'b1;
reg [23:0]opcode_lastcycle;

always @(posedge clk) begin
	opcode_lastcycle <= opcode;
	if(rst == 1'b1)begin
		awvalid <= 1'b0;
		awaddr <= 32'h0;
	end
	else if(bvalid == 1'b0 && waddr != 64'h0 && opcode_lastcycle == 24'b0)begin
		//$display("1");
		awvalid <= 1'b1;
		awaddr <= waddr[31:0];
	end
	else if(awvalid == 1'b1 && awready == 1'b1) begin
		//$display("2");
		awvalid <= 1'b0;
	end

end

always @(posedge clk) begin
	if(rst == 1'b1)begin
		wvalid <= 1'b0;
		wwdata <= 64'h0;
		wstrb <= 8'h0;
	end
	else if(bvalid == 1'b0 && waddr != 64'h0 && opcode_lastcycle == 24'b0)begin
		wvalid <= 1'b1;
		wwdata <= wdata;
		wstrb <= wmask;
	end
	else if(wvalid == 1'b1 && wready == 1'b1) begin
		wvalid <= 1'b0;
	end
end

//******************************************
*/


reg [7:0]wmask_1byte;
reg [63:0]wdata_1byte;

reg [7:0]wmask_2byte;
reg [63:0]wdata_2byte;



reg [63:0] rdata;

reg [63:0] raddr;
reg [63:0] waddr;
reg [63:0] wdata;
reg [ 7:0] wmask;



always @(*) begin
  //pmem_read(raddr, rdata);
  //pmem_write(waddr, wdata, wmask);
end


reg [63:0] rdata_fix;


reg [7:0] rdata_1byte;


reg [15:0] rdata_2byte;






/*
always @(posedge clk) begin            //support mtrace, to give the csrc a signal that a memory operation is coming
	case(opcode)
    24'd11  : npc_loadstore(1, raddr, waddr);
    24'd12  : npc_loadstore(1, raddr, waddr);
    24'd13  : npc_loadstore(1, raddr, waddr);
    24'd14  : npc_loadstore(1, raddr, waddr);
    24'd15  : npc_loadstore(1, raddr, waddr);
    24'd16  : npc_loadstore(2, raddr, waddr);
    24'd17  : npc_loadstore(2, raddr, waddr);
    24'd18  : npc_loadstore(2, raddr, waddr);
    24'd41  : npc_loadstore(1, raddr, waddr);
    24'd42  : npc_loadstore(1, raddr, waddr);
    24'd43  : npc_loadstore(2, raddr, waddr);
    default: npc_loadstore(0, 0, 0);
	endcase
end
*/


/*
always @(posedge clk) begin            //support mtrace, to give the csrc a signal that a memory operation is coming
	case(opcode)
    24'd11  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd12  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd13  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd14  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd15  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd16  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd17  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd18  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd41  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd42  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd43  : npc_loadstore(2, src1, imm_I, imm_S);
    default: npc_loadstore(0, 0, 0, 0);
	endcase
end
*/







endmodule
