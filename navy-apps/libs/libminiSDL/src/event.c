#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <stdio.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
	printf("sdl not implement!\n");
	assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
	printf("sdl not implement!\n");
	assert(0);
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char event_buf[64];
  int hh = NDL_PollEvent(event_buf,sizeof(event_buf));
  char event0[25];
  char event1[25];
  sscanf(event_buf,"%s %s",event0,event1);
  //printf("%d\n",hh);
  //printf("%s\n",event_buf);
  if(hh==1)printf("%s   %s\n",event0,event1);
  if(strcmp(event0, "kd")==0) event->type = SDL_KEYDOWN;
  else if(strcmp(event0, "ku")==0) event->type = SDL_KEYUP;
  else event->type = SDL_KEYUP;
  
  if(strcmp(event1, "J")==0) event->key.keysym.sym = SDLK_J;
  else if(strcmp(event1, "K")==0) event->key.keysym.sym = SDLK_K;
  else if(strcmp(event1, "G")==0) event->key.keysym.sym = SDLK_G;
  else if(strcmp(event1, "0")==0) event->key.keysym.sym = SDLK_0;
  else if(strcmp(event1, "1")==0) event->key.keysym.sym = SDLK_1;
  else if(strcmp(event1, "2")==0) event->key.keysym.sym = SDLK_2;
  //else e.type = SDL_KEYUP;


	//printf("sdl not implement!\n");
	//assert(0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
	printf("sdl not implement!\n");
	assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
	printf("sdl not implement!\n");
	assert(0);
  return NULL;
}
