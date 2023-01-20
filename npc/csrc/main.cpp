#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_22050612_npc* top;

static uint8_t pmem[0x10000];

uint32_t pmem_read(uint64_t addr){
  
  return *(uint32_t*)&pmem[addr-0x80000000];
}








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

int main() {
  pmem[0x00000000] = 0x93;  pmem[0x00000001] = 0x00;  pmem[0x00000002] = 0x10;  pmem[0x00000003] = 0x00;
  //pmem[0x00000004] = 0x13;  pmem[0x00000005] = 0x81;  pmem[0x00000006] = 0x20;  pmem[0x00000007] = 0x00;

  sim_init();

  top->clk=0;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=1;top->rst=1;top->eval();//step_and_dump_wave();
  top->clk=0;top->rst=0;top->eval();//step_and_dump_wave();
  int i=5;
  while(i){


  top->clk = 1;
  //top->Mr_val = pmem_read(top->Mr_addr);
  top->inst = pmem_read(top->pc);
  top->eval();

  top->clk = 0;
  top->eval();
  i--;

  }



  sim_exit();
}
