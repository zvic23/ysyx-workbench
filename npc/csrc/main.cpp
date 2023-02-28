#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)
				    
#define GREEN "\33[1;32m"
#define RED   "\33[1;31m"
#define NONE  "\33[0m"                //zsl:offer color for printf





VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_22050612_npc* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vysyx_22050612_npc;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}




static uint8_t pmem[0x50000];

uint32_t pmem_read(uint64_t addr){
  return *(uint32_t*)&pmem[addr-0x80000000];
}

void built_in_program(){
  *(uint32_t*)&pmem[0x00000000]=0x00100093;
  *(uint32_t*)&pmem[0x00000004]=0x00208113;
  *(uint32_t*)&pmem[0x00000008]=0x00310193;
  *(uint32_t*)&pmem[0x0000000c]=0x00418213;

  *(uint32_t*)&pmem[0x00000010]=0x00100073; //ebreak
}


void load_img(){
  FILE *fp = fopen("./csrc/obj.bin", "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  //cout << size <<endl;

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  //for(int i=0;i<size;i++)cout << hex <<(unsigned int) (unsigned char)pmem[i] <<endl;

  fclose(fp);
}
 
void one_cycle(){
  //top->Mr_val = pmem_read(top->Mr_addr);
  
  
  top->inst = pmem_read(top->pc);
  step_and_dump_wave();
  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave(); 
  
  //step_and_dump_wave();//top->eval();
}	

int i = 1;
void ebreak(int r){
	if(r==0) printf(GREEN "HIT GOOD TRAP\n" NONE);
	else printf(RED "HIT BAD TRAP\n" NONE);
	i = 0;
}



    char buf[1024] = {0};
//    printf("请输入数据：");
//    char *str = fgets(buf, sizeof(buf) - 1, stdin); // fgets() is block
//    printf("buf : %s\n", buf);
//    printf("str : %s\n", str);
//    printf("len : %ld\n", strlen(buf));
void sdb_mainloop() {
  for (char *str; (str = fgets(buf, sizeof(buf) - 1, stdin)) != NULL; ) {
    char *str_end = str + strlen(str);
printf("buf : %s\n", buf);
    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }
//    int i;
//    for (i = 0; i < NR_CMD; i ++) {
//      if (strcmp(cmd, cmd_table[i].name) == 0) {
//        if (cmd_table[i].handler(args) < 0) { return; }
//        break;
//      }
//    }
//
//    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
  



int main() {
  if(1) load_img();
  else built_in_program();

  sim_init();

  top->clk=0;top->rst=1;step_and_dump_wave();
  top->clk=1;top->rst=1;step_and_dump_wave();
  top->clk=0;top->rst=0;step_and_dump_wave();

  while(i){
  sdb_mainloop();



  }
  sim_exit();
}
