#include "verilated_dpi.h"            //zsl:for printf the gpr

#include "../include/generated/autoconf.h"
//#include "../include/common.h"

#include <sys/time.h>


uint8_t pmem[0x70000000];
extern uint64_t cpu_gpr_set[33];
extern uint64_t g_nr_guest_inst ;

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

int skip_difftest=0;

extern uint64_t time_init;
extern uint32_t i8042_data_io_handler();
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if(raddr>=0x80000000){
	if(raddr == 0xa0000048){                         //rtc support
		skip_difftest=1;
		//printf("rtc     \n");
		struct timeval time;
		gettimeofday(&time,NULL);
		uint64_t time_rtc = (time.tv_sec*1000000)+time.tv_usec - time_init;
		//printf("time:%lx\n",time_rtc);
		memcpy(rdata, &time_rtc, 8);
		return;
	}
	else if(raddr == 0xa0000060){                    //keyboard support
		skip_difftest=1;
		//printf("key     \n");
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
		//printf("uart     \n");
		putchar((char)wdata);
		return;
	}
	else if(waddr == 0xa0000104){                    //vga ctl support
		vgactl_port = 1;
		return; 
	}
	else if(waddr >= 0xa1000000 && waddr < 0xa1000000+400*300*4){    //vga vmem support
  		long long waddr_set = waddr & ~0x7ull;
  		for(int i=0;i<8;i++){
  		        if( (wmask>>i)&1 == 1){
  		      		vmem[waddr_set-0xa1000000+i]=(uint8_t)(wdata>>(i*8));
			}
  		}
		return;
	}


  	long long waddr_set = waddr & ~0x7ull;
  	for(int i=0;i<8;i++){
  	        if( (wmask>>i)&1 == 1){
  	      		pmem[waddr_set-0x80000000+i]=(uint8_t)(wdata>>(i*8));
		}
  	}

#ifdef CONFIG_MTRACE			
	if(waddr >= CONFIG_MTRACE_START && waddr <= CONFIG_MTRACE_END){
	  	printf("mtrace: write   addr:0x%llx(0x%llx)   data:0x%llx   wmask:%x     at pc=%lx    inst num=%ld\n",\
		waddr,waddr_set,wdata,wmask, cpu_gpr_set[32],g_nr_guest_inst);
	} 
#endif
  }
}



//void built_in_program(){
//  *(uint32_t*)&pmem[0x00000000]=0x00100093; //gpr[1](ra)+gpr[0]1
//  *(uint32_t*)&pmem[0x00000004]=0x00208113; //gpr[2](sp)+gpr[1]2
//  *(uint32_t*)&pmem[0x00000008]=0x00310193; //gpr[3](gp)+gpr[2]3
//  *(uint32_t*)&pmem[0x0000000c]=0x00418213; //gpr[4](tp)+gpr[3]4
//  *(uint32_t*)&pmem[0x00000010]=0x00100073; //ebreak
//}

//void built_in_program(){
//  *(uint32_t*)&pmem[0x00000000]=0x00100093; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x00000004]=0x00300113; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x00000008]=0x00500193; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x0000000c]=0x00700213; //gpr[1](ra)+1
//					    //
//  *(uint32_t*)&pmem[0x00000010]=0x00100013; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x00000014]=0x00100013; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x00000018]=0x00100013; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x0000001c]=0x00100013; //gpr[1](ra)+1
//					    //
//  *(uint32_t*)&pmem[0x00000020]=0x021102b3; //gpr[1](ra)+1
//  *(uint32_t*)&pmem[0x00000024]=0x02218333; //gpr[2](sp)+2
//  *(uint32_t*)&pmem[0x00000028]=0x023203b3; //gpr[3](gp)+3
//  *(uint32_t*)&pmem[0x0000002c]=0x02408433; //gpr[4](tp)+4
//  *(uint32_t*)&pmem[0x00000030]=0x00100073; //ebreak
//}

void built_in_program(){
  *(uint32_t*)&pmem[0x00000000]=0x00108093; //ra = ra + 1
  *(uint32_t*)&pmem[0x00000004]=0x00310113; //sp = sp + 3
  *(uint32_t*)&pmem[0x00000008]=0x00518193; //gp = gp + 5
  *(uint32_t*)&pmem[0x0000000c]=0x00720213; //tp = tp + 7
					    //
  *(uint32_t*)&pmem[0x00000010]=0x00400593; //a1 = $0 + 4
  *(uint32_t*)&pmem[0x00000014]=0x00100013; //give $0 the "1",it equals invalid operation
  *(uint32_t*)&pmem[0x00000018]=0x00100013; //in order to give the gprs time to write
  *(uint32_t*)&pmem[0x0000001c]=0x00100013; //
					    //
  *(uint32_t*)&pmem[0x00000020]=0x021102b3; //t0 = ra * sp
  *(uint32_t*)&pmem[0x00000024]=0x02218333; //t1 = sp * gp
  *(uint32_t*)&pmem[0x00000028]=0x023203b3; //t2 = gp * tp
  *(uint32_t*)&pmem[0x0000002c]=0x02408433; //s0 = ra * tp
					    
  *(uint32_t*)&pmem[0x00000030]=0xfe1581e3; //beq ra a1
  //*(uint32_t*)&pmem[0x00000030]=0xfd1ff56f; //jal   80000000
  //*(uint32_t*)&pmem[0x00000030]=0xfe1ff56f; //jal   80000010
  //*(uint32_t*)&pmem[0x00000030]=0xff1ff56f; //jal   80000020

  *(uint32_t*)&pmem[0x00000034]=0x00100073; //ebreak
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
