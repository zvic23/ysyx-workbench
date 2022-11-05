#include <nvboard.h>
#include <Vpriencode83.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vpriencode83* top);


int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();


  while(1) {
    nvboard_update();
    dut.eval();
  }
nvboard_quit();
}
