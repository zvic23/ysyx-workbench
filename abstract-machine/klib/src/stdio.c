#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#include <limits.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


//const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char digits[] = "0123456789abcdefghijklmnopqrstuvwsyz";
int printf(const char *fmt, ...) {
  char out[65536];

  uint64_t i = 0;
  uint64_t j = 0;
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
	  else if(fmt[i]=='%' && fmt[i+1]=='c'){
		  char *s = va_arg(ap, char *);
			  out[j++] = *(uint8_t*)s;
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='d'){
		  uint64_t number = va_arg(ap, int);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
		  if(number > INT_MAX){        //zsl: deal with nagetive, use the complement theory
			  number = UINT_MAX + 1 - number;
			  out[j] = '-';
			  j++;
		  }
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='u'){
		  uint64_t number = va_arg(ap, int);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='x'){
		  uint32_t number = va_arg(ap, int);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='l' && fmt[i+2]=='d'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+3;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='l' && fmt[i+2]=='x'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+3;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='p'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
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

  for(int l=0;l<j;l++){
	  putch(out[l]);
  }


  return j; 
  //panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) { 
  uint64_t i = 0;
  uint64_t j = 0;
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
		  uint64_t number = va_arg(ap, int);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
		  if(number > INT_MAX){        //zsl: deal with nagetive, use the complement theory
			  number = UINT_MAX + 1 - number;
			  out[j] = '-';
			  j++;
		  }
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='u'){
		  uint64_t number = va_arg(ap, int);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='x'){
		  uint32_t number = va_arg(ap, int);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='l' && fmt[i+2]=='d'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+3;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='l' && fmt[i+2]=='x'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+3;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='p'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
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

int snprintf(char *out, size_t n, const char *fmt, ...) {  //the check of size(n) is not fully completed
  uint64_t i = 0;
  uint64_t j = 0;
  va_list ap;
  va_start(ap, fmt);
  while(fmt[i]!='\0' && j<n-1){
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
		  uint64_t number = va_arg(ap, int);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
		  if(number > INT_MAX){        //zsl: deal with nagetive, use the complement theory
			  number = UINT_MAX + 1 - number;
			  out[j] = '-';
			  j++;
		  }
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='u'){
		  uint64_t number = va_arg(ap, int);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='x'){
		  uint32_t number = va_arg(ap, int);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+2;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='l' && fmt[i+2]=='d'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 10;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+3;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='l' && fmt[i+2]=='x'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
			  j++;
		  }
		  i=i+3;
	  }
	  else if(fmt[i]=='%' && fmt[i+1]=='p'){
		  uint64_t number = va_arg(ap, long long);
		  int base = 16;
		  char buff[30];
		  char *a=buff;
	          do
                  {
                          *a++ = digits[number % base];
                          number /= base;
                  } while (number);
                  *a = '\0';
		  int length = strlen(buff);
		  for(int k=0;k<length;k++){
			  out[j] = buff[length-1-k];
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

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
