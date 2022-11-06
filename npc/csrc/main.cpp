#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
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

  top->mode=0; top->A=7; top->B=4;  step_and_dump_wave();  
                      top->B=7;  step_and_dump_wave();   
            top->A=1; top->B=2;  step_and_dump_wave();  
                      top->B=6;  step_and_dump_wave();   
  top->mode=1; top->A=0; top->B=8;  step_and_dump_wave();   
                      top->B=10;  step_and_dump_wave();
            top->A=7; top->B=7;  step_and_dump_wave();
                      top->B=5;  step_and_dump_wave();

  sim_exit();
}
