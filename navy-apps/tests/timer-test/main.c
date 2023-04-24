#include <stdio.h>
#include <assert.h>

#include <NDL.h>
//#include <sys/time.h>


uint32_t NDL_GetTicks();
int main() {
  uint64_t ms_init = NDL_GetTicks();
  printf("%x\n",ms_init);
  while(1){
	  uint64_t ms=NDL_GetTicks();
	  if((ms-ms_init)>500) {
		  printf("0.5s\n");
		  ms_init=ms;
	  }
  }
  printf("PASS!!!\n");

  return 0;
}


/*
int main() {
  struct timeval tv;
  struct timezone tz;
  int halfsec = 1;
  while(1){
	  gettimeofday(&tv, &tz);
	  if(tv.tv_usec / 500000 >= halfsec) {
		  printf("0.5s\n");
		  halfsec ++;
	  }
  }
  printf("PASS!!!\n");

  return 0;
}
*/
