#include <stdio.h>
#include <assert.h>

#include <sys/time.h>

int main() {
  struct timeval tv;
  struct timezone tz;
  int sec = 1;
  while(1){
	  gettimeofday(&tv, &tz);
	  if(tv.tv_usec / 1000000 >=sec) {
		  printf("0.5s\n");
		  sec ++;
	  }
  }



  printf("PASS!!!\n");

  return 0;
}
