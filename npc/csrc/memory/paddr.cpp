#include "verilated_dpi.h"            //zsl:for printf the gpr

#include "../include/generated/autoconf.h"
//#include "../include/common.h"

#include <sys/time.h>

int skip_difftest=0;

uint8_t pmem[0x70000000];

uint32_t pmem_read(uint64_t addr){
  return *(uint32_t*)&pmem[addr-0x80000000];
}



uint64_t host_read(uint64_t addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)&pmem[addr-0x80000000];
    case 2: return *(uint16_t *)&pmem[addr-0x80000000];
    case 4: return *(uint32_t *)&pmem[addr-0x80000000];
    case 8: return *(uint64_t *)&pmem[addr-0x80000000];
    default: assert(0);
  }
}

void host_write(uint64_t addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)&pmem[addr-0x80000000] = data; return;
    case 2: *(uint16_t *)&pmem[addr-0x80000000] = data; return;
    case 4: *(uint32_t *)&pmem[addr-0x80000000] = data; return;
    case 8: *(uint64_t *)&pmem[addr-0x80000000] = data; return;
    default: assert(0);
  }
}




extern "C" void pmem_read_pc(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=0x80000000){
  	long long raddr_set = raddr & ~0x7ull;
	memcpy(rdata, &pmem[raddr_set-0x80000000], 8);
  }
}

extern uint64_t time_init;
extern uint32_t i8042_data_io_handler();
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=0x80000000){
	if(raddr == 0xa0000048){                         //rtc support
		skip_difftest=1;
		struct timeval time;
		gettimeofday(&time,NULL);
		uint64_t time_rtc = (time.tv_sec*1000000)+time.tv_usec - time_init;
		memcpy(rdata, &time_rtc, 8);
		return;
	}
	else if(raddr == 0xa0000060){                    //keyboard support
		skip_difftest=2;
		uint64_t key = i8042_data_io_handler();
		//if(key)printf("key = %lx\n",key);
		memcpy(rdata, &key, 8);
		return;
	}


  	long long raddr_set = raddr & ~0x7ull;
	memcpy(rdata, &pmem[raddr_set-0x80000000], 8);
#ifdef CONFIG_MTRACE	
	long long rdata_printf;
	memcpy(&rdata_printf, &pmem[raddr_set-0x80000000], 8);
	if(raddr >= CONFIG_MTRACE_START && raddr <= CONFIG_MTRACE_END){
	  	printf("mtrace: read    addr:0x%llx(0x%llx)   data:0x%llx \n",\
		raddr,raddr_set,rdata_printf);
	} 
#endif
  }
}

extern int vgactl_port;
extern uint8_t vmem[400*300*4];
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  if(waddr>=0x80000000){
	if(waddr == 0xa00003f8){                         //uart support
		skip_difftest=1;
		putchar((char)wdata);
		return;
	}
	else if(waddr == 0xa0000104){                    //vga ctl support
		vgactl_port = 1;
	}
	else if(waddr >= 0xa1000000 && waddr < 0xa1000000+400*300*4){    //vga vmem support
  		long long waddr_set = waddr & ~0x7ull;
  		for(int i=0;i<8;i++){
  		        if( (wmask>>i)&1 == 1){
  		      		vmem[waddr_set-0xa1000000+i]=(uint8_t)(wdata>>(i*8));
			}
  		}
	}


  	long long waddr_set = waddr & ~0x7ull;
  	for(int i=0;i<8;i++){
  	        if( (wmask>>i)&1 == 1){
  	      		pmem[waddr_set-0x80000000+i]=(uint8_t)(wdata>>(i*8));
		}
  	}

#ifdef CONFIG_MTRACE			
	if(waddr >= CONFIG_MTRACE_START && waddr <= CONFIG_MTRACE_END){
	  	printf("mtrace: write   addr:0x%llx(0x%llx)   data:0x%llx   wmask:%x\n",\
		waddr,waddr_set,wdata,wmask);
	} 
#endif
  }
}



void built_in_program(){
  *(uint32_t*)&pmem[0x00000000]=0x00100093;
  *(uint32_t*)&pmem[0x00000004]=0x00208113;
  *(uint32_t*)&pmem[0x00000008]=0x00310193;
  *(uint32_t*)&pmem[0x0000000c]=0x00418213;
  *(uint32_t*)&pmem[0x00000010]=0x00100073; //ebreak
}


uint64_t img_size;
void load_img(){
  FILE *fp = fopen("./csrc/obj.bin", "rb");

  fseek(fp, 0, SEEK_END);
  img_size = ftell(fp);
  //cout << size <<endl;

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, img_size, 1, fp);
  //for(int i=0;i<size;i++)cout << hex <<(unsigned int) (unsigned char)pmem[i] <<endl;

  fclose(fp);
}
