#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)

#include "include/sdb.h"                     
#include "include/trace.h"
#include "include/difftesting.h"

#include <sys/time.h>
#include "include/device.h"

#include "include/generated/autoconf.h"

#define GREEN "\33[1;32m"
#define RED   "\33[1;31m"
#define BLUE  "\33[1;34m"
#define NONE  "\33[0m"                //zsl:offer color for printf

#include "verilated_dpi.h"            //zsl:for printf the gpr

const char *regs_name[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

//VerilatedContext* contextp = NULL;
//VerilatedVcdC* tfp = NULL;

static Vysyx_22050612_npc* top;

//void step_and_dump_wave(){
//  top->eval();
//  contextp->timeInc(1);
//  tfp->dump(contextp->time());
//}
void sim_init(){
  //contextp = new VerilatedContext;
  //tfp = new VerilatedVcdC;
  top = new Vysyx_22050612_npc;
  //contextp->traceEverOn(true);
  //top->trace(tfp, 0);
  //tfp->open("dump.vcd");
}

void sim_exit(){
  top->eval();
  //step_and_dump_wave();
  //tfp->close();
}


int skip_difftest=0;

uint8_t pmem[0x70000000];

uint32_t pmem_read(uint64_t addr){
  return *(uint32_t*)&pmem[addr-0x80000000];
}

extern "C" void pmem_read_pc(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=0x80000000){
  	long long raddr_set = raddr & ~0x7ull;
	memcpy(rdata, &pmem[raddr_set-0x80000000], 8);
  }
}

uint64_t time_init;
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=0x80000000){
	if(raddr == 0xa0000048){
		skip_difftest=1;
		struct timeval time;
		gettimeofday(&time,NULL);
		uint64_t time_rtc = (time.tv_sec*1000000)+time.tv_usec - time_init;
		memcpy(rdata, &time_rtc, 8);
		return;
	}
  	long long raddr_set = raddr & ~0x7ull;
	memcpy(rdata, &pmem[raddr_set-0x80000000], 8);
#ifdef CONFIG_MTRACE	
	long long rdata_printf;
	memcpy(&rdata_printf, &pmem[raddr_set-0x80000000], 8);
	if(raddr >= CONFIG_MTRACE_START && raddr <= CONFIG_MTRACE_END){
	  	printf("mtrace: read    addr:0x%llx(0x%llx)   data:0x%llx \n",\
		raddr,raddr_set,rdata_printf);
	} 
#endif
  }
}

extern int vgactl_port;
extern uint8_t vmem[400*300*4];
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  if(waddr>=0x80000000){
	if(waddr == 0xa00003f8){                         //uart support
		skip_difftest=1;
		putchar((char)wdata);
		return;
	}
	else if(waddr == 0xa0000104){
		vgactl_port = 1;
	}
	else if(waddr >= 0xa1000000 && waddr < 0xa1000000+400*300*4){
  		long long waddr_set = waddr & ~0x7ull;
  		for(int i=0;i<8;i++){
  		        if( (wmask>>i)&1 == 1){
  		      		vmem[waddr_set-0xa1000000+i]=(uint8_t)(wdata>>(i*8));
			}
  		}
	}





  	long long waddr_set = waddr & ~0x7ull;
  	for(int i=0;i<8;i++){
  	        if( (wmask>>i)&1 == 1){
  	      		pmem[waddr_set-0x80000000+i]=(uint8_t)(wdata>>(i*8));
		}
  	}

#ifdef CONFIG_MTRACE			
	if(waddr >= CONFIG_MTRACE_START && waddr <= CONFIG_MTRACE_END){
	  	printf("mtrace: write   addr:0x%llx(0x%llx)   data:0x%llx   wmask:%x\n",\
		waddr,waddr_set,wdata,wmask);
	} 
#endif
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
    printf("gpr[%d] %s = 0x%lx\n", i, regs_name[i], cpu_gpr[i]);
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
		iringbuf_output();
		printf(RED "HIT BAD TRAP\n" NONE);
	}
	end = 1;

}

uint32_t inst;
void read_inst(int npc_inst){
	inst = npc_inst;
}



void one_cycle(){
  itrace(top->pc, inst);
//  top->eval();//step_and_dump_wave();

  top->clk = 1;
  top->eval();//step_and_dump_wave();

  top->clk = 0;
  top->eval();//step_and_dump_wave();

  update_gpr_pc();
  if(skip_difftest == 1){
	  skip_difftest = 2;
	  difftest_step();
  }
  else if(skip_difftest==2){
	  syn_gpr();
	  skip_difftest=0;
  }else {
  	difftest_step();
  }

  device_update();
}

int itrace_si = 0;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
void execute(int n){
  for(uint64_t i=0;i<n;i++){
	  if(end == 1){
  		  struct timeval time_end;                   //get the time when program end
  		  gettimeofday(&time_end,NULL);
  		  g_timer = (time_end.tv_sec*1000000)+time_end.tv_usec - time_init;
		  printf(BLUE "host time spent = %ld us\n" NONE,g_timer);
		  printf(BLUE "total guest instructions = %ld \n" NONE,g_nr_guest_inst);
		  printf(BLUE "simulation frequency = %ld inst/s\n" NONE,g_nr_guest_inst * 1000000 / g_timer);
		  printf("execute has finished, please open npc again!\n");
		  return;
	  }
  	  else if(end == 2){
  		  struct timeval time_end;                   //get the time when program end
  		  gettimeofday(&time_end,NULL);
  		  g_timer = (time_end.tv_sec*1000000)+time_end.tv_usec - time_init;
		  printf(BLUE "host time spent = %ld us\n" NONE,g_timer);
		  printf(BLUE "total guest instructions = %ld \n" NONE,g_nr_guest_inst);
		  printf(BLUE "simulation frequency = %ld inst/s\n" NONE,g_nr_guest_inst * 1000000 / g_timer);
		  printf("execute has finished, please open npc again!\n");
		iringbuf_output();
		printf(RED "ABORT\n" NONE);
		return;
          }
	  one_cycle();
    	  g_nr_guest_inst ++;
	  if(itrace_si) itrace_printf_once();
#ifdef CONFIG_WATCHPOINT            
	  int wp_stop = check_wpchange();
	  if(wp_stop)break;
#endif
  }
}


int main() {
  if(1) load_img();
  else built_in_program();

  sim_init();
  init_device();


  init_disasm("riscv64" "-pc-linux-gnu");     //about itrace, init the disassemble
  ftrace_elf_analysis();                      //about ftrace, init the function table 
					      

  top->clk=0;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=1;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=0;top->rst=0;top->eval();//step_and_dump_wave();    //init the npc

  update_gpr_pc();

  init_difftest(img_size ,0);
 
  struct timeval time_first;                   //get the time when program start
  gettimeofday(&time_first,NULL);
  time_init = (time_first.tv_sec*1000000)+time_first.tv_usec;


  if(0) sdb_mainloop();
  else execute(-1);

  while(0){

  }
  sim_exit();
}
