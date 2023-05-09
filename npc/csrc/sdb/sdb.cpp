#include "../include/sdb.h"
#include <cstdio>
#include <cstring>
#include <cassert>
#include <math.h>

#include "../include/generated/autoconf.h"


#include <readline/readline.h>
#include <readline/history.h>

#define YELLOW "\33[1;33m"
#define NONE  "\33[0m"    


extern int npc_state;

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}


static int cmd_c(char *args){
	if(npc_state == 0 ||npc_state == 1){
		npc_state = 0;
	}
	execute(-1);
	return 0;
}

static int cmd_q(char *args) {
  return -1;
}

extern int itrace_si;
static int cmd_si(char *args) {
  if(npc_state == 0 ||npc_state == 1){
	npc_state = 0;
  }  	
  char *arg = strtok(NULL, " ");
  int i = atoi(arg);
  if(i <= 50)itrace_si = 1;
  execute(i);
  itrace_si = 0;
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  if(strcmp(arg,"r") == 0){
	  dump_gpr();
  }
  else if(strcmp(arg,"w") == 0){
	  wp_display();
  }
  return 0;
}


static int cmd_x(char *args){
  char *arg = strtok(NULL, " ");

    /* extract the first token as the command */
    char *n = strtok(arg, " ");

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *pst = n + strlen(n) + 1;
    char *position = strtok(pst, " ");
    //printf("%d and %d\n",atoi(n),atoi(position));

    long  a = atol(pst);
    long sum=0;
   //for (int i=0;i<8;i++){
   //  sum = sum+(a%10)*pow(16,i);
   //  a = a/10;
   //} 
   struct figure result = evaluation(pst);

   printf("%lx\n",result.value);
   for(int i=0;i<atoi(n);i++){
      uint32_t mem = host_read(result.value+i*4,4);
      printf(YELLOW "0x%lx: " NONE "%08x  ",result.value+i*4,mem); 
   }
   printf("\n");

return 0;
}

static int cmd_p(char *args){
  //char *arg = strtok(NULL, " ");
  struct figure result = evaluation(args); 
  char sign = '0';
  if(result.sign == 1){sign = '-';}
  else{sign=' ';}
  printf("evaluated result is %s%lu   (hexdecimal:%s0x%lx)\n",&sign,result.value,&sign,result.value);

  return 0;
}

static int cmd_w(char *args){
#ifndef CONFIG_WATCHPOINT
	printf("please turn on the watchpoint at make menuconfig\n");
#else
	setwp(args);
#endif
	return 0;
}

static int cmd_d(char *args){
	delwp(args);
	return 0;
}


int detach_difftest = 0;
static int cmd_detach(char *args){
	detach_difftest = 1;
	printf("difftest off!!\n");
	return 0;
}

extern void syn_state_to_ref();
static int cmd_attach(char *args){
	detach_difftest = 0;
	syn_state_to_ref();
	printf("difftest on!!\n");
	return 0;
}

extern uint8_t pmem[0x70000000];
extern uint64_t cpu_gpr_set[33];
extern uint64_t mepc,mcause,mstatus;
extern uint64_t mtvec;
static int cmd_save(char *args){
        char path_pre[100] = "/home/zsl/snapshot/";	
	char *path = strcat(path_pre, args);
	FILE *p = fopen(path, "wb");
	if( p == NULL) printf("File %s open failed!\n",path);
	else{
		fwrite(&cpu_gpr_set, 33*8, 1, p);
		fseek(p, 40*8, SEEK_SET);
		fwrite(&mtvec, 8, 1, p);
		fwrite(&mcause, 8, 1, p);
		fwrite(&mstatus, 8, 1, p);
		fwrite(&mepc, 8, 1, p);
		fseek(p, 50*8, SEEK_SET);
		fwrite(pmem, 0x7ffffff, 1, p);
	}
	fclose(p);
	return 0;
}

static int cmd_load(char *args){
        char path_pre[100] = "/home/zsl/snapshot/";	
	char *path = strcat(path_pre, args);
	FILE *p = fopen(path, "rb");
	if( p == NULL) printf("File %s open failed!\n",path);
	else{
		int done = fread(&cpu_gpr_set, 33*8, 1, p);
		assert(done);
		fseek(p, 40*8, SEEK_SET);
		done = fread(&mtvec, 8, 1, p);
		assert(done);
		done = fread(&mcause, 8, 1, p);
		assert(done);
		done = fread(&mstatus, 8, 1, p);
		assert(done);
		done = fread(&mepc, 8, 1, p);
		assert(done);
		fseek(p, 50*8, SEEK_SET);
		done = fread(pmem, 0x7ffffff, 1, p);
		assert(done);
	}
	fclose(p);
	return 0;
}











static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Simple step execution", cmd_si },
  { "info", "Print program status", cmd_info },
  { "x", "Scan memory", cmd_x },
  { "p", "expression evaluation", cmd_p },
  { "w", "set watchpoint", cmd_w },
  { "d", "delete watchpoint", cmd_d },
  { "dt", "turn off difftest", cmd_detach },
  { "at", "turn on difftest", cmd_attach },
  { "save", "save snapshot", cmd_save},
  { "load", "load snapshot", cmd_load},

};

#define NR_CMD 12

char buf[1024] = {0};

void sdb_mainloop() {
  for (char *str; (str = rl_gets()) != NULL; ) {

    char *str_end = str + strlen(str);

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
    
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
