#include <common.h>
#include "syscall.h"

#include <fs.h>
#include <sys/time.h>
#include <proc.h>

extern void naive_uload(PCB *pcb, const char *filename);
void do_exit(Context *c) {
  naive_uload(NULL, "/bin/nterm");
  //halt(c->GPR2);
  //halt(0);
}

void do_write(Context *c) {
  fs_write(c->GPR2, (void*)c->GPR3, c->GPR4);
  c->GPRx = c->GPR4;
}

void do_brk(Context *c) {
  c->GPRx = 0;
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

void do_execve(Context *c) {
  naive_uload(NULL, (const char*)c->GPR2);
}

void do_gettimeofday(Context *c) {
  if(c->GPR2 == 0) {
	  c->GPRx = io_read(AM_TIMER_UPTIME).us;
  }
  else if(c->GPR2 == 1) {
	  c->GPRx = io_read(AM_TIMER_UPTIME).us / 1000000;
  }
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;  //a7 type
  a[1] = c->GPR2;  //a0 
  a[2] = c->GPR3;  //a1
  a[3] = c->GPR4;  //a2
  if(0){
  char *sys_name[]={"SYS_exit","SYS_yield","SYS_open","SYS_read","SYS_write","SYS_kill","SYS_getpid","SYS_close","SYS_lseek","SYS_brk","SYS_fstat","SYS_time","SYS_signal","SYS_execve","SYS_fork","SYS_link","SYS_unlink","SYS_wait","SYS_times","SYS_gettimeofday" };
  switch (a[0]){
    case 3: case 4: case 7: case 8: {printf("strace: syscall[%d](%s): %lx %lx %lx\n",a[0],sys_name[a[0]],a[1],a[2],a[3]);break;}
    default: printf("strace: syscall[%d](%s): %lx %lx %lx\n",a[0],sys_name[a[0]],a[1],a[2],a[3]);
  }
  }

  switch (a[0]) {
    case 0: do_exit(c);break;
    case 1: yield();break;
    case 2: do_open(c);break;
    case 3: do_read(c);break;
    case 4: do_write(c);break;
    case 7: do_close(c);break;
    case 8: do_lseek(c);break;
    case 9: do_brk(c);break;//printf("RET:%x\n",c->GPR2);break;
    case 13: do_execve(c);break;
    case 19: do_gettimeofday(c);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
