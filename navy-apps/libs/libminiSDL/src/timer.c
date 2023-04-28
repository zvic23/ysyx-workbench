#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
	printf("addtimer sdl not implement!\n");
	//assert(0);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
	printf("removetimer sdl not implement!\n");
	//assert(0);
  return 1;
}

uint32_t SDL_GetTicks() {
	//printf("sdl not implement!\n");
	//assert(0);
  return NDL_GetTicks();
  //return 0;
}

void SDL_Delay(uint32_t ms) {
	uint64_t first = NDL_GetTicks();
	uint64_t next  = 0;
	do{ next =  NDL_GetTicks();}
	while(next - first < ms);
	//static int time = 0;
	//printf("time : %d       ms:%d \n",time++,ms);
	//printf("delay sdl not implement!\n");
	//assert(0);
}
