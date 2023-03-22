#include "../include/generated/autoconf.h"
#include "../include/device.h"
#include <sys/time.h>

void device_update() {
  static uint64_t last = 0;
  //uint64_t now = get_time();
		struct timeval time;
		gettimeofday(&time,NULL);
		uint64_t time_rtc = (time.tv_sec*1000000)+time.tv_usec;
		uint64_t now = time_rtc;
  //if (now - last < 1000000 / TIMER_HZ) {
  if (now - last < 200000 ) {
    return;
  }
  last = now;

  if(1)vga_update_screen();
 // IFDEF(CONFIG_HAS_VGA, vga_update_screen());

//#ifndef CONFIG_TARGET_AM
//  SDL_Event event;
//  while (SDL_PollEvent(&event)) {
//    switch (event.type) {
//      case SDL_QUIT:
//        nemu_state.state = NEMU_QUIT;
//        break;
//#ifdef CONFIG_HAS_KEYBOARD
//      // If a key was pressed
//      case SDL_KEYDOWN:
//      case SDL_KEYUP: {
//        uint8_t k = event.key.keysym.scancode;
//        bool is_keydown = (event.key.type == SDL_KEYDOWN);
//        send_key(k, is_keydown);
//        break;
//      }
//#endif
//      default: break;
//    }
//  }
//#endif
}

//void sdl_clear_event_queue() {
//#ifndef CONFIG_TARGET_AM
//  SDL_Event event;
//  while (SDL_PollEvent(&event));
//#endif
//}

void init_device() {
//  IFDEF(CONFIG_TARGET_AM, ioe_init());
//  init_map();
//
//  IFDEF(CONFIG_HAS_SERIAL, init_serial());
//  IFDEF(CONFIG_HAS_TIMER, init_timer());
//  IFDEF(CONFIG_HAS_VGA, init_vga());
//  IFDEF(CONFIG_HAS_KEYBOARD, init_i8042());
//  IFDEF(CONFIG_HAS_AUDIO, init_audio());
//  IFDEF(CONFIG_HAS_DISK, init_disk());
//  IFDEF(CONFIG_HAS_SDCARD, init_sdcard());
//
//  IFNDEF(CONFIG_TARGET_AM, init_alarm());
	init_vga();
}
