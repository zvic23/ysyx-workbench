#include "include/trace.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)
#define FMT_WORD "0x%016" PRIx64


#define QUEUE_ELEMENTS 15
#define QUEUE_SIZE (QUEUE_ELEMENTS + 1)
char Queue[QUEUE_SIZE][128];
static int QueueIn=0;
static int QueueOut=0;


void itrace(uint64_t pc , uint32_t inst_val){
  char logbuf[128];
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);

  int ilen = 4;  //s->snpc - s->pc
  int i;
  uint8_t *inst = (uint8_t *)&inst_val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4 ;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint32_t code, int nbyte);
  disassemble(p, logbuf + sizeof(logbuf) - p,
      pc, inst_val, ilen);

	//printf("logbug=%s\n",logbuf);
//zsl:iringbuf implement*************
    if(QueueIn == (( QueueOut + QUEUE_SIZE) % QUEUE_SIZE)){
	    for(int i=0;i<128;i++){
            	Queue[QueueIn][i] = logbuf[i];
	    }
            QueueOut = (QueueOut + 1) % QUEUE_SIZE;
            QueueIn = (QueueIn + 1) % QUEUE_SIZE;
    }
    else {
	    for(int i=0;i<128;i++){
            	Queue[QueueIn][i] = logbuf[i];
	    }
            QueueIn = (QueueIn + 1) % QUEUE_SIZE;
    }
}


void iringbuf_output(){
      printf("itrace :\n");
      for(int i=0;i<QUEUE_SIZE;i++){
	      printf("%s\n",Queue[(QueueOut+i)%QUEUE_SIZE]);
      }
}





struct func{
char name[20];
uint64_t addr_start;
uint64_t addr_end;
};
struct func functab[500];

void  __attribute__((optimize("O1")))   ftrace_elf_analysis(){
  FILE *fp_ftrace = fopen("./csrc/obj.elf", "rb");
  //Assert(fp_ftrace, "ftrace:Can not open elf file");

  fseek(fp_ftrace, 40, SEEK_SET);
  uint64_t shoff;
  int a= fread(&shoff, 8, 1, fp_ftrace);
  assert(a == 1);
  //printf("shoff=%ld\n",shoff);
 
  fseek(fp_ftrace, 58, SEEK_SET);
  uint16_t shentsize;
  a= fread(&shentsize, 2, 1, fp_ftrace);
  assert(a == 1);
  //printf("shentsize=%d\n",shentsize);

  fseek(fp_ftrace, 60, SEEK_SET);
  uint16_t shnum;
  a= fread(&shnum, 2, 1, fp_ftrace);
  assert(a == 1);
  //printf("shnum=%d\n",shnum);                       //get the offset,entsize and num of section header from elf header

  fseek(fp_ftrace, shoff+(shnum-2)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 24 , SEEK_CUR);
  uint64_t strtab_offset;
  a= fread(&strtab_offset, 8, 1, fp_ftrace);
  assert(a == 1);
  //printf("strtab_offset=%lx\n",strtab_offset);

  fseek(fp_ftrace, shoff+(shnum-2)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 32 , SEEK_CUR);
  uint64_t strtab_size;
  a= fread(&strtab_size, 8, 1, fp_ftrace);
  assert(a == 1);
  //printf("strtab_size=%lx\n",strtab_size);          //get the offset and size of string table from section header

  fseek(fp_ftrace, strtab_offset, SEEK_SET);
  char str[strtab_size];
  a= fread(&str, strtab_size, 1, fp_ftrace);
  assert(a == 1);
  int i=0;
  int po=1;
  while(po<=strtab_size-1){
  	printf("str=%s    ",&str[po]);
	po+=strlen(&str[po])+1;
  }
  //printf("\n");                                      //get the string table

  fseek(fp_ftrace, shoff+(shnum-3)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 24 , SEEK_CUR);
  uint64_t symtab_offset;
  a= fread(&symtab_offset, 8, 1, fp_ftrace);
  assert(a == 1);
  //printf("symtab_offset=%lx\n",symtab_offset);

  fseek(fp_ftrace, shoff+(shnum-3)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 32 , SEEK_CUR);
  uint64_t symtab_size;
  a= fread(&symtab_size, 8, 1, fp_ftrace);
  assert(a == 1);
  //printf("symtab_size=%lx\n",symtab_size);          //get the offset and size of symbol table from section header

  fseek(fp_ftrace, symtab_offset, SEEK_SET);
  int sym_type=0;
  int j=0;
  uint64_t k=0;
  for(i=0;i<symtab_size/24;i++){
        fseek(fp_ftrace, symtab_offset, SEEK_SET);
  	fseek(fp_ftrace, i*24+4, SEEK_CUR);
  	a= fread(&sym_type, 1, 1, fp_ftrace);
  	assert(a == 1);
	//printf("info  = %d  ",sym_type);
	if(sym_type == 18){
	        fseek(fp_ftrace, symtab_offset, SEEK_SET);
  		fseek(fp_ftrace, i*24, SEEK_CUR);
	  	a= fread(&k, 4, 1, fp_ftrace);
  		assert(a == 1);
		//functab[j].name = &str[k];
		strcpy(functab[j].name , &str[k]);
  		fseek(fp_ftrace, 4, SEEK_CUR);
	  	a= fread(&k, 8, 1, fp_ftrace);
  		assert(a == 1);
		functab[j].addr_start = k;
	  	a= fread(&k, 8, 1, fp_ftrace);
		assert(a == 1);
		functab[j].addr_end = functab[j].addr_start + (k?(k-1):k);
		j++;
	}

  }                                               //get the function table

  for(i=0;i<j;i++){
 		printf("functab.name=%s   .addrstart=%lx   .addrend=%lx\n",
				functab[i].name,functab[i].addr_start,functab[i].addr_end);

  }                               //display the function table
  fclose(fp_ftrace);
}


int blanknum=1;
void ftrace_check(int pc_up,int pc_lo,int dnpc_up,int dnpc_lo,int dest_register,int src_register,int imm_up, int imm_lo){
	char src_func[20];
	char dest_func[20];
	uint64_t pc = pc_up ;
	pc = (pc <<32) +(uint32_t)pc_lo;
	uint64_t dnpc = dnpc_up ;
        dnpc = (dnpc <<32) +(uint32_t)dnpc_lo;
	uint64_t imm = imm_up ;
	imm = (imm <<32) +(uint32_t)imm_lo;

	for(int i=0;i<500;i++){
		if(functab[i].addr_start<=dnpc && dnpc<=functab[i].addr_end){
			//dest_func = functab[i].name;
			strcpy(dest_func,functab[i].name);
			//printf("now at %s\n",functab[i].name);
			break;
		}
		if(i==499)return;
	}
	//printf("checking.....pc=%lx,pc_up=%x,pc_lo=%x\n",pc,pc_up,pc_lo);
	if(dest_register == 0 && imm == 0 && src_register == 1){
		blanknum--;
		printf("0x%lx:",pc);
		for(int i=0;i<blanknum;i++)printf(" ");
		printf("ret [%s]\n",dest_func);
	}
	else{
		for(int i=0;i<500;i++){
			if(functab[i].addr_start<=pc && pc<=functab[i].addr_end){
			//	src_func = functab[i].name;
				strcpy(src_func,functab[i].name);
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


