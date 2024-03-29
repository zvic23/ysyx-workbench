#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static uint32_t time_init;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  //struct timezone tz;
  gettimeofday(&tv, NULL);
  return (tv.tv_usec/1000+tv.tv_sec*1000)-time_init;
  //return 0;
}

int NDL_PollEvent(char *buf, int len) {
  char buf_cache[100];
  int fp = open("/dev/events", "r+");
  int succ = read(fp, buf_cache, 40);
  //if(succ)printf("succ=%d\n",succ);
  if(succ) {
  	  strncpy(buf, buf_cache, len);
	  return 1;
  }
  else return 0;
}

static int canvas_w = 0, canvas_h = 0;
void NDL_OpenCanvas(int *w, int *h) {

  canvas_w = *w; canvas_h = *h;
  if(screen_w<canvas_w || screen_h<canvas_h){
	  printf("canvas should not be larger than screen!!\n");
  }
  //assert(screen_w>=canvas_w && screen_h>=canvas_h);



  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {  //pixels is canvas size
  int x_mid=(screen_w-canvas_w)/2;
  int y_mid=(screen_h-canvas_h)/2;
  int fp = open("/dev/fb", "r+");
  for(int i=0;i<h;i++){
	  lseek(fp,(x_mid+x+screen_w*(i+y+y_mid))*4,SEEK_SET);
	  write(fp,&pixels[canvas_w*(i+y)+x],w*4);
  }

//	printf("x_mid=%d,y_mid=%d\n",x_mid,y_mid);
//	printf("x_canvas=%d,y_canvas=%d\n",canvas_w,canvas_h);
//	printf("x_screen=%d,y_screen=%d\n",screen_w,screen_h);
//	printf("x=%d,y=%d,w=%d,h=%d\n",x,y,w,h);

}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  struct timeval tv;
  gettimeofday(&tv, NULL);
  time_init = tv.tv_usec/1000+tv.tv_sec*1000;


  char buf[40];
  int fp = open("/proc/dispinfo", "r+");
  int succ = read(fp, buf, 40);
  int w,h;
  sscanf(buf,"WIDTH:%d\nHEIGHT:%d",&w,&h);
  //printf("ndl srceen_wh:%d  %d\n",w,h);
  close(fp);
    screen_w = w; screen_h = h;
  return 0;
}

void NDL_Quit() {
}
