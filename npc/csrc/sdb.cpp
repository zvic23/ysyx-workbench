#include "sdb.h"
#include <cstdio>
#include <cstring>
#include <math.h>



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

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Simple step execution", cmd_si },
};

#define NR_CMD 3

    char buf[1024] = {0};
//    printf("请输入数据：");
//    char *str = fgets(buf, sizeof(buf) - 1, stdin); // fgets() is block
//    printf("buf : %s\n", buf);
//    printf("str : %s\n", str);
//    printf("len : %ld\n", strlen(buf));


void sdb_mainloop() {
    printf("sdb:");
  for (char *str; (str = fgets(buf, sizeof(buf) - 1, stdin)) != NULL; ) {
    str[strlen(str) - 1] = ' ';  //zsl:because fgets will add the "enter" to the end of the string, so here I changed it to "space" to satisfied the need of next code.

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
