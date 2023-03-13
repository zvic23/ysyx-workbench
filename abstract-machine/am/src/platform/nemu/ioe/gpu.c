#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
//  int i;
//  int w = inl(VGACTL_ADDR)>>16;  // TODO: get the correct width
//  int h = inw(VGACTL_ADDR);  // TODO: get the correct height
//  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
//  for (i = 0; i < w * h; i ++) fb[i] = i;
//  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inl(VGACTL_ADDR)>>16, .height = inw(VGACTL_ADDR),
    //.width = 0, .height = 0,
    .vmemsz = 0
  };
  //printf("width = %d   height = %d\n",cfg->width,cfg->height);
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  //printf("x=%d   y=%d   w=%d   h=%d   pixel=%d   sync=%d\n",ctl->x,ctl->y,ctl->w,ctl->h,*(uint32_t*)ctl->pixels,ctl->sync);
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  for(int i=ctl->y;i<ctl->y+ctl->h;i++){
	  for(int j=ctl->x;j<ctl->x+ctl->w;j++){
		  outl(FB_ADDR+i*400*4+j*4  , *(uint32_t*)ctl->pixels );
	  }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
