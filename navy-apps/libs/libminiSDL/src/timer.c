#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
	printf("sdl not implement!\n");
	assert(0);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
	printf("sdl not implement!\n");
	assert(0);
  return 1;
}

uint32_t SDL_GetTicks() {
	printf("sdl not implement!\n");
	assert(0);
  return 0;
}

void SDL_Delay(uint32_t ms) {
	printf("sdl not implement!\n");
	assert(0);
}
