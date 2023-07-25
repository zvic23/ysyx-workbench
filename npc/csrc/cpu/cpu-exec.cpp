#include "verilated_dpi.h"            //zsl:for printf the gpr

#include "../include/generated/autoconf.h"

#include "../include/cpu.h"
#include "../include/common.h"


#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "../include/sdb.h"                     
#include "../include/trace.h"
#include "../include/difftesting.h"
#include "../include/paddr.h"

#include <sys/time.h>
#include "../include/device.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)


extern Vysyx_22050612_npc* top;


enum{ RUNNING, STOP, END, ABORT, QUIT};
int npc_state = RUNNING;


extern int skip_difftest;

extern uint64_t time_init;





uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] %s = 0x%lx    ", i, regs_name[i], cpu_gpr[i]);
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


uint64_t mtvec,mcause,mepc,mstatus;
void update_csr(long long mtvec_npc, long long mcause_npc, long long mepc_npc, long long mstatus_npc){
	mtvec = mtvec_npc;
	mcause = mcause_npc;
	mepc = mepc_npc;
	mstatus = mstatus_npc;
}





//int end = 0;
void ebreak(int r){
	if(r==0) printf(GREEN "HIT GOOD TRAP\n" NONE);

	else {
		iringbuf_output();
		printf(RED "HIT BAD TRAP\n" NONE);
	}
	//end = 1;
	npc_state = END;

}



uint32_t inst;
void read_inst(int npc_inst){
	inst = npc_inst;
}


int load_store = 0;
void npc_loadstore(int getinst, long long base, long long imm_I, long long imm_S){
	if(getinst == 1){
		switch(base + imm_I){
		case 0xa0000048:
		case 0xa0000060:{load_store = 1;break;}
		default:   {load_store = 0;break;}
		}
	}else if(getinst == 2){
		if(base+imm_S==0xa00003f8 || base+imm_S==0xa0000104 ||
		(base+imm_S>=0xa1000000&&base+imm_S<0xa1000000+400*300*4))
			load_store = 1;
		else load_store = 0;
	}else load_store = 0;

	if(getinst == 2){
		//if((base+imm_S>=0x830695c0 && base+imm_S<=0x830695cc)){
		if((base+imm_S>=0x81d58ea8 && base+imm_S<0x81d58eb0)){
			//printf("mem (%lx)  write  at %lx\n",base+imm_S,top->pc);
		}
	}
}


int itrace_si = 0;
uint64_t skip_old = 0;
void one_cycle(){
  itrace(top->pc, inst);
//  top->eval();//step_and_dump_wave();


  int skip_difftest_now = skip_difftest;
  skip_difftest = 0;

  top->clk = 1;
  top->eval();//step_and_dump_wave();

  top->clk = 0;
  top->eval();//step_and_dump_wave();

  update_gpr_pc();

#ifdef CONFIG_DIFFTEST
  if( load_store == 1){
	  syn_gpr();
  }
  else {
  	  difftest_step();
  }
#endif
//  update_gpr_pc();
//  if(skip_difftest == 1){
//	  printf("skip = 1  !\n");
//	  skip_difftest = 2;
//	  difftest_step();
//  }
//  else if(skip_difftest==2){
//	  printf("skip = 2  !!\n");
//	  syn_gpr();
//	  skip_difftest=0;
//  }else {
//  	difftest_step();
//  }

  device_update();
}

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us

void program_exec_statistics(){
  	 struct timeval time_end;                   //get the time when program end
  	 gettimeofday(&time_end,NULL);
  	 g_timer = (time_end.tv_sec*1000000)+time_end.tv_usec - time_init;
	 printf(BLUE "host time spent = %ld us\n" NONE,g_timer);
	 printf(BLUE "total guest instructions = %ld \n" NONE,g_nr_guest_inst);
	 printf(BLUE "simulation frequency = %ld inst/s\n" NONE,g_nr_guest_inst * 1000000 / g_timer);
	 printf("execute has finished, please open npc again!\n");
}



//int itrace_si = 0;
void execute(int n){
  for(uint64_t i=0;i<n;i++){
	  if(npc_state == END || npc_state == QUIT){
	  //if(end == 1){
		  program_exec_statistics();
		  return;
	  }
  	  else if(npc_state == STOP){
		  return;
          }
  	  else if(npc_state == ABORT){
  	  //else if(end == 2){
		  printf(RED "ABORT\n" NONE);
		  program_exec_statistics();
		  iringbuf_output();
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
