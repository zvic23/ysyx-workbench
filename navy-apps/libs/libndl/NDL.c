#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  //struct timezone tz;
  gettimeofday(&tv, NULL);
  return tv.tv_usec/1000;
  //return 0;
}

int NDL_PollEvent(char *buf, int len) {
  char buf_cache[65535];
  int fp = open("/dev/events", "r+");
  int succ = read(fp, buf_cache, 40);
  //if(succ)printf("succ=%d\n",succ);
  strncpy(buf, buf_cache, len);
  if(succ) return 1;
  else return 0;


//  char buf_cache[65535];
//  FILE *fp = fopen("/dev/events", "r+");
//  int succ = fscanf(fp, "%[^\n]", buf_cache);
//  fclose(fp);
//  strncpy(buf, buf_cache, len);
//  if(succ!=-1) return 1;
//  else return 0;
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

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
	printf("ndl in\n");
	printf("x=%d,y=%d,w=%d,h=%d\n",x,y,w,h);
	printf("x_sc=%d,y_sc=%d\n",screen_w,screen_h);
  uint32_t pixel_buf[screen_w*screen_h];
  //memset(pixel_buf,0,sizeof(pixel_buf));
  int x_mid=(screen_w-canvas_w)/2;
  int y_mid=(screen_h-canvas_h)/2;
  int fp = open("/dev/fb", "r+");
	printf("ndl in\n");
  for(int i=0;i<h;i++){
	  //printf("i=%d\n",i);
          memcpy(pixel_buf+x_mid+x+screen_w*(i+y_mid),&pixels[w*i],w);
          //memcpy(pixel_buf+screen_w*i,&pixels[w*i],w*4);
  }
	  //memcpy(pixel_buf,pixels,screen_w*screen_h*4);
	printf("ndl in\n");
  //write(fp,pixels,screen_w*screen_h*4);
  write(fp,pixel_buf,screen_w*screen_h*4);

  close(fp);


	printf("x_mid=%d,y_mid=%d\n",x_mid,y_mid);
	printf("x_canvas=%d,y_canvas=%d\n",canvas_w,canvas_h);
	printf("x_sc=%d,y_sc=%d\n",screen_w,screen_h);
	printf("x=%d,y=%d,w=%d,h=%d\n",x,y,w,h);


//  int x_mid=(screen_w-canvas_w)/2;
//  int y_mid=(screen_h-canvas_h)/2;
//  int fp = open("/dev/fb", "r+");
//  for(int i=0;i<h;i++){
//	  lseek(fp,x_mid+x+screen_w*(i+y_mid),SEEK_SET);
//	  write(fp,&pixels[h*i],w);
//  }
//  close(fp);
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



  char buf[40];
  int fp = open("/proc/dispinfo", "r+");
  int succ = read(fp, buf, 40);
  int w,h;
  sscanf(buf,"WIDTH:%d\nHEIGHT:%d",&w,&h);
  //printf("wh:%d  %d\n",w,h);
  close(fp);
    screen_w = w; screen_h = h;




//  char buf[20];
//  char buf1[20];
//  FILE *fp = fopen("/proc/dispinfo", "r+");
//  int succ = fscanf(fp, "%s\n%s", buf,buf1);
//  //printf("succ:%d\n",succ);
//  //printf("str:%s\n",buf);
//  //printf("str:%s\n",buf1);
//  int w,h;
//  sscanf(buf,"WIDTH:%d",&w);
//  sscanf(buf1,"HEIGHT:%d",&h);
//  //printf("wh:%d  %d\n",w,h);
//  fclose(fp);
//
//    screen_w = w; screen_h = h;

  return 0;
}

void NDL_Quit() {
}
