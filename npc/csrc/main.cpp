#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"

#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)
				    
#include <fstream>
#include<iostream>
using namespace std;		

#include <cassert>
				    

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_22050612_npc* top;

static uint8_t pmem[0x50000];

uint32_t pmem_read(uint64_t addr){
  
  return *(uint32_t*)&pmem[addr-0x80000000];
}


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

void built_in_program(){
  *(uint32_t*)&pmem[0x00000000]=0x00100093;
  *(uint32_t*)&pmem[0x00000004]=0x00208113;
  *(uint32_t*)&pmem[0x00000008]=0x00310193;
  *(uint32_t*)&pmem[0x0000000c]=0x00418213;

  *(uint32_t*)&pmem[0x00000010]=0x00100073; //ebreak
}

void load_img() {
  ifstream ifs;
  ifs.open("./csrc/obj.bin",ios::in) ;
  if (!ifs.is_open()) cout << "文件打开失败" << endl;
  else cout<< "打开bin文件" <<endl;
  //ifs.read(pmem , 100);
  //cout << hex << pmem[2] <<endl;
}

void load1(){
  FILE *fp = fopen("./csrc/obj.bin", "rb");
  //assert(fp, "Can not open");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  cout << size <<endl;

  fseek(fp, 0, SEEK_SET);
  //for(int i=0;i<size;i++){
	  //int a = fread(pmem,1,1,fp);
	  //cout << pmem[0] <<endl;


  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  for(int i=0;i<size;i++)cout << hex <<(unsigned int) (unsigned char)pmem[i] <<endl;
  //assert(ret == 1);

  fclose(fp);
  //return size;
}
 
 

int i = 1;
void ebreak(){
  i = 0; 
}

int main() {
  
  //built_in_program();
  load1();

  sim_init();

  top->clk=0;top->rst=1;step_and_dump_wave();
  top->clk=1;top->rst=1;step_and_dump_wave();
  top->clk=0;top->rst=0;step_and_dump_wave();

  while(0){

  top->clk = 1;
  //top->Mr_val = pmem_read(top->Mr_addr);
  top->inst = pmem_read(top->pc);
  step_and_dump_wave();//top->eval();

  top->clk = 0;
  step_and_dump_wave();//top->eval();

  }
  sim_exit();
}
