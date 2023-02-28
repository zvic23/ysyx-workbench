#include "sdb.h"
#include <cstdio>
#include <cstring>
#include <math.h>

#define YELLOW "\33[1;33m"
#define NONE  "\33[0m"    

static int cmd_c(char *args){
	execute(-1);
	return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
  int i = atoi(arg);
  execute(i);
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  if(strcmp(arg,"r") == 0){
	  //printf("pc = %lx\n",cpu.pc);
	  //isa_reg_display();
	  dump_gpr();
  }
  else if(strcmp(arg,"w") == 0){
	  //wp_display();
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
   for (int i=0;i<8;i++){
     sum = sum+(a%10)*pow(16,i);
     a = a/10;
   } 
   //printf("%lx\n",sum);
   for(int i=0;i<atoi(n);i++){
      uint32_t mem = pmem_read(sum+i*4);
      printf(YELLOW "0x%lx: " NONE "%08x  ",sum+i*4,mem); 
   }
   printf("\n");

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
};

#define NR_CMD 5

char buf[1024] = {0};

void sdb_mainloop() {
    printf("sdb:");
  for (char *str; (str = fgets(buf, sizeof(buf) - 1, stdin)) != NULL; ) {
    str[strlen(str) - 1] = ' ';  //zsl:because fgets() will add the "enter" to the end of the string, so here I changed it to "space" to satisfied the need of next code.

    char *str_end = str + strlen(str);
    //printf("buf : %s\n", buf);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }
    //printf("cmd : %s   ", cmd);

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }
    //printf("args : %s\n", args);
    
    
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    printf("sdb:");
  }
}
