//import "DPI-C" function void ebreak (int r);

module ysyx_22050612_IDU(
input clk,
input rst,
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
output [23:0]opcode,
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
		ID_reg_valid <= 1'b1;
		ID_reg_pc    <= pc_IF_ID;
		ID_reg_inst  <= inst_IF_ID;
	end
end

assign pc_ID_EX   = ID_reg_pc;
assign inst_ID_EX = ID_reg_inst;


wire [31:0]inst;
assign inst = ID_reg_valid ? ID_reg_inst : 32'b0;

always @(negedge clk) begin
	$display("ID   pc:%x   inst:%x",ID_reg_pc,ID_reg_inst);
end
//********************************************************************




/*
assign rd = inst[11: 7];
assign rs1= inst[19:15];
assign rs2= inst[24:20];

assign shamt= inst[25:20];

assign imm_I = (inst[31]==1'b1)?{{52{1'b1}},inst[31:20]}:{{52{1'b0}},inst[31:20]};
assign imm_U = (inst[31]==1'b1)?{{32{1'b1}},inst[31:12],{12{1'b0}}}:{{32{1'b0}},inst[31:12],{12{1'b0}}};
assign imm_J = (inst[31]==1'b1)?{{43{1'b1}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}:{{43{1'b0}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
assign imm_B = (inst[31]==1'b1)?{{51{1'b1}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}:{{51{1'b0}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
assign imm_S = (inst[31]==1'b1)?{{52{1'b1}},inst[31:25],inst[11:7]}:{{52{1'b0}},inst[31:25],inst[11:7]};
*/



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
