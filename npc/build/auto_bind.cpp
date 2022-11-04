#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->a, BIND_RATE_SCR, BIND_DIR_IN , 1, SW14);
	nvboard_bind_pin( &top->b, BIND_RATE_SCR, BIND_DIR_IN , 1, SW15);
	nvboard_bind_pin( &top->f, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD15);
}
