/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, // none
  TYPE_J, TYPE_R, TYPE_B,
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)

#define immJ() do { *imm = SEXT(((BITS(i, 31, 31) << 20)|(BITS(i, 19, 12) << 12)|(BITS(i, 20, 20) << 11)|(BITS(i, 30, 21) << 1)),21); } while(0)       //zsl: inst:jal uses this type
#define immB() do { *imm = SEXT(((BITS(i, 31, 31) << 12)|(BITS(i, 7,  7 ) << 11)|(BITS(i, 30, 25) << 5 )|(BITS(i, 11, 8 ) << 1)),13); } while(0) 

static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *dest = rd;
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
  }
}

//zsl:ftrace
#ifdef CONFIG_FTRACE
struct func{
char name[20];
uint64_t addr_start;
uint64_t addr_end;
};
extern struct func functab[500];
int blanknum=1;
void ftrace_check(uint64_t pc,uint64_t dnpc,uint64_t dest_register,uint64_t src_register,uint64_t imm){
	char *src_func = "0";
	char *dest_func = "0";
	for(int i=0;i<500;i++){
		if(functab[i].addr_start<=dnpc && dnpc<=functab[i].addr_end){
			dest_func = functab[i].name;
			//printf("now at %s\n",functab[i].name);
			break;
		}
		if(i==499)return;
	}
	if(dest_register == 0 && imm == 0 && src_register == 1){
		blanknum--;
		printf("0x%lx:",pc);
		for(int i=0;i<blanknum;i++)printf(" ");
		printf("ret [%s]\n",dest_func);
	}
	else{
		for(int i=0;i<500;i++){
			if(functab[i].addr_start<=pc && pc<=functab[i].addr_end){
				src_func = functab[i].name;
				//printf("now at %s\n",functab[i].name);
				break;
			}
			if(i==499 && strcmp(dest_func,"_trm_init"))return;
		}
		int i = strcmp(src_func,dest_func);
		if(i){
			printf("0x%lx:",pc);
			for(int i=0;i<blanknum;i++)printf(" ");
			printf("call [%s@%lx]\n",dest_func,dnpc);
			blanknum++;
		}
	}
}
#else
void ftrace_check(uint64_t pc,uint64_t dnpc,uint64_t dest_register,uint64_t src_register,uint64_t imm){
}
#endif



static int decode_exec(Decode *s) {
  int dest = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->pc + 4;s->dnpc = s->pc + imm;ftrace_check(s->pc,s->dnpc,1,0,1));
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4;s->dnpc = (src1 + imm) & 0xfffffffffffffffe;ftrace_check(s->pc,s->dnpc,dest,BITS(s->isa.inst.val, 19, 15),imm));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + imm, 4),32));
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2,31,0), 32));
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1<imm)?1:0);    
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1==src2)?(s->pc+imm):s->dnpc);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1!=src2)?(s->pc+imm):s->dnpc);
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1+imm,31,0),32));
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);

  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, word_t shamt=imm & 0x000000000000003f;word_t src1_s=src1>>shamt;R(dest)=(BITS(src1,63,63)==1)?((BITS(0xffffffffffffffff,shamt-1,0)<<(64-shamt))|src1_s):src1_s);  //word_t shamt=BITS(imm,5,0)    sword_t src1_sign = *(sword_t*)&src1;R(dest)=(src1_sign >> shamt));        //     !!!!!!!!have doubt 
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + imm, 1));  //!!!!!bitnum have doubt
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1 << BITS(src2, 4, 0),31,0),32));  //!!!!!!!!have doubt
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1<src2)?1:0);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2); 
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
 
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << BITS(imm, 5, 0));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1 >> BITS(imm, 5, 0));
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, word_t match=0;//src1=0x0000000000000000;src2=0x8000000000000001;	
	if(BITS(src1,63,63)==BITS(src2,63,63))match=(src1>=src2)?1:0;
	if(BITS(src1,63,63)!=BITS(src2,63,63))match=(BITS(src1,63,63)==0)?1:0;
	s->dnpc = (match)?(s->pc+imm):s->dnpc);     //!!!!!have doubt and to be optimized
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));

  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(BITS(BITS(src1,31,0)*BITS(src2,31,0),31,0),32));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R,	word_t src1_32=BITS(src1,31,0);word_t src2_32=BITS(src2,31,0);word_t quotient=0;word_t src1_32_cpl=(src1_32^0xffffffff)+1; word_t src2_32_cpl=(src2_32^0xffffffff)+1; 
	if(BITS(src1,31,31)==BITS(src2,31,31)&&BITS(src1,31,31)==0)quotient=src1_32/src2_32;
	if(BITS(src1,31,31)==BITS(src2,31,31)&&BITS(src1,31,31)==1)quotient=src1_32_cpl/src2_32_cpl;
	if(BITS(src1,31,31)!=BITS(src2,31,31)&&BITS(src1,31,31)==0)quotient=src1_32/src2_32_cpl;
	if(BITS(src1,31,31)!=BITS(src2,31,31)&&BITS(src1,31,31)==1)quotient=src1_32_cpl/src2_32;
	if(BITS(src1,31,31)!=BITS(src2,31,31))quotient=(quotient^0xffffffff)+1;//|0x80000000;
	R(dest) = SEXT(quotient,32));               //!!!!!have doubt and to be optimizied 
						    
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, word_t src1_32=BITS(src1,31,0);word_t src2_32=BITS(src2,31,0);word_t remainder=0;word_t src1_32_cpl=(src1_32^0xffffffff)+1; word_t src2_32_cpl=(src2_32^0xffffffff)+1; 
	if(BITS(src1,31,31)==BITS(src2,31,31)&&BITS(src1,31,31)==0)remainder=src1_32%src2_32;
	if(BITS(src1,31,31)==BITS(src2,31,31)&&BITS(src1,31,31)==1)remainder=src1_32_cpl%src2_32_cpl;
	if(BITS(src1,31,31)!=BITS(src2,31,31)&&BITS(src1,31,31)==0)remainder=src1_32%src2_32_cpl;
	if(BITS(src1,31,31)!=BITS(src2,31,31)&&BITS(src1,31,31)==1)remainder=src1_32_cpl%src2_32;
	if(BITS(src1,31,31)!=BITS(src2,31,31))remainder=(remainder^0xffffffff)+1;//|0x80000000;
	R(dest) = SEXT(remainder,32));               //!!!!!have doubt and to be optimizied    this inst is copy-paste
						     
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, word_t match=0;
	if(BITS(src1,63,63)==BITS(src2,63,63))match=(src1<src2)?1:0;
	if(BITS(src1,63,63)!=BITS(src2,63,63))match=(BITS(src1,63,63)==1)?1:0;
	s->dnpc = (match)?(s->pc+imm):s->dnpc);     //!!!!!have doubt and to be optimized
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, word_t match=0;
	if(BITS(src1,63,63)==BITS(src2,63,63))match=(src1<src2)?1:0;
	if(BITS(src1,63,63)!=BITS(src2,63,63))match=(BITS(src1,63,63)==1)?1:0;
	R(dest) = (match)?1:0);     //!!!!!to be optimized

  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + imm, 2),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + imm, 2));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS(BITS(src1,31,0)-BITS(src2,31,0),31,0), 32));

  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(BITS(src1 << BITS(imm, 4, 0),31,0),32));
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, word_t shamt=BITS(imm,4,0);word_t src1_s=BITS(src1,31,0)>>shamt;
	R(dest)=(BITS(src1,31,31)==1)?((BITS(0xffffffff,shamt-1,0)<<(32-shamt))|src1_s):src1_s;
	R(dest)=SEXT(R(dest),32));  //!!!!!!!have doubt 

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1 * src2);

  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = imm);
  
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = BITS(src1, 31, 0) >> BITS(imm, 4, 0));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, word_t shamt=BITS(src2,4,0);word_t src1_s=BITS(src1,31,0)>>shamt;
	R(dest)=(BITS(src1,31,31)==1)?((BITS(0xffffffff,shamt-1,0)<<(32-shamt))|src1_s):src1_s;
	R(dest)=SEXT(R(dest),32));  //!!!!!!!have doubt 
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = BITS(src1, 31, 0) >> BITS(src2,4, 0));
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = (src1 < src2)?(s->pc+imm):s->dnpc);

  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = (src1>=src2)?(s->pc+imm):s->dnpc);     //!!!!!have doubt and to be optimized   zsl:there is something wrong in bge and bgeu
  
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = src1 % src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R,	R(dest) = src1 / src2); 

  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
