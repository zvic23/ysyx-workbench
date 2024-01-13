#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)

#include "include/sdb.h"                     
#include "include/trace.h"
#include "include/difftesting.h"
#include "include/paddr.h"
#include "include/cpu.h"

#include <sys/time.h>
#include "include/device.h"

#include "include/generated/autoconf.h"
//#include "include/common.h"

#include "verilated_dpi.h"            //zsl:for printf the gpr


//*******************************************************************************

//VerilatedContext* contextp = NULL;
//VerilatedVcdC* tfp = NULL;

 Vysyx_22050612_npc* top;

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

//*******************************************************************************


extern int skip_difftest;


uint64_t time_init;

int main() {
  if(1) load_img();
  else built_in_program();

  sim_init();
  init_device();


  init_disasm("riscv64" "-pc-linux-gnu");     //about itrace, init the disassemble
  ftrace_elf_analysis();                      //about ftrace, init the function table 
					      

  top->clk=0;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=1;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=0;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=0;top->rst=0;top->eval();//step_and_dump_wave();    //init the npc



  update_gpr_pc();
extern uint64_t img_size;
  init_difftest(img_size ,0);
 
  struct timeval time_first;                   //get the time when program start
  gettimeofday(&time_first,NULL);
  time_init = (time_first.tv_sec*1000000)+time_first.tv_usec;

#ifdef CONFIG_SDB
   sdb_mainloop();
#else
   execute(-1);
#endif
  while(0){

  }
  sim_exit();
}
