#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>
#include <fixedptc.h>

int main() {
  NDL_Init(0);

//  fixedpt a = fixedpt_rconst(1);
//  fixedpt b = fixedpt_fromint(1);
//  int c = 0;
//  if (b > fixedpt_rconst(0.9)) {
//    c = fixedpt_toint(fixedpt_div(fixedpt_mul(a , b), fixedpt_rconst(2.3)));
//  }
//  //assert(c > 0);
//  printf("c=%d\n",c);

fixedpt a = fixedpt_rconst(1.2);
fixedpt b = fixedpt_fromint(10);
int c = 0;
if (b > fixedpt_rconst(7.9)) {
  c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
}

  printf("c=%d\n",c);

int f=4;
fixedpt g = fixedpt_rconst(7.1);
int h = 0;
  h = fixedpt_toint(fixedpt_divi(fixedpt_muli(g + FIXEDPT_ONE, f), 3));

  printf("h=%d\n",h);

fixedpt z = fixedpt_rconst(-1.2);
fixedpt z1= fixedpt_abs(z);
printf("z=%x  z1=%x\n",z,z1);

fixedpt m = fixedpt_rconst(-1.0);
fixedpt m1= fixedpt_floor(m);
printf("m=%x  m1=%x\n",m,m1);

  return 0;
}
