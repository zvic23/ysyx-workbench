//import "DPI-C" function void ebreak (int r);

module ysyx_22050612_IDU(
input clk,
input rst,
input [63:0]gpr[31:0],
input       valid_IF_ID,
input [63:0]pc_IF_ID  ,
input [31:0]inst_IF_ID,
//input [31:0]inst,

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
output reg [63:0]ALU_operator_a,
output reg [63:0]ALU_operator_b,
output reg [ 7:0]ALU_mode,
output     [ 4:0]rd,
output [23:0]opcode,
output     valid_ID_EX,
output [63:0]pc_ID_EX,
output [31:0]inst_ID_EX
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
	else begin
		ID_reg_valid <= valid_IF_ID;
		ID_reg_pc    <= pc_IF_ID;
		ID_reg_inst  <= inst_IF_ID;
	end
end

assign valid_ID_EX= ID_reg_valid;
assign pc_ID_EX   = ID_reg_pc;
assign inst_ID_EX = ID_reg_inst;


wire [31:0]inst;
assign inst = ID_reg_valid ? ID_reg_inst : 32'b0;

always @(negedge clk) begin
	$display("ID   pc:%x   inst:%x   valid:%x",ID_reg_pc,ID_reg_inst,ID_reg_valid);
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

wire [63:0]src1;
wire [63:0]src2;

assign src1=gpr[rs1];
assign src2=gpr[rs2];


always @(*) begin
//The input of ALU
    case (opcode)
    24'h4000 : ALU_operator_a=src1;
    24'h5000 : ALU_operator_a=src1;
    24'h6000 : ALU_operator_a=src1;
    24'h7000 : ALU_operator_a=src1;
    24'h8000 : ALU_operator_a=src1;
    24'h9000 : ALU_operator_a=src1;
    24'h10000: ALU_operator_a=src1;
    24'h12000: ALU_operator_a=src1;
    24'h13000: ALU_operator_a=src1;
    24'h14000: ALU_operator_a={{32{1'b0}},src1[31:0]};
    24'h15000: ALU_operator_a={{32{1'b0}},src1[31:0]};
    24'h16000: ALU_operator_a={src1[31:0],{32{1'b0}}};
    24'h17000: ALU_operator_a=src1;
    24'h18000: ALU_operator_a=src1;
    24'h19000: ALU_operator_a=src1;
    24'h1a000: ALU_operator_a={src1[31:0],{32{1'b0}}};
    24'h1b000: ALU_operator_a={src1[31:0],{32{1'b0}}};
    24'h100  : ALU_operator_a=imm_U;                             //wdata_reg=imm_U
    24'h200  : ALU_operator_a=pc_IF_ID;
    24'h300  : ALU_operator_a=pc_IF_ID;
    24'h400  : ALU_operator_a=src1;
    24'h800  : ALU_operator_a=src1;
    24'hc00  : ALU_operator_a=src1;
    24'd4    : ALU_operator_a=src1;
    24'd5    : ALU_operator_a=src1;
    24'd6    : ALU_operator_a=src1;
    24'd7    : ALU_operator_a=src1;
    24'd8    : ALU_operator_a=src1;
    24'd9    : ALU_operator_a=src1;
    24'd10   : ALU_operator_a=src1;
    24'd11   : ALU_operator_a=src1;
    24'd12   : ALU_operator_a=src1;
    24'd13   : ALU_operator_a=src1;
    24'd14   : ALU_operator_a=src1;
    24'd15   : ALU_operator_a=src1;
    24'd16   : ALU_operator_a=src1;
    24'd17   : ALU_operator_a=src1;
    24'd18   : ALU_operator_a=src1;
    24'd19   : ALU_operator_a=src1;
    24'd20   : ALU_operator_a=src1;
    24'd21   : ALU_operator_a=src1;
    24'd22   : ALU_operator_a=src1;
    24'd23   : ALU_operator_a=src1;
    24'd24   : ALU_operator_a=src1;
    24'd41   : ALU_operator_a=src1;
    24'd42   : ALU_operator_a=src1;
    24'd43   : ALU_operator_a=src1;
    24'd47   : ALU_operator_a=src1;
    24'd50   : ALU_operator_a=src1;

//mul / div
    24'h1d000: ALU_operator_a=src1;  //mul
    24'h21000: ALU_operator_a=src1;  //div
    24'h22000: ALU_operator_a=src1;  //divu
    24'h24000: ALU_operator_a=src1;  //remu
    24'h25000: ALU_operator_a=src1;  //mulw
    24'h26000: ALU_operator_a=src1;  //divw
    24'h27000: ALU_operator_a=src1;  //divuw
    24'h28000: ALU_operator_a=src1;  //remw
    24'h29000: ALU_operator_a=src1;  //remuw

    default :  ALU_operator_a=64'b0;
    endcase

    case (opcode)
    24'h4000 : ALU_operator_b=src2 ;
    24'h5000 : ALU_operator_b=src2 ;
    24'h6000 : ALU_operator_b={{58{1'b0}},src2[5:0]};
    24'h7000 : ALU_operator_b=src2 ;
    24'h8000 : ALU_operator_b=src2 ;
    24'h9000 : ALU_operator_b=src2 ;
    24'h10000: ALU_operator_b={{58{1'b0}},src2[5:0]};
    24'h12000: ALU_operator_b=src2 ;
    24'h13000: ALU_operator_b=src2 ;
    24'h14000: ALU_operator_b={{59{1'b0}},shamt[4:0]};
    24'h15000: ALU_operator_b={{59{1'b0}},shamt[4:0]};
    24'h16000: ALU_operator_b={{59{1'b0}},shamt[4:0]};
    24'h17000: ALU_operator_b=src2 ;
    24'h18000: ALU_operator_b=src2 ;
    24'h19000: ALU_operator_b={{59{1'b0}},src2[4:0]};
    24'h1a000: ALU_operator_b={{59{1'b0}},src2[4:0]};
    24'h1b000: ALU_operator_b={{59{1'b0}},src2[4:0]};
    24'h200  : ALU_operator_b=imm_U;
    24'h300  : ALU_operator_b=imm_J;
    24'h400  : ALU_operator_b={{58{1'b0}},shamt};
    24'h800  : ALU_operator_b={{58{1'b0}},shamt};
    24'hc00  : ALU_operator_b={{58{1'b0}},shamt};
    24'd4    : ALU_operator_b=imm_I;
    24'd5    : ALU_operator_b=src2 ;
    24'd6    : ALU_operator_b=src2 ;
    24'd7    : ALU_operator_b=src2 ;
    24'd8    : ALU_operator_b=src2 ;
    24'd9    : ALU_operator_b=src2 ;
    24'd10   : ALU_operator_b=src2 ;
    24'd11   : ALU_operator_b=imm_I;
    24'd12   : ALU_operator_b=imm_I;
    24'd13   : ALU_operator_b=imm_I;
    24'd14   : ALU_operator_b=imm_I;
    24'd15   : ALU_operator_b=imm_I;
    24'd16   : ALU_operator_b=imm_S;
    24'd17   : ALU_operator_b=imm_S;
    24'd18   : ALU_operator_b=imm_S;
    24'd19   : ALU_operator_b=imm_I;
    24'd20   : ALU_operator_b=imm_I;
    24'd21   : ALU_operator_b=imm_I;
    24'd22   : ALU_operator_b=imm_I;
    24'd23   : ALU_operator_b=imm_I;
    24'd24   : ALU_operator_b=imm_I;
    24'd41   : ALU_operator_b=imm_I;
    24'd42   : ALU_operator_b=imm_I;
    24'd43   : ALU_operator_b=imm_S;
    24'd47   : ALU_operator_b=imm_I;
//    24'd50   : ALU_operator_b=src_csr;

//mul / div
    24'h1d000: ALU_operator_b=src2;  //mul
    24'h21000: ALU_operator_b=src2;  //div
    24'h22000: ALU_operator_b=src2;  //divu
    24'h24000: ALU_operator_b=src2;  //remu
    24'h25000: ALU_operator_b=src2;  //mulw
    24'h26000: ALU_operator_b=src2;  //divw
    24'h27000: ALU_operator_b=src2;  //divuw
    24'h28000: ALU_operator_b=src2;  //remw
    24'h29000: ALU_operator_b=src2;  //remuw

    default :  ALU_operator_b=64'b0;
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
