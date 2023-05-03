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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

#include <memory/paddr.h>       //zsl: I add these
#include <math.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);


static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
  int i = atoi(arg);
  cpu_exec(i);
  return 0;
}


static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  if(strcmp(arg,"r") == 0){
	  printf("pc = %lx\n",cpu.pc);
	  isa_reg_display();
  }
  else if(strcmp(arg,"w") == 0){
	  wp_display();
  }

  return 0;
}


static int cmd_x(char *args){
  char *arg = strtok(NULL, " ");


    //char *str_end_x = arg + strlen(arg);

    /* extract the first token as the command */
    char *n = strtok(arg, " ");

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *pst = n + strlen(n) + 1;
    char *position = strtok(pst, " ");
    printf("%d and %d\n",atoi(n),atoi(position));


  //  long  a = atol(pst);
  //  long sum=0;


   //for (int i=0;i<8;i++){
   //  sum = sum+(a%10)*pow(16,i);
   //  a = a/10;
   //} 
   struct figure result = evaluation(pst);

   printf("%lx\n",result.value);
   for(int i=0;i<atoi(n);i++){
      uint32_t mem = paddr_read(result.value+i*4,4);
      printf("0x%lx: " "%08x  ",result.value+i*4,mem); 
   }
   printf("\n");


/*
    long  a = atol(pst);
    long sum=0;
   for (int i=0;i<8;i++){
     sum = sum+(a%10)*pow(16,i);
     a = a/10;
   } 
   printf("%lx\n",sum);
   // paddr_t address=  host_to_guest(position);
   for(int i=atoi(n)-1;i>=0;i--){
    printf("%lx  ",paddr_read( (sum+i),1)); 
   }
   printf("\n");
//    printf("%lx\n",paddr_read(atoi(position),atoi(n))); 
*/

return 0;
}


static int cmd_f(char *args){
  //char *arg = strtok(NULL, " ");
  expr(args,NULL); 

  return 0;
}
static int cmd_p(char *args){
  //char *arg = strtok(NULL, " ");
  struct figure result = evaluation(args); 
  char *sign = "0";
  if(result.sign == 1){sign = "-";}
  else{sign=" ";}
  printf("evaluated result is %s%lu   (hexdecimal:%s0x%lx)\n",sign,result.value,sign,result.value);

  return 0;
}


static int cmd_t(char *args){
  FILE *fp = fopen("tools/gen-expr/input", "r");
//  FILE *fp = fopen("../../../tools/gen-expr/input", "r");

  assert(fp != NULL);
  char test_expr_line[600];
  bool correct = true;

  for (int j=0;j<10;j++){
	  if (fgets(test_expr_line,600,fp) == NULL){
		  printf("read input fail");
	  }
	  char *test_result = strtok(test_expr_line," ");
	  char *test_expr = test_result + strlen(test_result) + 1;
	  struct figure result = evaluation(test_expr);
	  int nemu_result = result.value;
	  printf("Test result is %s\n",test_result);
	  if(nemu_result != atoi(test_result)){
		 correct = false;
	  } 
  }

  if (correct == false){
	  printf("\nthe result don't match !!!\n");
  }
  else {
	  printf("\nthe result match\n");
  }
  return 0;
}

static int cmd_w(char *args){
	setwp(args);
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


static int cmd_save(char *args){
        char path_pre[100] = "/home/zsl/snapshot/";	
	char *path = strcat(path_pre, args);
	FILE *p = fopen(path, "wb");
	if( p == NULL) printf("File %s open failed!\n",path);
	else{
extern uint64_t mepc,mcause,mstatus;
extern uint64_t mtvec;
		fwrite(&cpu, 33*8, 1, p);
		fwrite(&mtvec, 8, 1, p);
		fwrite(&mcause, 8, 1, p);
		fwrite(&mstatus, 8, 1, p);
		fwrite(&mepc, 8, 1, p);
	}
	fclose(p);
	return 0;
}

static int cmd_load(char *args){
	detach_difftest = 0;
	syn_state_to_ref();
	printf("difftest on!!\n");
	return 0;
}





static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Simple step execution", cmd_si },
  { "info", "Print program status", cmd_info },
  { "x", "Scan memory", cmd_x },

  { "f", "test expression gain", cmd_f },
  { "p", "expression evaluation", cmd_p },
  { "t", "test exprsstion evaluation", cmd_t },
  { "w", "set watchpoint", cmd_w },
  { "d", "delete watchpoint", cmd_d },
  { "dt", "turn off difftest", cmd_detach },
  { "at", "turn on difftest", cmd_attach },
  { "save", "save snapshot", cmd_save},
  { "load", "load snapshot", cmd_load},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

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

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
