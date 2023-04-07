#include <common.h>
#include "syscall.h"

void do_write(uint64_t a,uint64_t b,uint64_t c) {
  uint8_t *buf=(uint8_t*)b;
  if(a==1 || a==2){
	  for(int i=0;i<c;i++){
		  putch(buf[i]);
	  }
  }
  asm volatile("mv a0, %0" : :"r"(c));
}

void do_brk(uint64_t a,uint64_t b,uint64_t c) {
  asm volatile("li a0, 0");
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  printf("strace: syscall[%d]: %x %x %x\n",a[0],a[1],a[2],a[3]);

  switch (a[0]) {
    case 0: halt(a[1]);break;
    case 1: yield();break;
    case 4: do_write(a[1],a[2],a[3]);break;
    case 9: do_brk(a[1],a[2],a[3]);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
