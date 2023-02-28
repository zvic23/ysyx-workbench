#ifndef __SDB_H__
#define __SDB_H__

#include <cstdint>

void one_cycle();
void execute(int n);
void dump_gpr();
uint32_t pmem_read(uint64_t addr);


void sdb_mainloop();

#endif
