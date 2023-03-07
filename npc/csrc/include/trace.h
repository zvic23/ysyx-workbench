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
void itrace_printf_once();

void  __attribute__((optimize("O1")))   ftrace_elf_analysis();


#endif
