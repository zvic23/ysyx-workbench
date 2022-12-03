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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUMBER, TK_NEXTLINE

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal

  {"\\-", '-'},         // subtract
  {"\\*", '*'},         // times
  {"/",   '/'},         // division
  {"\\(",  '('},        // left bracket
  {"\\)",  ')'},        // right bracket
  {"[0-9]+", TK_NUMBER},// number
			
  {"\\\n", TK_NEXTLINE},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[640] __attribute__((used)) = {};
//static Token tokens[32] __attribute__((used)) = {};

static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  nr_token = 0;
  
  int j=0;     //zsl:tokens position
  memset(tokens, 0 ,sizeof tokens);

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        //char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
		case TK_NUMBER:{
		         tokens[j].type=TK_NUMBER; 
			 for(int k=0;k<substr_len;k++){
			 tokens[j].str[k]=e[position-substr_len+k];
			 }
			 j++;nr_token++;
			 break;
		}
	        case '+': {tokens[j].type='+';j++;nr_token++;break;}
                case '-': {tokens[j].type='-';j++;nr_token++;break;}
                case '*': {tokens[j].type='*';j++;nr_token++;break;}
                case '/': {tokens[j].type='/';j++;nr_token++;break;}
                case '(': {tokens[j].type='(';j++;nr_token++;break;}
                case ')': {tokens[j].type=')';j++;nr_token++;break;}
         // default: TODO();
        }
        break;
      }

    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();

  /* zsl:printf the expression the program got. */
//  for(int j=0;j<=nr_token-1;j++){
//  printf("%d:",tokens[j].type);
//  printf("%s  ",tokens[j].str);
//  }
//  printf("\n");


  return 0;
}




int main_operator(int p, int q){
	int meetpare = 0;
	int addorsub = 0;
	int mainoperator = 0;

	for(int j=p;j<=q;j++){
		if(tokens[j].type == '('){
			meetpare++;
		}
	        else if(tokens[j].type == ')'){
			if(meetpare == 0){
				printf("main_operator(169):paretheses not match\n");
			}
			meetpare--;
		}
		else if(meetpare == 0){
			if((tokens[j].type == '+')||(tokens[j].type == '-')){
				addorsub = 1;
				mainoperator = j;
			}
			else if((addorsub == 0)&&((tokens[j].type == '*')||(tokens[j].type == '/'))){
                            	mainoperator = j;
			}
		}
	}

	return mainoperator;
}

bool check_parentheses(int p, int q){
	int match = 0; 

	if((tokens[p].type != '(')||(tokens[q].type != ')')){
		//printf("check_parentheses fail!!!\n");
	        return false;
	}
	else{ 
		for(int j=p+1;j<q;j++){
	               if(tokens[j].type == '('){
		             match++;
	               }
	               else if(tokens[j].type == ')'){
		             match--;
	               }
	               if(match < 0){
		             //printf("check_paretheses fail on the two side not match\n");
		             //assert(0);
		             return false;
	               }
	        }
                return true;
	}
}

int eval(int p, int q){
	if(p>q){
		printf("bad expression");
		assert(0);
	}
	else if(p == q){
		return atoi(tokens[p].str);

	}
        else if(check_parentheses(p,q) == true){
		return eval(p+1,q-1);


	}
        else {
		int op = main_operator(p,q);
		int val1 = eval(p, op-1);
		int val2 = eval(op+1, q);

		switch (tokens[op].type){
			case'+':  return val1 + val2;
                        case'-':  return val1 - val2;
	                case'*':  return val1 * val2;
                        case'/':  return val1 / val2;
			default:  assert(0);
		}
	}

}


void evaluation(char *e){
	int result = 0;
	expr(e,NULL);
	result = eval(0,nr_token-1);
	printf("The result is %d\n",result);
}
