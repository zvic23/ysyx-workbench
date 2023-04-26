#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  FILE *fp = fopen(filename, "rb");
  if(fp==NULL) printf("%s null!\n",filename);
  assert(fp);

  fseek(fp, 0, SEEK_END);
  int size = ftell(fp);
  printf("The image is %s, size = %ld\n", filename, size);

  //unsigned char img_buf[size];
  unsigned char *img_buf;
  img_buf = (unsigned char *)malloc(size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(img_buf, size, 1, fp);
  assert(ret == 1);
printf("1111\n");
  SDL_Surface *img = STBIMG_LoadFromMemory(img_buf, size);
  //STBIMG_LoadFromMemory(const unsigned char* buffer, int length);

  free(img_buf);
  fclose(fp);
printf("%p   done!\n",img);
//printf("%x   done!\n",img->format->Gmask);
  return img;
  //return NULL;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
