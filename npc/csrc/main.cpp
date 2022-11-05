#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <Vtop.h>
#include "verilated.h"
#include "verilated_vcd_c.h"   //要导出vcd波形文件就要加上这个

#include <nvboard.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);



int main(){
  nvboard_bind_all_pins(&dut);
  nvboard_init();
  
  while (1) {
  nvboard_update();
  dut.eval();
  }
nvboard_quit();
}
