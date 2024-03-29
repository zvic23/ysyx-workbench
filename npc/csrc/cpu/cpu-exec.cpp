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

uint64_t wb_pc;
uint64_t cpu_gpr_set[33];
void update_gpr_pc(){
  for (int i = 0; i < 32; i++) {          //save the gpr and pc in a safe value
	  cpu_gpr_set[i]=cpu_gpr[i];
  }
          cpu_gpr_set[32]=top->pc;

wb_pc = top->wb_pc;
}



uint64_t mtvec,mcause,mepc,mstatus;
void update_csr(long long mtvec_npc, long long mcause_npc, long long mepc_npc, long long mstatus_npc){
	mtvec = mtvec_npc;
	mcause = mcause_npc;
	mepc = mepc_npc;
	mstatus = mstatus_npc;
}





void ebreak(int r){
	if(r==0) printf(GREEN "HIT GOOD TRAP\n" NONE);

	else {
		iringbuf_output();
		printf(RED "HIT BAD TRAP\n" NONE);
	}
	npc_state = END;

}



uint32_t inst;
void read_inst(int npc_inst){
	inst = npc_inst;
}


int load_store = 0;
void npc_loadstore(int getinst, long long raddr, long long waddr){
	if(getinst == 1){
		switch(raddr){
		case 0xa0000048:
		case 0xa0000060:{load_store = 1;break;}
		default:   {load_store = 0;break;}
		}
	}else if(getinst == 2){
		if(waddr==0xa00003f8 || waddr==0xa0000104 ||
		(waddr>=0xa1000000&&waddr<0xa1000000+400*300*4))
			load_store = 1;
		else load_store = 0;
	}else load_store = 0;

}



uint64_t g_nr_guest_inst = 0;
int difftest_check = 0;
void npc_complete_one_inst(){
	difftest_check = 1;
    	  g_nr_guest_inst ++;
}



int itrace_si = 0;
uint64_t skip_old = 0;
void one_cycle(){
  //itrace(top->pc, inst);

  top->clk = 1;
  top->eval();//step_and_dump_wave();

  top->clk = 0;
  top->eval();//step_and_dump_wave();

  update_gpr_pc();

  if(inst)itrace(top->wb_pc, inst);
#ifdef CONFIG_DIFFTEST
  if(difftest_check){
	  if( load_store == 1){
		  syn_gpr();
	  }
	  else {
		  difftest_step();
	  }
	  difftest_check = 0;
  }
#endif

  device_update();
}


//branch predict situation
long long branch_predict_right = 0;
long long branch_predict_wrong = 0;
void branch_predict(int r){
	if(r) branch_predict_right++;
	else  branch_predict_wrong++;
}





//ICACHE data collect
long long icache_hit = 0;
long long icache_miss = 0;

void icache_collect(int hit){
	if(hit){
		icache_hit++;
	}else{
		icache_miss++;
		icache_hit--;
	}
}

//DCACHE data collect
long long dcache_read_hit = 0;
long long dcache_read_miss = 0;
long long dcache_write_hit = 0;
long long dcache_write_miss = 0;

void dcache_collect(int hit){
	if(hit==1){
		dcache_read_hit++;
	}
	else if(hit==2){
		dcache_read_miss++;
	}
	else if(hit==3){
		dcache_write_hit++;
	}
	else if(hit==4){
		dcache_write_miss++;
	}
}



static uint64_t g_timer = 0; // unit: us
static uint64_t g_cycle = 0; //  cycle

void program_exec_statistics(){
           printf(YELLOW "branch predict rate : %.4f%%    hit:%lld   miss:%lld\n" NONE,((float)branch_predict_right/(branch_predict_right+branch_predict_wrong))*100,branch_predict_right,branch_predict_wrong);
           printf(YELLOW "ICACHE hit rate : %.4f%%    hit:%lld   miss:%lld\n" NONE,((float)icache_hit/(icache_hit+icache_miss))*100,icache_hit,icache_miss);
           printf(YELLOW "DCACHE read  hit rate : %.4f%%    hit:%lld   miss:%lld\n" NONE,((float)dcache_read_hit/(dcache_read_hit+dcache_read_miss))*100,dcache_read_hit,dcache_read_miss);
           printf(YELLOW "DCACHE write hit rate : %.4f%%    hit:%lld   miss:%lld\n" NONE,((float)dcache_write_hit/(dcache_write_hit+dcache_write_miss))*100,dcache_write_hit,dcache_write_miss);

  	 struct timeval time_end;                   //get the time when program end
  	 gettimeofday(&time_end,NULL);
  	 g_timer = (time_end.tv_sec*1000000)+time_end.tv_usec - time_init;
	 printf(BLUE "host time spent = %ld us\n" NONE,g_timer);
	   printf(BLUE "total guest cycle spent = %ld \n" NONE,g_cycle);
	   printf(BLUE "total guest cycle frequence = %ld Hz\n" NONE,g_cycle*1000000/g_timer);

	 printf(BLUE "total guest instructions = %ld \n" NONE,g_nr_guest_inst);
	   printf(BLUE "guest ipc  = 0.%ld \n" NONE,g_nr_guest_inst*1000/g_cycle);
	 printf(BLUE "simulation frequency = %ld inst/s\n" NONE,g_nr_guest_inst * 1000000 / g_timer);


	 printf("execute has finished, please open npc again!\n");
}


extern void pipeline_state_printf();
void execute(int n){
  for(uint64_t i=0;i<n;i++){
	  if(npc_state == END || npc_state == QUIT){
		  program_exec_statistics();
	          pipeline_state_printf();
		  return;
	  }
  	  else if(npc_state == STOP){
	          pipeline_state_printf();
		  program_exec_statistics();
		  return;
          }
  	  else if(npc_state == ABORT){
	          pipeline_state_printf();
		  printf(RED "ABORT\n" NONE);
		  program_exec_statistics();
		  iringbuf_output();
		  return;
          }

	  one_cycle();
	  g_cycle++;

    	  //g_nr_guest_inst ++;
	  if(itrace_si) itrace_printf_once();



#ifdef CONFIG_WATCHPOINT            
	  int wp_stop = check_wpchange();
	  if(wp_stop)break;
#endif
  }
}
