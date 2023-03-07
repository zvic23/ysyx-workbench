#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)

#include "include/sdb.h"                     
#include "include/trace.h"
#include "include/difftesting.h"

#include "include/generated/autoconf.h"

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




uint8_t pmem[0x50000];

uint32_t pmem_read(uint64_t addr){
  return *(uint32_t*)&pmem[addr-0x80000000];
}


extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=0x80000000){
  	long long raddr_set = raddr & ~0x7ull;
	memcpy(rdata, &pmem[raddr_set-0x80000000], 8);
  }
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  if(waddr>=0x80000000){
  	long long waddr_set = waddr & ~0x7ull;
  	for(int i=0;i<8;i++){
  	        if(wmask/(2*i)&0x1 == 1)
  	      		pmem[waddr_set-0x80000000+(i*8)]=(uint8_t)(wdata>>(i*8));
  	}
  }
}



void built_in_program(){
  *(uint32_t*)&pmem[0x00000000]=0x00100093;
  *(uint32_t*)&pmem[0x00000004]=0x00208113;
  *(uint32_t*)&pmem[0x00000008]=0x00310193;
  *(uint32_t*)&pmem[0x0000000c]=0x00418213;
  *(uint32_t*)&pmem[0x00000010]=0x00100073; //ebreak
}


long img_size;
void load_img(){
  FILE *fp = fopen("./csrc/obj.bin", "rb");

  fseek(fp, 0, SEEK_END);
  img_size = ftell(fp);
  //cout << size <<endl;

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, img_size, 1, fp);
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

uint64_t cpu_gpr_set[33];
void update_gpr_pc(){
  for (int i = 0; i < 32; i++) {          //save the gpr and pc in a safe value
	  cpu_gpr_set[i]=cpu_gpr[i];
  }
          cpu_gpr_set[32]=top->pc;
}

int end = 0;
void ebreak(int r){
	if(r==0) printf(GREEN "HIT GOOD TRAP\n" NONE);

	else {
#ifdef CONFIG_ITRACE
		iringbuf_output();
#endif
		printf(RED "HIT BAD TRAP\n" NONE);
	}
	end = 1;

}

uint32_t inst;
void read_inst(int npc_inst){
	inst = npc_inst;
}



void one_cycle(){
#ifdef CONFIG_ITRACE
  itrace(top->pc, inst);
#endif
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave(); 

  update_gpr_pc();

#ifdef CONFIG_DIFFTEST
  difftest_step();
#endif


}

int itrace_si = 0;
void execute(int n){
  for(uint64_t i=0;i<n;i++){
	  if(end == 1){
		  printf("execute has finished, please open npc again!\n");
		  return;
	  }
  	  else if(end == 2){
		iringbuf_output();
		printf(RED "ABORT\n" NONE);
		return;
          }
	  one_cycle();
	  if(itrace_si) itrace_printf_once();
#ifdef CONFIG_WATCHPOINT            //zsl: the switch of watchpoint
		  int wp_stop = check_wpchange();
		  if(wp_stop)break;
#endif
  }
}


int main() {
  if(1) load_img();
  else built_in_program();

  sim_init();

#ifdef CONFIG_DIFFTEST
  init_difftest(img_size ,0);
#endif
  init_disasm("riscv64" "-pc-linux-gnu");     //about itrace, init the disassemble
#ifdef CONFIG_FTRACE
  ftrace_elf_analysis();                      //about ftrace, init the function table 
#endif
					      

  top->clk=0;top->rst=1;step_and_dump_wave();
  top->clk=1;top->rst=1;step_and_dump_wave();
  top->clk=0;top->rst=0;step_and_dump_wave();    //init the npc

  update_gpr_pc();

  sdb_mainloop();

  while(0){

  }
  sim_exit();
}
