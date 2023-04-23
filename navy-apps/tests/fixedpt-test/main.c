#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>
#include <fixedptc.h>

int main() {
  NDL_Init(0);

  fixedpt a = fixedpt_rconst(1);
  fixedpt b = fixedpt_fromint(16);
  int c = 0;
  if (b > fixedpt_rconst(0.9)) {
    c = fixedpt_toint(fixedpt_div(fixedpt_mul(a , b), fixedpt_rconst(2.3)));
  }
  //assert(c > 0);
  printf("c=%d\n",c);

  return 0;
}
