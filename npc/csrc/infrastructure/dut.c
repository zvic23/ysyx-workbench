#include <dlfcn.h>

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <cstdio>

#include <cstring>
#include <cstdlib>

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

  uint8_t *resetmem = (uint8_t*)malloc(0x7ffffff);
  memset(resetmem, 0, 0x7ffffff);
  ref_difftest_memcpy(0x80000000,  resetmem, 0x7ffffff, DIFFTEST_TO_REF );
  ref_difftest_memcpy(0x80000000,  pmem, img_size, DIFFTEST_TO_REF );
free(resetmem);
  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);

}


void syn_state_to_ref(){    //zsl:i add this function
  uint64_t csr_buf[33];
extern uint64_t mepc,mcause,mstatus;
extern uint64_t mtvec;
  csr_buf[10] = mtvec;    csr_buf[11] = mcause;  
  csr_buf[12] = mstatus;  csr_buf[13] = mepc;
  csr_buf[32] = 0x80000000;
  //printf("csr: %lx  %lx  %lx  %lx\n",mtvec,mcause,mstatus,mepc);
  uint32_t buf[4];
  buf[0]=0x30551073;     //  0x305 01010 001 00000 1110011    0x30551073
  buf[1]=0x34259073;     //  0x342 01011 001 00000 1110011    0x34259073
  buf[2]=0x30061073;     //  0x300 01100 001 00000 1110011    0x30061073
  buf[3]=0x34169073;     //  0x341 01101 001 00000 1110011    0x34169073
  ref_difftest_memcpy(0x80000000, buf, 16, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&csr_buf, DIFFTEST_TO_REF);
  ref_difftest_exec(15);
  //ref_difftest_exec(4);

  ref_difftest_memcpy(0x80000000, pmem, 0x7ffffff, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);
}




extern uint64_t wb_pc;

extern const char *regs[];
extern int npc_state;
extern int detach_difftest;
void difftest_step() {
  if(detach_difftest == 1) return;

  uint64_t ref_r_old[33];
  ref_difftest_regcpy(&ref_r_old, DIFFTEST_TO_DUT);

  uint64_t ref_r[33];
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);


	  //printf("(pc)   npc.pc:%lx  nemu.pc:%lx\n",wb_pc,ref_r_old[32]);

  for(int i=0;i<32;i++){
	  if(ref_r[i] != cpu_gpr_set[i]){
		  printf("(%s) npc.gpr[%d]:%lx     nemu.gpr[%d]:%lx   npc.pc:%lx  nemu.pc:%lx\n",regs[i],i,cpu_gpr_set[i],i,ref_r[i]    , wb_pc,ref_r[32]);
		  //printf("(%s) npc.gpr[%d]:%lx     nemu.gpr[%d]:%lx   npc.pc:%lx  nemu.pc:%lx\n",regs[i],i,cpu_gpr_set[i],i,ref_r[i]    , cpu_gpr_set[32],ref_r[32]);
		  npc_state = 3;
		  return;
	  }
  }
  if(wb_pc != (ref_r_old[32])) {
	  printf("(pc)   npc.pc:%lx  nemu.pc:%lx\n",wb_pc,ref_r_old[32]);
		  npc_state = 3;
		  return;
	  }

}




void syn_gpr(){
  if(detach_difftest == 1) return;
  uint64_t cpu_gpr_set_old_pc[33];
  memcpy(cpu_gpr_set_old_pc,cpu_gpr_set,256);
  cpu_gpr_set_old_pc[32] = wb_pc+4;
  ref_difftest_regcpy(&cpu_gpr_set_old_pc, DIFFTEST_TO_REF);
}


#else
void init_difftest(long img_size, int port){}
void difftest_step() {}
void syn_state_to_ref(){} 
void syn_gpr(){}
#endif

