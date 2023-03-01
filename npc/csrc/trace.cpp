#include "include/trace.h"


#define FMT_WORD "0x%016" PRIx64


#define QUEUE_ELEMENTS 15
#define QUEUE_SIZE (QUEUE_ELEMENTS + 1)
char Queue[QUEUE_SIZE][128];
static int QueueIn=0;
static int QueueOut=0;


void itrace(uint64_t pc , uint32_t inst_val){
  char logbuf[128];
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);

printf("p=%s\n",p-4);
  int ilen = 4;  //s->snpc - s->pc
  int i;
  uint8_t *inst = (uint8_t *)&inst_val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4 ;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, logbuf + sizeof(logbuf) - p,
      pc, (uint8_t *)inst_val, ilen);

	printf("pc=%lx , inst=%x \n",pc ,inst_val);
//zsl:iringbuf implement*************
    if(QueueIn == (( QueueOut + QUEUE_SIZE) % QUEUE_SIZE)){
	    for(int i=0;i<128;i++){
            	Queue[QueueIn][i] = logbuf[i];
	    }
            QueueOut = (QueueOut + 1) % QUEUE_SIZE;
            QueueIn = (QueueIn + 1) % QUEUE_SIZE;
    }
    else {
	    for(int i=0;i<128;i++){
            	Queue[QueueIn][i] = logbuf[i];
	    }
            QueueIn = (QueueIn + 1) % QUEUE_SIZE;
    }
}



//void itace_print(){
//  if((nemu_state.state == NEMU_END && nemu_state.halt_ret == 1) || nemu_state.state == NEMU_ABORT ){
//      printf("itrace :\n");
//      for(int i=0;i<QUEUE_SIZE;i++){
//	      printf("%s\n",Queue[(QueueOut+i)%QUEUE_SIZE]);
//      }
//  }
//}
