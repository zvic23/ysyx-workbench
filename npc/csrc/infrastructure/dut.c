#include <dlfcn.h>

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <cstdio>
#include <cstring>

#include "../include/difftesting.h"
#include "../include/generated/autoconf.h"

#ifdef CONFIG_DIFFTEST
void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)(int port) = NULL;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

extern uint64_t cpu_gpr_set[33];
extern uint8_t pmem[0x70000000];

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;



void init_difftest(long img_size, int port) {
  char ref_so_file[100]="/home/zsl/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void(*)(uint64_t,void*,size_t,bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void*,bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

//  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
//  assert(ref_difftest_raise_intr);

  ref_difftest_init= (void(*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("difftest is on , so_file is %s\n",ref_so_file);

  ref_difftest_init(port);

  printf("ininiin\n");
  uint8_t resetmem[0x4fffffff];
  memset(resetmem, 0, 0x4fffffff);
  printf("ininiin\n");
  ref_difftest_memcpy(0x80000000,  resetmem, 0x4fffffff, DIFFTEST_TO_REF );
  printf("ininiin\n");
  ref_difftest_memcpy(0x80000000,  pmem, img_size, DIFFTEST_TO_REF );

  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);

}

extern const char *regs[];
extern int npc_state;
void difftest_step() {
  uint64_t ref_r[33];

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  for(int i=0;i<33;i++){
	  if(ref_r[i] != cpu_gpr_set[i]){
		  printf("(%s) npc.gpr[%d]:%lx     nemu.gpr[%d]:%lx\n",regs[i],i,cpu_gpr_set[i],i,ref_r[i]);
		  npc_state = 3;
		  return;
	  }
  }
}




void syn_gpr(){
  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);
}
#else
void init_difftest(long img_size, int port){}
void difftest_step() {}
void syn_gpr(){}
#endif






/*
uint64_t cpu_gpr_ref[33];

void cmpreg(){
  printf("in\n");
  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);
  printf("out\n");
}


void cmpreg_0(){
 // printf("in\n");
  ref_difftest_regcpy(&cpu_gpr_ref, DIFFTEST_TO_DUT);
 // for (int i = 0; i < 32; i++) {
 //   printf("nemu.gpr=%lx\n" ,cpu_gpr_ref[i]);
 // }

 //   printf("nemu.pc=%lx\n" ,cpu_gpr_ref[32]);
 // printf("out\n");

  for(int i=0;i<33;i++){
	printf("npc.gpr[%d]:%lx     nemu.gpr[%d]:%lx\n",i,cpu_gpr_set[i],i,cpu_gpr_ref[i]);
  }
}

void ref_diff_exec(uint64_t n){
 ref_difftest_exec(n);
} 
*/

