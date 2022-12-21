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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";


static int posi =0;



int choose(int n){
       int r = rand() % n + 0;//生成1~10的随机数
       return r;
}

void gen_num(){
	unsigned int r = rand() % 50 + 0;
	char rt[2];
	sprintf(rt,"%d",r);
	int length = strlen(rt);
	for (int j=0;j<=length-1;j++){
	          buf[j+posi]=rt[j];
	}
	posi = posi+length;
}

void gen_rand_op(){
	switch(choose(4)){
		case 0:{
                               buf[posi] = '+';
			       posi++;
			       break;
		       }
		case 1:{
                               buf[posi] = '-';
			       posi++;
			       break;

		       }
        	case 2:{
                               buf[posi] = '*';
			       posi++;
			       break;

		       }
        	case 3:{
                               buf[posi] = '/';
			       posi++;
			       break;
		       }
	}
}

void gen(int i){
	if(i == '('){
                buf[posi] = '(';
	        posi++;

	}

	else if(i ==')'){
                buf[posi] = ')';
	        posi++;	
        }
}

static void gen_rand_expr() {
	switch(choose(3)){
		case 0:{
			       gen_num();
			       break;
		       }
		case 1:{
			       gen('(');
			       gen_rand_expr();
			       gen(')');
			       break;
		       }
		default:{
				gen_rand_expr();
				gen_rand_op();
				gen_rand_expr();
				break;
			}
	}

  //buf[0] = '\0';
}









int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    posi = 0;
    memset (buf , 0 , sizeof buf);
    gen_rand_expr();
//    printf("%s\n",buf);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
