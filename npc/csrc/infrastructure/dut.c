

#include <dlfcn.h>

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <cstdio>

#include "../include/difftesting.h"

void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)(int port) = NULL;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

extern uint64_t cpu_gpr_set[33];
extern uint8_t pmem[0x50000];

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

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

  ref_difftest_memcpy(0x80000000,  pmem, img_size, DIFFTEST_TO_REF );

  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);

}





//static void checkregs(CPU_state *ref, vaddr_t pc) {
//  if (!isa_difftest_checkregs(ref, pc)) {
//    nemu_state.state = NEMU_ABORT;
//    nemu_state.halt_pc = pc;
//    isa_reg_display();
//  }
//}
//
//void difftest_step(vaddr_t pc, vaddr_t npc) {
//  CPU_state ref_r;
//
//  if (skip_dut_nr_inst > 0) {
//    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
//    if (ref_r.pc == npc) {
//      skip_dut_nr_inst = 0;
//      checkregs(&ref_r, npc);
//      return;
//    }
//    skip_dut_nr_inst --;
//    if (skip_dut_nr_inst == 0)
//      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
//    return;
//  }
//
//  if (is_skip_ref) {
//    // to skip the checking of an instruction, just copy the reg state to reference design
//    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
//    is_skip_ref = false;
//    return;
//  }
//
//  ref_difftest_exec(1);
//  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
//
//  checkregs(&ref_r, pc);
//}

uint64_t cpu_gpr_ref[33];

void cmpreg(){
  printf("in\n");
  ref_difftest_regcpy(&cpu_gpr_set, DIFFTEST_TO_REF);
  printf("out\n");
}


void cmpreg_0(){
  printf("in\n");
  ref_difftest_regcpy(&cpu_gpr_ref, DIFFTEST_TO_DUT);
  for (int i = 0; i < 32; i++) {
    printf("nemu.gpr=%lx\n" ,cpu_gpr_ref[i]);
  }

    printf("nemu.pc=%lx\n" ,cpu_gpr_ref[32]);
  printf("out\n");
}

void ref_diff_exec(uint64_t n){
 ref_difftest_exec(n);
} 
