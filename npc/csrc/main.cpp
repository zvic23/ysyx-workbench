#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)

#include "include/sdb.h"                      //zsl:include sdb
#include "include/trace.h"
#include "include/difftesting.h"

#define GREEN "\33[1;32m"
#define RED   "\33[1;31m"
#define NONE  "\33[0m"                //zsl:offer color for printf

#include "verilated_dpi.h"            //zsl:for printf the gpr



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_22050612_npc* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vysyx_22050612_npc;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}




static uint8_t pmem[0x50000];

uint32_t pmem_read(uint64_t addr){
  return *(uint32_t*)&pmem[addr-0x80000000];
}

void built_in_program(){
  *(uint32_t*)&pmem[0x00000000]=0x00100093;
  *(uint32_t*)&pmem[0x00000004]=0x00208113;
  *(uint32_t*)&pmem[0x00000008]=0x00310193;
  *(uint32_t*)&pmem[0x0000000c]=0x00418213;

  *(uint32_t*)&pmem[0x00000010]=0x00100073; //ebreak
}


void load_img(){
  FILE *fp = fopen("./csrc/obj.bin", "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  //cout << size <<endl;

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  //for(int i=0;i<size;i++)cout << hex <<(unsigned int) (unsigned char)pmem[i] <<endl;

  fclose(fp);
}



uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
  printf("pc  = 0x%lx\n" , top->pc);  //zsl:I add this line to output pc
}

static int end = 0;
void ebreak(int r){
	if(r==0) printf(GREEN "HIT GOOD TRAP\n" NONE);
	else {
		iringbuf_output();
		printf(RED "HIT BAD TRAP\n" NONE);
	}
	end = 1;
	cmpreg_0();
	printf("111=%d\n",end);
}
uint64_t cpu_gpr_set[33];
void one_cycle(){
  //top->Mr_val = pmem_read(top->Mr_addr);
  
  
  top->inst = pmem_read(top->pc);
  itrace(top->pc, top->inst);
  step_and_dump_wave();
  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave(); 
 
  //step_and_dump_wave();//top->eval();



  for (int i = 0; i < 32; i++) {
	  cpu_gpr_set[i]=cpu_gpr[i];
  }

}

void execute(int n){
  for(uint64_t i=0;i<n;i++){
	  if(end == 1){
		  printf("execute has finished, please open npc again!\n");
		  return;
	  }
	  one_cycle();
	  if(1){             //zsl: the switch of watchpoint
		  int wp_stop = check_wpchange();
		  if(wp_stop)break;
	  }
  }
}

void init_difftest(long img_size, int port);

int main() {
  if(1) load_img();
  else built_in_program();

  sim_init();

  long a =0;
  int b =1;
init_difftest(a,b);

  init_disasm("riscv64" "-pc-linux-gnu");     //about itrace, init the disassemble
  ftrace_elf_analysis();                      //about ftrace, init the function table 
					      

  top->clk=0;top->rst=1;step_and_dump_wave();
  top->clk=1;top->rst=1;step_and_dump_wave();
  top->clk=0;top->rst=0;step_and_dump_wave();    //init the npc

  sdb_mainloop();

  while(0){


  }
  sim_exit();
}
