#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vnpc.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

static uint8_t pmem[];

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vnpc;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();

  top->clk=0;top->rst=1;step_and_dump_wave();
  top->clk=1;top->rst=1;step_and_dump_wave();
  top->clk=0;top->rst=0;step_and_dump_wave();

  while(1){


  top->clk = 1;
  top->Mr_val = pmem_read(top->Mr_addr);
  top->inst = pmem_read(top->pc);
  top->eval();

  top->clk = 0;
  top->eval();


  }



  sim_exit();
}
