#include "../include/sdb.h"
#include <cstdio>
#include <cstring>
#include <math.h>

#include "../include/generated/autoconf.h"


#include <readline/readline.h>
#include <readline/history.h>

#define YELLOW "\33[1;33m"
#define NONE  "\33[0m"    


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
	execute(-1);
	return 0;
}

static int cmd_q(char *args) {
  return -1;
}

extern int itrace_si;
static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
  int i = atoi(arg);
  itrace_si = 1;
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
      uint32_t mem = pmem_read(sum+i*4);
      printf(YELLOW "0x%lx: " NONE "%08x  ",sum+i*4,mem); 
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

};

#define NR_CMD 8

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
