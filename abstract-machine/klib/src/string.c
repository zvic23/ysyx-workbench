#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i = 0;
  while(1){
	  if(s[i] == '\0'){
		  break;
	  }
	  i++;
  } 
  return i;
  //panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  size_t src_len = strlen(src);

  for (size_t i = 0; i < src_len; i++){
	  dst[i] = src[i];
  }
  dst[src_len] = '\0';
  return dst;
  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  size_t dst_len = strlen(dst);
  size_t src_len = strlen(src);
  
  for (size_t i = 0; i < src_len; i++){
	  dst[dst_len + i] = src[i];
  }
  dst[dst_len + src_len] = '\0';
  return dst;
  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  int i=0;
  while(1){
	  if(s1[i]==s2[i]&&s1[i]=='\0'){
		  return 0;
	  }
	  if(s1[i]!=s2[i]){
		  int result = s1[i]-s2[i];
		  return result;
	  }
	  i++;
  }
  //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
panic("Not implemented");
}

#endif
