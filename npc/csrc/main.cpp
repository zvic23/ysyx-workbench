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
  


  top->X0=3; top->Y=0; step_and_dump_wave();   // 将s，a和b均初始化为“0”
  top->X1=0; top->Y=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，继续保持“0”，
  top->X2=1; top->Y=2;  step_and_dump_wave();   // 将a，b分别改为“1”和“0”，s的值不变，
  top->X3=1; top->Y=3; step_and_dump_wave();   // 将b改为“1”，s和a的值不变，维持10个时间单位
  top->Y=0;  step_and_dump_wave();   // 将s，a，b分别变为“1,0,0”，维持10个时间单位
                      top->Y=1;  step_and_dump_wave();
                      top->Y=2;  step_and_dump_wave();
                      top->Y=3;  step_and_dump_wave();

  sim_exit();
}
