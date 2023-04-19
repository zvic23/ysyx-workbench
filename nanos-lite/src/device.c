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

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int w = io_read(AM_GPU_CONFIG).width;
  int h = io_read(AM_GPU_CONFIG).height;  
  printf("in:  w=%d  h=%d\n",w,h);
  //uint64_t mix = ((uint64_t)w<<32)+ h;
  //char str_buf[100];
  //sprintf(str_buf,"WIDTH:%d\nHEIGHT:%d",w,h);

  snprintf(buf, len, "%ld",h);
  printf("buf:%s\n",buf);
  //snprintf(buf, len, "%s",str_buf);
  return 0;
//WIDTH : 640
//HEIGHT:480
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
