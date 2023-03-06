#ifndef __TRACE_H__
#define __TRACE_H__

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cinttypes>
#include <cassert>

extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint32_t code, int nbyte);

void itrace(uint64_t pc , uint32_t inst_val);
void iringbuf_output();

void  __attribute__((optimize("O1")))   ftrace_elf_analysis();
//void ftrace_check(uint64_t pc,uint64_t dnpc,uint64_t dest_register,uint64_t src_register,uint64_t imm);
//void ftrace_check(int pc_up,int pc_lo,int dnpc_up,int dnpc_lo,int dest_register,int src_register,int imm_up, int imm_lo);

#endif
