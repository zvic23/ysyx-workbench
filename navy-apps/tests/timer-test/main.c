#include <stdio.h>
#include <assert.h>

#include <sys/time.h>

int main() {
  int halfsec = 1;
  while(1){
	  int us=NDL_GetTicks();
	  if(us / 500000 >= halfsec) {
		  printf("0.5s\n");
		  halfsec ++;
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
