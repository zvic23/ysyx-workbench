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
#include <memory/paddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
//  Log("Exercise: Please remove me in the source code and compile NEMU again.");
//  assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

//zsl:ftrace 
#ifdef CONFIG_FTRACE
struct func{
char name[20];
uint64_t addr_start;
uint64_t addr_end;
};
struct func functab[500];

void  __attribute__((optimize("O1")))   ftrace_elf_analysis(char *elf){
  FILE *fp_ftrace = fopen(elf, "rb");
  Assert(fp_ftrace, "ftrace:Can not open '%s'", elf);

  fseek(fp_ftrace, 40, SEEK_SET);
  uint64_t shoff;
  int a= fread(&shoff, 8, 1, fp_ftrace);
  assert(a == 1);
  printf("shoff=%ld\n",shoff);
 
  fseek(fp_ftrace, 58, SEEK_SET);
  uint16_t shentsize;
  a= fread(&shentsize, 2, 1, fp_ftrace);
  assert(a == 1);
  printf("shentsize=%d\n",shentsize);

  fseek(fp_ftrace, 60, SEEK_SET);
  uint16_t shnum;
  a= fread(&shnum, 2, 1, fp_ftrace);
  assert(a == 1);
  printf("shnum=%d\n",shnum);                       //get the offset,entsize and num of section header from elf header

  fseek(fp_ftrace, shoff+(shnum-2)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 24 , SEEK_CUR);
  uint64_t strtab_offset;
  a= fread(&strtab_offset, 8, 1, fp_ftrace);
  assert(a == 1);
  printf("strtab_offset=%lx\n",strtab_offset);

  fseek(fp_ftrace, shoff+(shnum-2)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 32 , SEEK_CUR);
  uint64_t strtab_size;
  a= fread(&strtab_size, 8, 1, fp_ftrace);
  assert(a == 1);
  printf("strtab_size=%lx\n",strtab_size);          //get the offset and size of string table from section header

  fseek(fp_ftrace, strtab_offset, SEEK_SET);
  char str[strtab_size];
  a= fread(&str, strtab_size, 1, fp_ftrace);
  assert(a == 1);
  int i=0;
  int po=1;
  while(po<=strtab_size-1){
  	printf("str=%s    ",&str[po]);
	po+=strlen(&str[po])+1;
  }
  printf("\n");                                      //get the string table

  fseek(fp_ftrace, shoff+(shnum-3)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 24 , SEEK_CUR);
  uint64_t symtab_offset;
  a= fread(&symtab_offset, 8, 1, fp_ftrace);
  assert(a == 1);
  printf("symtab_offset=%lx\n",symtab_offset);

  fseek(fp_ftrace, shoff+(shnum-3)*shentsize, SEEK_SET);
  fseek(fp_ftrace, 32 , SEEK_CUR);
  uint64_t symtab_size;
  a= fread(&symtab_size, 8, 1, fp_ftrace);
  assert(a == 1);
  printf("symtab_size=%lx\n",symtab_size);          //get the offset and size of symbol table from section header

  fseek(fp_ftrace, symtab_offset, SEEK_SET);
  int sym_type=0;
  int j=0;
  uint64_t k=0;
  for(i=0;i<symtab_size/24;i++){
        fseek(fp_ftrace, symtab_offset, SEEK_SET);
  	fseek(fp_ftrace, i*24+4, SEEK_CUR);
  	a= fread(&sym_type, 1, 1, fp_ftrace);
  	assert(a == 1);
	//printf("info  = %d  ",sym_type);
	if(sym_type == 18){
	        fseek(fp_ftrace, symtab_offset, SEEK_SET);
  		fseek(fp_ftrace, i*24, SEEK_CUR);
	  	a= fread(&k, 4, 1, fp_ftrace);
  		assert(a == 1);
		strcpy(functab[j].name , &str[k]);
  		fseek(fp_ftrace, 4, SEEK_CUR);
	  	a= fread(&k, 8, 1, fp_ftrace);
  		assert(a == 1);
		functab[j].addr_start = k;
	  	a= fread(&k, 8, 1, fp_ftrace);
		assert(a == 1);
		functab[j].addr_end = functab[j].addr_start + (k?(k-1):k);
		j++;
	}

  }                                               //get the function table

  for(i=0;i<j;i++){
 		printf("functab.name=%s   .addrstart=%lx   .addrend=%lx\n",
				functab[i].name,functab[i].addr_start,functab[i].addr_end);

  }                               //display the function table
  fclose(fp_ftrace);
}
#else
void  ftrace_elf_analysis(char *elf){
	printf("ftrace is off,please turn on in make menuconfig\n");
}
#endif


static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },

    {"ftrace"   , required_argument, NULL, 'f'},
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:f:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;

      case 'f': ftrace_elf_analysis(optarg);  break;

      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
