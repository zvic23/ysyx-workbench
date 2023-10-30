#ifndef __SDB_H__
#define __SDB_H__

#include <cstdint>

void one_cycle();
void execute(int n);
void dump_gpr();
uint32_t pmem_read(uint64_t addr);
uint64_t host_read(uint64_t addr, int len);


void sdb_mainloop();


struct figure{
	int sign;
	uint64_t value;
};

struct figure evaluation(char *e);

void setwp(char *expression);
int check_wpchange();
void wp_display();
void delwp(char *NO);



#endif
