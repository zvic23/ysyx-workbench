#include <common.h>
#include "syscall.h"

#include <fs.h>

void do_write(Context *c) {
  uint8_t *buf=(uint8_t*)c->GPR3;
  if(c->GPR2==1 || c->GPR2==2){
	  for(int i=0;i<c->GPR4;i++){
		  putch(buf[i]);
	  }
  }
  else if(c->GPR2!=0){
	  fs_write(c->GPR2, (void*)c->GPR3, c->GPR4);
  }
  c->GPRx = c->GPR4;
  //asm volatile("mv a0, %0" : :"r"(c));
}

void do_brk(Context *c) {
  c->GPRx = 0;
  //asm volatile("li a0, 0");
}

void do_open(Context *c) {
	//printf("val:%d\n",fs_open((char*)c->GPR2, c->GPR3, c->GPR4));
  c->GPRx = fs_open((char*)c->GPR2, c->GPR3, c->GPR4);
}

void do_read(Context *c) {
  c->GPRx = fs_read(c->GPR2, (void*)c->GPR3, c->GPR4);
}

void do_close(Context *c) {
  c->GPRx = fs_close(c->GPR2);
}

void do_lseek(Context *c) {
  c->GPRx = fs_lseek(c->GPR2, c->GPR3, c->GPR4);
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;  //a7 type
  a[1] = c->GPR2;  //a0 
  a[2] = c->GPR3;  //a1
  a[3] = c->GPR4;  //a2
  printf("strace: syscall[%d](%s): %lx %lx %lx\n",a[0],"sss",a[1],a[2],a[3]);

  switch (a[0]) {
    case 0: halt(a[1]);break;
    case 1: yield();break;
    case 2: do_open(c);break;
    case 3: do_read(c);break;
    case 4: do_write(c);break;
    case 7: do_close(c);break;
    case 8: do_lseek(c);break;
    case 9: do_brk(c);break;//printf("RET:%x\n",c->GPR2);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
