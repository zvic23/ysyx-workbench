#include <am.h>
#include <stdio.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t *RTC_ADDR = (uint64_t*)0xa0000048;
  uint64_t us_whole= RTC_ADDR[0];
  uptime->us = us_whole;
  //uptime->us = 0;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}


void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  //printf("x=%d   y=%d   w=%d   h=%d   pixel=%d   sync=%d\n",ctl->x,ctl->y,ctl->w,ctl->h,*(uint32_t*)ctl->pixels,ctl->sync);
  if (ctl->sync) {
    //outl(SYNC_ADDR, 1);
    uint32_t *SYNC_ADDR = (uint32_t*)0xa0000104;
    SYNC_ADDR[0] = 1;
  }
  uint32_t *pixel = (uint32_t*)ctl->pixels;
  uint32_t *FB_ADDR = (uint32_t*)0xa1000000;
  int p=0;
  for(int i=ctl->y;i<ctl->y+ctl->h;i++){
	  for(int j=ctl->x;j<ctl->x+ctl->w;j++){
		  //outl(FB_ADDR+i*400*4+j*4  , pixel[p] );
		  FB_ADDR[i*400+j]=pixel[p];
		  p++;
	  }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
