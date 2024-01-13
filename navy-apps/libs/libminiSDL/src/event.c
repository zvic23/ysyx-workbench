#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <stdio.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static uint64_t get_keyvalue(char *keychar){
  if     (strcmp(keychar, "J")==0)       return  SDLK_J;
  else if(strcmp(keychar, "K")==0)       return  SDLK_K;
  else if(strcmp(keychar, "G")==0)       return  SDLK_G;
  else if(strcmp(keychar, "W")==0)       return  SDLK_W;
  else if(strcmp(keychar, "Q")==0)       return  SDLK_Q;
  else if(strcmp(keychar, "E")==0)       return  SDLK_E;
  else if(strcmp(keychar, "S")==0)       return  SDLK_S;
  else if(strcmp(keychar, "F")==0)       return  SDLK_F;
  else if(strcmp(keychar, "A")==0)       return  SDLK_A;
  else if(strcmp(keychar, "B")==0)       return  SDLK_B;
  else if(strcmp(keychar, "C")==0)       return  SDLK_C;
  else if(strcmp(keychar, "D")==0)       return  SDLK_D;
  else if(strcmp(keychar, "H")==0)       return  SDLK_H;
  else if(strcmp(keychar, "I")==0)       return  SDLK_I;
  else if(strcmp(keychar, "L")==0)       return  SDLK_L;
  else if(strcmp(keychar, "M")==0)       return  SDLK_M;
  else if(strcmp(keychar, "N")==0)       return  SDLK_N;
  else if(strcmp(keychar, "O")==0)       return  SDLK_O;
  else if(strcmp(keychar, "P")==0)       return  SDLK_P;
  else if(strcmp(keychar, "R")==0)       return  SDLK_R;
  else if(strcmp(keychar, "T")==0)       return  SDLK_T;
  else if(strcmp(keychar, "U")==0)       return  SDLK_U;
  else if(strcmp(keychar, "V")==0)       return  SDLK_V;
  else if(strcmp(keychar, "X")==0)       return  SDLK_X;
  else if(strcmp(keychar, "Y")==0)       return  SDLK_Y;
  else if(strcmp(keychar, "Z")==0)       return  SDLK_Z;
  else if(strcmp(keychar, "0")==0)       return  SDLK_0;
  else if(strcmp(keychar, "1")==0)       return  SDLK_1;
  else if(strcmp(keychar, "2")==0)       return  SDLK_2;
  else if(strcmp(keychar, "3")==0)       return  SDLK_3;
  else if(strcmp(keychar, "4")==0)       return  SDLK_4;
  else if(strcmp(keychar, "5")==0)       return  SDLK_5;
  else if(strcmp(keychar, "6")==0)       return  SDLK_6;
  else if(strcmp(keychar, "7")==0)       return  SDLK_7;
  else if(strcmp(keychar, "8")==0)       return  SDLK_8;
  else if(strcmp(keychar, "9")==0)       return  SDLK_9;
  else if(strcmp(keychar, "RIGHT")==0)   return  SDLK_RIGHT;
  else if(strcmp(keychar, "LEFT")==0)    return  SDLK_LEFT;
  else if(strcmp(keychar, "DOWN")==0)    return  SDLK_DOWN;
  else if(strcmp(keychar, "UP")==0)      return  SDLK_UP;
  else if(strcmp(keychar, "SPACE")==0)   return  SDLK_SPACE;
  else if(strcmp(keychar, "RETURN")==0)  return  SDLK_RETURN;
  else if(strcmp(keychar, "ESCAPE")==0)  return  SDLK_ESCAPE;
  else if(strcmp(keychar, "LALT")==0)    return  SDLK_LALT;
  else if(strcmp(keychar, "RALT")==0)    return  SDLK_RALT;
  else if(strcmp(keychar, "BACKSPACE")==0)    return  SDLK_BACKSPACE;
  else if(strcmp(keychar, "SLASH")==0)    return  SDLK_SLASH;
  else return -1;
}

int SDL_PushEvent(SDL_Event *ev) {
	printf("sdl not implement!\n");
	assert(0);
  return 0;
}

uint8_t SDL_keybuf[100];
int SDL_PollEvent(SDL_Event *ev) {
	//printf("pollevent in\n");
  char event_buf[64];
  int receive_event = 0;
  receive_event = NDL_PollEvent(event_buf,sizeof(event_buf));
  if(receive_event == 0) return 0;
  char event0[25];
  char event1[25];
  sscanf(event_buf,"%s %s",event0,event1);
  if(strcmp(event0, "kd")==0) ev->type = SDL_KEYDOWN;
  else if(strcmp(event0, "ku")==0) ev->type = SDL_KEYUP;
 
  ev->key.keysym.sym = get_keyvalue(event1);;


  if(ev->type == SDL_KEYDOWN || ev->type == SDL_KEYUP) {
	  //printf("key:%d    state:%d\n",ev->key.keysym.sym,ev->type);

	  if(ev->type == SDL_KEYUP){
		  for(int i=0;i<100;i++)SDL_keybuf[i]=0;
		  SDL_keybuf[ev->key.keysym.sym]=0;
	  }
	   else if(ev->type == SDL_KEYDOWN){
		  for(int i=0;i<100;i++)SDL_keybuf[i]=0;
		  SDL_keybuf[ev->key.keysym.sym]=1;
	  }
	  return 1;
  }
  else return 0;
	//printf("sdl not implement!\n");
	//assert(0);
  //return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char event_buf[64];
  int receive_event = 0;
  while(receive_event == 0) receive_event = NDL_PollEvent(event_buf,sizeof(event_buf));
  char event0[25];
  char event1[25];
  sscanf(event_buf,"%s %s",event0,event1);
  //printf("%s\n",event_buf);
  //printf("%s   %s\n",event0,event1);
  if(strcmp(event0, "kd")==0) event->type = SDL_KEYDOWN;
  else if(strcmp(event0, "ku")==0) event->type = SDL_KEYUP;
  else event->type = SDL_KEYUP;
 
  event->key.keysym.sym = get_keyvalue(event1);;

	//printf("sdl not implement!\n");
	//assert(0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
	printf("peepevents sdl not implement!\n");
	assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {

  return SDL_keybuf;
	//printf("getkeystate sdl not implement!\n");
	//assert(0);
  //return NULL;
}
