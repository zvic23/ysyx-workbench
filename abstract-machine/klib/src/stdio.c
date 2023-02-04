#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}
const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int sprintf(char *out, const char *fmt, ...) {     //to be completed
  int i = 0;
  int j = 0;
  va_list ap;
  va_start(ap, fmt);
  while(fmt[i]!='\0'){
	  if(fmt[i]=='%' && fmt[i+1]=='s'){
		  char *s = va_arg(ap, char *);
		  int length = strlen(s);
		  for(int k=0;k<length;k++){
			  out[j] = s[k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='d'){
		  int d = va_arg(ap, int);
		  //char s0[20]="11111111112222222222";
		  //char *s = convert(d , s0 , 10);
		  int number = d;int base = 10;
		  char aa[20]="11111111112222222222";
		  char *buff=aa;
	         do
        {
            *buff++ = digits[abs(number % base)];
            number /= base;
        } while (number);
        //if (!*result) *buff++ = '0';
        *buff = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = aa[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else {
		  out[j]=fmt[i];
		  i++;
		  j++;
	  }
  }
  out[j]='\0';
  va_end(ap);
  return j; 
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
