#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for(int i=0;i<len;i++){
	putch(((uint8_t*)buf)[i]);
  }
  return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;
  else{
	  snprintf(buf, len, "%s %s\n", ev.keydown ? "kd" : "ku", keyname[ev.keycode] );
  	  return len;
  }
}

static int w,h;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  w = io_read(AM_GPU_CONFIG).width;
  h = io_read(AM_GPU_CONFIG).height;  
  //printf("in:  w=%d  h=%d\n",w,h);
  //printf("para: %d   %d\n",offset,len);
  snprintf(buf, len, "WIDTH:%d\nHEIGHT:%d",w,h);
  printf("buf:%s\n",buf);
  return len;
//WIDTH : 640
//HEIGHT:480

  //return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
	printf("fb in off:%d, len:%d\n",offset,len);
  int y = offset / w;
  int x = offset % w;
  printf("x=%d,y=%d\n",x,y);
  io_write(AM_GPU_FBDRAW, x, y, (uint32_t*)buf, len, 0, false);
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);


  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
