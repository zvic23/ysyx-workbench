//import "DPI-C" function void ebreak (int r);

module ysyx_22050612_IDU(
input clk,
input rst,
input [63:0]gpr[31:0],
input       valid_IF_ID,
output      ready_IF_ID,
input [63:0]pc_IF_ID  ,
input [31:0]inst_IF_ID,
//input [31:0]inst,
input [31:0]gpr_busy,
input [63:0]mtvec,
input [63:0]mepc,
input [63:0]mcause,
input [63:0]mstatus,

/*
output [63:0]imm_I,
output [63:0]imm_U,
output [63:0]imm_J,
output [63:0]imm_B,
output [63:0]imm_S,
output [ 5:0]shamt,
output [ 4:0]rd,
output [ 4:0]rs1,
output [ 4:0]rs2,
*/
output reg [63:0]src_A,
output reg [63:0]src_B,
output reg [63:0]imm,
//output reg [ 7:0]ALU_mode,

output     [ 4:0]rd,                //these two lines for board
output     wen,


output [23:0]opcode,
output     valid_ID_EX,
input      ready_ID_EX,
output [63:0]pc_ID_EX,
output [31:0]inst_ID_EX,

input EX_reg_valid,
input [31:0]EX_reg_inst
);

//*************************  pipeline ********************************
reg       ID_reg_valid;
reg [63:0]ID_reg_pc   ;
reg [31:0]ID_reg_inst ;

always @(posedge clk) begin
	if(rst) begin
		ID_reg_valid <= 1'b0;
		ID_reg_pc    <= 64'b0;
		ID_reg_inst  <= 32'b0;
	end
	else if(!ready_IF_ID)begin
		ID_reg_valid <= ID_reg_valid;
		ID_reg_pc    <= ID_reg_pc;
		ID_reg_inst  <= ID_reg_inst ;
	end
	else begin
		ID_reg_valid <= valid_IF_ID;
		ID_reg_pc    <= pc_IF_ID;
		ID_reg_inst  <= inst_IF_ID;
	end
end

assign valid_ID_EX = (ID_block==1'b0) ? ID_reg_valid :  1'b0;
assign pc_ID_EX    = (ID_block==1'b0) ? ID_reg_pc    : 64'b0;
assign inst_ID_EX  = (ID_block==1'b0) ? ID_reg_inst  : 32'b0;




//reg wen;
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
end







wire [31:0]inst;
assign inst = ID_reg_valid ? ID_reg_inst : 32'b0;

always @(negedge clk) begin
	$display("ID   pc:%x   inst:%x   valid:%x",ID_reg_pc,ID_reg_inst,ID_reg_valid);
end


//load interlock

reg EX_loading;
wire rs1_waiting;
wire rs2_waiting;
wire [3:0]rs2_block_checking;

assign rs1_waiting = EX_reg_inst[11:7] == ID_reg_inst[19:15];
assign rs2_waiting = EX_reg_inst[11:7] == ID_reg_inst[24:20];
assign rs2_block_checking[0] = ID_reg_valid ? (ID_reg_inst[6:0] == 7'b1101111) : 1'b0;

assign ID_block = ID_reg_valid && EX_reg_valid && EX_loading && (rs1_waiting ||(rs2_waiting && (rs2_block_checking!=4'b0)));

always@(*) begin
	//if(EX_reg_valid)begin
		case ({EX_reg_inst[14:12],EX_reg_inst[6:0]})
			10'b000_0000011:  EX_loading = 1'b1;  //lb
			10'b001_0000011:  EX_loading = 1'b1;  //lh
			10'b010_0000011:  EX_loading = 1'b1;  //lw
			10'b100_0000011:  EX_loading = 1'b1;  //lbu
			10'b101_0000011:  EX_loading = 1'b1;  //lhu
			10'b000_0100011:  EX_loading = 1'b1;  //sb   
			10'b001_0100011:  EX_loading = 1'b1;  //sh
			10'b010_0100011:  EX_loading = 1'b1;  //sw
			10'b110_0000011:  EX_loading = 1'b1;  //lwu
			10'b011_0000011:  EX_loading = 1'b1;  //ld
			10'b011_0100011:  EX_loading = 1'b1;  //sd
		        default :         EX_loading = 1'b0;
		endcase
	//end
	//if(ID_reg_valid)begin
		case ({ID_reg_inst[14:12],ID_reg_inst[6:0]})
    			10'b000_1100111:  rs2_block_checking[1]= 1'd1   ;    //jalr
    			10'b000_1100011:  rs2_block_checking[1]= 1'd1   ;    //beq
    			10'b001_1100011:  rs2_block_checking[1]= 1'd1   ;    //bne
    			10'b100_1100011:  rs2_block_checking[1]= 1'd1   ;    //blt
    			10'b101_1100011:  rs2_block_checking[1]= 1'd1   ;    //bge
    			10'b110_1100011:  rs2_block_checking[1]= 1'd1   ;    //bltu
    			10'b111_1100011:  rs2_block_checking[1]= 1'd1   ;    //bgeu
		//	10'b001_1110011:  rs2_block_checking[1]= 1'd1   ;    //csrrw
             	//	10'b010_1110011:  rs2_block_checking[1]= 1'd1   ;    //csrrs
			default :         rs2_block_checking[1]= 1'd0   ;
		endcase
		case ({ID_reg_inst[31:25],ID_reg_inst[14:12],ID_reg_inst[6:0]})
		        17'b0000000_000_0110011: rs2_block_checking[2]= 1'd1  ; //add
		        17'b0100000_000_0110011: rs2_block_checking[2]= 1'd1  ; //sub
		        17'b0000000_001_0110011: rs2_block_checking[2]= 1'd1  ; //sll
		        17'b0000000_010_0110011: rs2_block_checking[2]= 1'd1  ; //slt
		        17'b0000000_011_0110011: rs2_block_checking[2]= 1'd1  ; //sltu
		        17'b0000000_100_0110011: rs2_block_checking[2]= 1'd1  ; //xor
		        17'b0000000_101_0110011: rs2_block_checking[2]= 1'd1  ; //srl
		        17'b0000000_110_0110011: rs2_block_checking[2]= 1'd1  ; //or
		        17'b0000000_111_0110011: rs2_block_checking[2]= 1'd1  ; //and
		        17'b0000000_000_0111011: rs2_block_checking[2]= 1'd1  ; //addw
		        17'b0100000_000_0111011: rs2_block_checking[2]= 1'd1  ; //subw
		        17'b0000000_001_0111011: rs2_block_checking[2]= 1'd1  ; //sllw
		        17'b0000000_101_0111011: rs2_block_checking[2]= 1'd1  ; //srlw
		        17'b0100000_101_0111011: rs2_block_checking[2]= 1'd1  ; //sraw
		        17'b0000001_000_0110011: rs2_block_checking[2]= 1'd1  ; //mul
		        17'b0000001_100_0110011: rs2_block_checking[2]= 1'd1  ; //div
		        17'b0000001_101_0110011: rs2_block_checking[2]= 1'd1  ; //divu
		        17'b0000001_111_0110011: rs2_block_checking[2]= 1'd1  ; //remu
		        17'b0000001_000_0111011: rs2_block_checking[2]= 1'd1  ; //mulw
		        17'b0000001_100_0111011: rs2_block_checking[2]= 1'd1  ; //divw
		        17'b0000001_101_0111011: rs2_block_checking[2]= 1'd1  ; //divuw
		        17'b0000001_110_0111011: rs2_block_checking[2]= 1'd1  ; //remw
		        17'b0000001_111_0111011: rs2_block_checking[2]= 1'd1  ; //remuw
			default :                rs2_block_checking[2]= 1'd0  ;
		endcase
	//end
end


//********************************************************************






//wire [ 4:0]rd   ;
wire [ 4:0]rs1  ;
wire [ 4:0]rs2  ;
wire [63:0]imm_I;
wire [63:0]imm_U;
wire [63:0]imm_J;
wire [63:0]imm_B;
wire [63:0]imm_S;
wire [ 5:0]shamt;


assign rd = inst[11: 7];
assign rs1= inst[19:15];
assign rs2= inst[24:20];
assign shamt= inst[25:20];
assign imm_I = (inst[31]==1'b1)?{{52{1'b1}},inst[31:20]}:{{52{1'b0}},inst[31:20]};
assign imm_U = (inst[31]==1'b1)?{{32{1'b1}},inst[31:12],{12{1'b0}}}:{{32{1'b0}},inst[31:12],{12{1'b0}}};
assign imm_J = (inst[31]==1'b1)?{{43{1'b1}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}:{{43{1'b0}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
assign imm_B = (inst[31]==1'b1)?{{51{1'b1}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}:{{51{1'b0}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
assign imm_S = (inst[31]==1'b1)?{{52{1'b1}},inst[31:25],inst[11:7]}:{{52{1'b0}},inst[31:25],inst[11:7]};

//wire [63:0]src1;
//wire [63:0]src2;

//assign src1=gpr[rs1];
//assign src2=gpr[rs2];




wire ID_block;
//assign ID_block = src1_conflict || src2_conflict;
assign ready_IF_ID = ID_block ? 1'b0 : ready_ID_EX;



reg src1_conflict;
reg src2_conflict;

always @(*) begin
//The input of ALU
    case (opcode)
    24'h4000 : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h5000 : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h6000 : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h7000 : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h8000 : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h9000 : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h10000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h12000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h13000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h14000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h15000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h16000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h17000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h18000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h19000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h1a000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h1b000: src1_conflict = gpr_busy[rs1] == 1'b1; 

    24'h400  : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h800  : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'hc00  : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd4    : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd5    : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd6    : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd7    : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd8    : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd9    : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd10   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd11   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd12   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd13   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd14   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd15   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd16   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd17   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd18   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd19   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd20   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd21   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd22   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd23   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd24   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd41   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd42   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd43   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd47   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd49   : src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'd50   : src1_conflict = gpr_busy[rs1] == 1'b1; 

//mul / div
    24'h1d000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h21000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h22000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h24000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h25000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h26000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h27000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h28000: src1_conflict = gpr_busy[rs1] == 1'b1; 
    24'h29000: src1_conflict = gpr_busy[rs1] == 1'b1; 

    default :  src1_conflict =  1'b0; 
    endcase

    case (opcode)
    24'h4000 : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h5000 : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h6000 : src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h7000 : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h8000 : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h9000 : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h10000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h12000: src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h13000: src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h17000: src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h18000: src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h19000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h1a000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h1b000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'd5    : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'd6    : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'd7    : src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'd8    : src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'd9    : src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'd10   : src2_conflict = gpr_busy[rs2] == 1'b1;  


//sd  sb  sh  sw have imm and two src, and the same time alu just use src1 and
//imm, so it need to add src2 to check conflict
    24'd16   : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'd17   : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'd18   : src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'd43   : src2_conflict = gpr_busy[rs2] == 1'b1; 



//    24'd50   : src_B=src_csr;

//mul / div
    24'h1d000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h21000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h22000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h24000: src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h25000: src2_conflict = gpr_busy[rs2] == 1'b1; 
    24'h26000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h27000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h28000: src2_conflict = gpr_busy[rs2] == 1'b1;  
    24'h29000: src2_conflict = gpr_busy[rs2] == 1'b1;  

    default :  src2_conflict =  1'b0;  
    endcase
end






reg [63:0] src_csr;
always @(*) begin
    case (imm_I[11:0])
    12'h305: src_csr=mtvec;
    12'h341: src_csr=mepc;
    12'h342: src_csr=mcause;
    12'h300: src_csr=mstatus;
    default: src_csr=64'b0;
    endcase

end

/*
always @(*) begin
//The input of ALU
    case (opcode)
    24'h4000 : src_A=src1;
    24'h5000 : src_A=src1;
    24'h6000 : src_A=src1;
    24'h7000 : src_A=src1;
    24'h8000 : src_A=src1;
    24'h9000 : src_A=src1;
    24'h10000: src_A=src1;
    24'h12000: src_A=src1;
    24'h13000: src_A=src1;
    24'h14000: src_A={{32{1'b0}},src1[31:0]};
    24'h15000: src_A={{32{1'b0}},src1[31:0]};
    24'h16000: src_A={src1[31:0],{32{1'b0}}};
    24'h17000: src_A=src1;
    24'h18000: src_A=src1;
    24'h19000: src_A=src1;
    24'h1a000: src_A={src1[31:0],{32{1'b0}}};
    24'h1b000: src_A={src1[31:0],{32{1'b0}}};
    24'h100  : src_A=imm_U;                             //wdata_reg=imm_U
    24'h200  : src_A=ID_reg_pc;
    24'h300  : src_A=ID_reg_pc;
    24'h400  : src_A=src1;
    24'h800  : src_A=src1;
    24'hc00  : src_A=src1;
    24'd4    : src_A=src1;
    24'd5    : src_A=src1;
    24'd6    : src_A=src1;
    24'd7    : src_A=src1;
    24'd8    : src_A=src1;
    24'd9    : src_A=src1;
    24'd10   : src_A=src1;
    24'd11   : src_A=src1;
    24'd12   : src_A=src1;
    24'd13   : src_A=src1;
    24'd14   : src_A=src1;
    24'd15   : src_A=src1;
    24'd16   : src_A=src1;
    24'd17   : src_A=src1;
    24'd18   : src_A=src1;
    24'd19   : src_A=src1;
    24'd20   : src_A=src1;
    24'd21   : src_A=src1;
    24'd22   : src_A=src1;
    24'd23   : src_A=src1;
    24'd24   : src_A=src1;
    24'd41   : src_A=src1;
    24'd42   : src_A=src1;
    24'd43   : src_A=src1;
    24'd47   : src_A=src1;
    24'd49   : src_A=src1;  //csrrw
    24'd50   : src_A=src1;  //csrrs

//mul / div
    24'h1d000: src_A=src1;  //mul
    24'h21000: src_A=src1;  //div
    24'h22000: src_A=src1;  //divu
    24'h24000: src_A=src1;  //remu
    24'h25000: src_A=src1;  //mulw
    24'h26000: src_A=src1;  //divw
    24'h27000: src_A=src1;  //divuw
    24'h28000: src_A=src1;  //remw
    24'h29000: src_A=src1;  //remuw

//ecall  mret
    24'h200000: src_A=mtvec                             ;        
    24'h500000: src_A=mepc                              ; 

    default :  src_A=64'b0;
    endcase

    case (opcode)
    24'h4000 : src_B=src2 ;
    24'h5000 : src_B=src2 ;
    24'h6000 : src_B={{58{1'b0}},src2[5:0]};
    24'h7000 : src_B=src2 ;
    24'h8000 : src_B=src2 ;
    24'h9000 : src_B=src2 ;
    24'h10000: src_B={{58{1'b0}},src2[5:0]};
    24'h12000: src_B=src2 ;
    24'h13000: src_B=src2 ;
    24'h14000: src_B={{59{1'b0}},shamt[4:0]};
    24'h15000: src_B={{59{1'b0}},shamt[4:0]};
    24'h16000: src_B={{59{1'b0}},shamt[4:0]};
    24'h17000: src_B=src2 ;
    24'h18000: src_B=src2 ;
    24'h19000: src_B={{59{1'b0}},src2[4:0]};
    24'h1a000: src_B={{59{1'b0}},src2[4:0]};
    24'h1b000: src_B={{59{1'b0}},src2[4:0]};
    24'h200  : src_B=imm_U;
    24'h300  : src_B=imm_J;
    24'h400  : src_B={{58{1'b0}},shamt};
    24'h800  : src_B={{58{1'b0}},shamt};
    24'hc00  : src_B={{58{1'b0}},shamt};
    24'd4    : src_B=imm_I;
    24'd5    : src_B=src2 ;
    24'd6    : src_B=src2 ;
    24'd7    : src_B=src2 ;
    24'd8    : src_B=src2 ;
    24'd9    : src_B=src2 ;
    24'd10   : src_B=src2 ;
    24'd11   : src_B=imm_I;
    24'd12   : src_B=imm_I;
    24'd13   : src_B=imm_I;
    24'd14   : src_B=imm_I;
    24'd15   : src_B=imm_I;
    24'd16   : src_B=imm_S;
    24'd17   : src_B=imm_S;
    24'd18   : src_B=imm_S;
    24'd19   : src_B=imm_I;
    24'd20   : src_B=imm_I;
    24'd21   : src_B=imm_I;
    24'd22   : src_B=imm_I;
    24'd23   : src_B=imm_I;
    24'd24   : src_B=imm_I;
    24'd41   : src_B=imm_I;
    24'd42   : src_B=imm_I;
    24'd43   : src_B=imm_S;
    24'd47   : src_B=imm_I;
    24'd49   : src_B=src_csr;
    24'd50   : src_B=src_csr;

//mul / div
    24'h1d000: src_B=src2;  //mul
    24'h21000: src_B=src2;  //div
    24'h22000: src_B=src2;  //divu
    24'h24000: src_B=src2;  //remu
    24'h25000: src_B=src2;  //mulw
    24'h26000: src_B=src2;  //divw
    24'h27000: src_B=src2;  //divuw
    24'h28000: src_B=src2;  //remw
    24'h29000: src_B=src2;  //remuw

    default :  src_B=64'b0;
    endcase


    case(opcode)
    24'h4000 : ALU_mode=8'd0 ; 
    24'h5000 : ALU_mode=8'd1 ; 
    24'h6000 : ALU_mode=8'd8 ; 
    24'h7000 : ALU_mode=8'd2 ; 
    24'h8000 : ALU_mode=8'd3 ; 
    24'h9000 : ALU_mode=8'd7 ; 
    24'h10000: ALU_mode=8'd9 ; 
    24'h12000: ALU_mode=8'd6 ; 
    24'h13000: ALU_mode=8'd4 ; 
    24'h14000: ALU_mode=8'd8 ; 
    24'h15000: ALU_mode=8'd9 ; 
    24'h16000: ALU_mode=8'd10; 
    24'h17000: ALU_mode=8'd0 ; 
    24'h18000: ALU_mode=8'd1 ; 
    24'h19000: ALU_mode=8'd8 ; 
    24'h1a000: ALU_mode=8'd9 ; 
    24'h1b000: ALU_mode=8'd10; 
    24'h200  : ALU_mode=8'd0 ; 
    24'h300  : ALU_mode=8'd0 ; 
    24'h400  : ALU_mode=8'd8 ;
    24'h800  : ALU_mode=8'd9 ;
    24'hc00  : ALU_mode=8'd10;
    24'd4    : ALU_mode=8'd0 ; 
    24'd5    : ALU_mode=8'd1 ; 
    24'd6    : ALU_mode=8'd1 ; 
    24'd7    : ALU_mode=8'd1 ; 
    24'd8    : ALU_mode=8'd1 ; 
    24'd9    : ALU_mode=8'd1 ; 
    24'd10   : ALU_mode=8'd1 ; 
    24'd11   : ALU_mode=8'd0 ;
    24'd12   : ALU_mode=8'd0 ;
    24'd13   : ALU_mode=8'd0 ;
    24'd14   : ALU_mode=8'd0 ;
    24'd15   : ALU_mode=8'd0 ;
    24'd16   : ALU_mode=8'd0 ;
    24'd17   : ALU_mode=8'd0 ;
    24'd18   : ALU_mode=8'd0 ;
    24'd19   : ALU_mode=8'd0 ;
    24'd20   : ALU_mode=8'd2 ;
    24'd21   : ALU_mode=8'd3 ;
    24'd22   : ALU_mode=8'd7 ;
    24'd23   : ALU_mode=8'd6 ;
    24'd24   : ALU_mode=8'd4 ;
    24'd41   : ALU_mode=8'd0 ;
    24'd42   : ALU_mode=8'd0 ;
    24'd43   : ALU_mode=8'd0 ;
    24'd47   : ALU_mode=8'd0 ;
    24'd50   : ALU_mode=8'd6 ;
    default :  ALU_mode=8'b0;
    endcase

end
*/

assign src_A = gpr[rs1];
//assign src_B = gpr[rs2];

always @(*) begin
////src_A
//    case (opcode)
//    //ecall  mret
//    24'h200000: src_A=mtvec   ;        
//    24'h500000: src_A=mepc    ;
//    default   : src_A=gpr[rs1];
//    endcase 

//src_B
    case (opcode)
    24'd49   : src_B=src_csr;
    24'd50   : src_B=src_csr;
    24'h200000:src_B=mtvec   ;        
    24'h500000:src_B=mepc    ;
    default  : src_B=gpr[rs2];
    endcase 

//imm
    case (opcode)
    24'h100  : imm=imm_U; 
    24'h200  : imm=imm_U;
    24'h300  : imm=imm_J;
    24'd16   : imm=imm_S;
    24'd17   : imm=imm_S;
    24'd18   : imm=imm_S;
    24'd43   : imm=imm_S;

    //24'd4    : imm=imm_B;
    24'd5    : imm=imm_B;
    24'd6    : imm=imm_B;
    24'd7    : imm=imm_B;
    24'd8    : imm=imm_B;
    24'd9    : imm=imm_B;
    24'd10   : imm=imm_B;

    default  : imm=imm_I;
    endcase
end






  always @(inst) begin
	  case ({inst[14:12],inst[6:0]})
    10'b000_1100111:  opcode[6:0]= 7'd4   ;    //jalr
    10'b000_1100011:  opcode[6:0]= 7'd5   ;    //beq
    10'b001_1100011:  opcode[6:0]= 7'd6   ;    //bne
    10'b100_1100011:  opcode[6:0]= 7'd7   ;    //blt
    10'b101_1100011:  opcode[6:0]= 7'd8   ;    //bge
    10'b110_1100011:  opcode[6:0]= 7'd9   ;    //bltu
    10'b111_1100011:  opcode[6:0]= 7'd10  ;    //bgeu
    10'b000_0000011:  opcode[6:0]= 7'd11  ;    //lb
    10'b001_0000011:  opcode[6:0]= 7'd12  ;    //lh
    10'b010_0000011:  opcode[6:0]= 7'd13  ;    //lw
    10'b100_0000011:  opcode[6:0]= 7'd14  ;    //lbu
    10'b101_0000011:  opcode[6:0]= 7'd15  ;    //lhu
    10'b000_0100011:  opcode[6:0]= 7'd16  ;    //sb   
    10'b001_0100011:  opcode[6:0]= 7'd17  ;    //sh
    10'b010_0100011:  opcode[6:0]= 7'd18  ;    //sw
    10'b000_0010011:  opcode[6:0]= 7'd19  ;    //addi
    10'b010_0010011:  opcode[6:0]= 7'd20  ;    //slti
    10'b011_0010011:  opcode[6:0]= 7'd21  ;    //sltiu
    10'b100_0010011:  opcode[6:0]= 7'd22  ;    //xori
    10'b110_0010011:  opcode[6:0]= 7'd23  ;    //ori
    10'b111_0010011:  opcode[6:0]= 7'd24  ;    //andi
    10'b110_0000011:  opcode[6:0]= 7'd41  ;    //lwu
    10'b011_0000011:  opcode[6:0]= 7'd42  ;    //ld
    10'b011_0100011:  opcode[6:0]= 7'd43  ;    //sd
    10'b000_0011011:  opcode[6:0]= 7'd47  ;    //addiw
    10'b001_1110011:  opcode[6:0]= 7'd49  ;    //csrrw
    10'b010_1110011:  opcode[6:0]= 7'd50  ;    //csrrs
    default:  opcode[6:0]=7'b0;
	  endcase

	  case (inst)
    32'b1110011:   opcode[23:20]=4'd2;        //ecall
    32'b00110000001000000000000001110011:   opcode[23:20]=4'd5;        //mret
    default:  opcode[23:20]=4'b0;
	  endcase

	  case (inst[6:0])
    7'b0110111: opcode[9:8]= 2'd1;        //lui
    7'b0010111: opcode[9:8]= 2'd2;        //auipc
    7'b1101111: opcode[9:8]= 2'd3;        //jal
    default:  opcode[9:8]=2'b0;
	  endcase


	  case ({inst[31:25],inst[14:12],inst[6:0]})
    17'b0000000_000_0110011: opcode[19:12]=8'h4  ;    //add
    17'b0100000_000_0110011: opcode[19:12]=8'h5  ;    //sub
    17'b0000000_001_0110011: opcode[19:12]=8'h6  ;    //sll
    17'b0000000_010_0110011: opcode[19:12]=8'h7  ;    //slt
    17'b0000000_011_0110011: opcode[19:12]=8'h8  ;    //sltu
    17'b0000000_100_0110011: opcode[19:12]=8'h9  ;    //xor
    17'b0000000_101_0110011: opcode[19:12]=8'h10 ;    //srl
    17'b0000000_110_0110011: opcode[19:12]=8'h12 ;    //or
    17'b0000000_111_0110011: opcode[19:12]=8'h13 ;    //and
    17'b0000000_001_0011011: opcode[19:12]=8'h14 ;    //slliw
    17'b0000000_101_0011011: opcode[19:12]=8'h15 ;    //srliw
    17'b0100000_101_0011011: opcode[19:12]=8'h16 ;    //sraiw
    17'b0000000_000_0111011: opcode[19:12]=8'h17 ;    //addw
    17'b0100000_000_0111011: opcode[19:12]=8'h18 ;    //subw
    17'b0000000_001_0111011: opcode[19:12]=8'h19 ;    //sllw
    17'b0000000_101_0111011: opcode[19:12]=8'h1a ;    //srlw
    17'b0100000_101_0111011: opcode[19:12]=8'h1b ;    //sraw
    17'b0000001_000_0110011: opcode[19:12]=8'h1d ;    //mul
    17'b0000001_100_0110011: opcode[19:12]=8'h21 ;    //div
    17'b0000001_101_0110011: opcode[19:12]=8'h22 ;    //divu
    17'b0000001_111_0110011: opcode[19:12]=8'h24 ;    //remu
    17'b0000001_000_0111011: opcode[19:12]=8'h25 ;    //mulw
    17'b0000001_100_0111011: opcode[19:12]=8'h26 ;    //divw
    17'b0000001_101_0111011: opcode[19:12]=8'h27 ;    //divuw
    17'b0000001_110_0111011: opcode[19:12]=8'h28 ;    //remw
    17'b0000001_111_0111011: opcode[19:12]=8'h29 ;    //remuw
    default:  opcode[19:12]=8'b0;
	  endcase


	  case ({inst[31:26],inst[14:12],inst[6:0]})
    16'b000000_001_0010011: opcode[11:10]=2'h1;       //slli
    16'b000000_101_0010011: opcode[11:10]=2'h2;       //srli
    16'b010000_101_0010011: opcode[11:10]=2'h3;       //srai
    default  opcode[11:10]=2'b0;
	  endcase


  end






assign opcode[7]=(inst==32'h00100073)? 1'b1:1'b0;   //ebreak
//always @(posedge clk) begin
//	if(inst==32'h00100073) ebreak(1);
//end




//  always @(posedge clk) begin
//    $display("%x,%d,%d",inst,opcode,rd);
//  end


endmodule
