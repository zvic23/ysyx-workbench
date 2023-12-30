#include "../include/generated/autoconf.h"
#include "../include/device.h"
#include <sys/time.h>

#include <SDL2/SDL.h>

#define TIMER_HZ 60

void device_update() {
  static uint64_t last = 0;
		struct timeval time;
		gettimeofday(&time,NULL);
		uint64_t time_rtc = (time.tv_sec*1000000)+time.tv_usec;
		uint64_t now = time_rtc;
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

  if(1)vga_update_screen();

  extern int npc_state ;
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_state = 1;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}



void init_device() {
	init_vga();
init_i8042();
}
