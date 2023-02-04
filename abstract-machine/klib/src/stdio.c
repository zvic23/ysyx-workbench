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
		  char s0[10];
		  char *s = convert(d , s0 , 10);
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



char *reverse(char *str){
	int length = strlen(str);
	char s[10];
	for(int i =0; i<length; i++){
		s[0]=str[length-i];
	}
	for(int j =0; j<length; j++){
		str[j]=s[j];
	}
	return str;
}


const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char *convert(int number, char *buff, int base)
{
    char *result = (buff == NULL || base > strlen(digits) || base < 2) ? NULL : buff;
    char sign = 0;


    if (number < 0)
    {
         sign = '-';

    }
    if (result != NULL)
    {
        do
        {
            *buff++ = digits[abs(number % (base ))];
            number /= base;
        } while (number);
        if(sign) *buff++ = sign;
        if (!*result) *buff++ = '0';
        *buff = 0;
        reverse(result);
    }
    return result;
}


#endif
