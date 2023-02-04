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

int sprintf(char *out, const char *fmt, ...) {     //to be completed
  int i = 0;
  int j = 0;
  va_list ap;
  va_start(ap, fmt);
  while(fmt[i]){
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
		  char *s = toString(d) ;
		  int length = strlen(s);
		  for(int k=0;k<length;k++){
			  out[j] = s[k];
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




char* toString(int iVal)
{
    char str[1024] = {'\0',};
    char *pos = NULL;
    int sign = 0;   //正数 或者是 0

    int abs = iVal;

    pos = str + 1023; //移动指针,指向堆栈底部
    *pos-- = '\0';  //end

    if(iVal < 0)
    {
        sign = 1;
        abs = -abs;
    }
    
    int dit = 0;
    while(abs > 0)
    {
        dit = abs % 10;
        abs = abs / 10;

        *pos-- = (char)('0' + dit); 
    }

    if(sign)
        *pos-- = '-';

    char *ret = (char*)malloc(1024 - (pos - str));

    if(iVal == 0)               //0的一个处理
        strcpy(ret, "0");
    else                        //iVal非0的拷贝
        strcpy(ret, pos+1);

    return(ret);    
}




#endif
