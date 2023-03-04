/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>


struct diff_context_t {
  word_t gpr[32];
  word_t pc;
};


void set_regs(void *diff_context){
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for (int i = 0; i < 32; i++) {
    cpu.gpr[i] = ctx->gpr[i];
    //printf("nemu.gpr=%lx,   npc.gpr=%lx\n",cpu.gpr[i],ctx->gpr[i]);
  }
  cpu.pc = ctx->pc;
    //printf("nemu.pc=%lx,   npc.pc=%lx\n",cpu.pc,ctx->pc);
}
void get_regs(void* diff_context) {
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for (int i = 0; i < 32; i++) {
    ctx->gpr[i] = cpu.gpr[i];
    printf("nemu.gpr=%lx,   npc.gpr=%lx\n",cpu.gpr[i],ctx->gpr[i]);
  }
  ctx->pc = cpu.pc;
    printf("nemu.pc=%lx,   npc.pc=%lx\n",cpu.pc,ctx->pc);
}




void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    memcpy(guest_to_host(addr), buf, n);
  } else {
    assert(0);
  }
  //assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    set_regs(dut);
  } else {
    get_regs(dut);
  }
  //assert(0);
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
  //assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
	init_mem();   //zsl: at <memory/paddr.h>, I add the function's declare.


  /* Perform ISA dependent initialization. */
  init_isa();
}
