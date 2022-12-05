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

#include <math.h>
#include <memory/paddr.h>     //zsl : add these two lines for geting value from dereference function

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUMBER, TK_NEXTLINE, TK_HEXNUMBER, TK_REG, DEREF

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
  {"0x[[:digit:][:lower:]]+", TK_HEXNUMBER},   // hex-number
  {"[0-9]+", TK_NUMBER},// number
  {"\\$..",  TK_REG},     // value of register
			
  {"\\\n", TK_NEXTLINE},// next line
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
  
  int j=0;                             //zsl:tokens position
  memset(tokens, 0 ,sizeof tokens);    //zsl:In case of getting expr continuously, tokens should be cleared everytime.

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

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
		case TK_HEXNUMBER:{
			 tokens[j].type=TK_HEXNUMBER;
			 for(int k=0;k<substr_len-2;k++){
				 tokens[j].str[k]=e[position-substr_len+k+2];
			 }
			 j++;nr_token++;
			 break;
		}
		case TK_REG:{
			tokens[j].type=TK_REG;
			bool regmatch = true;
			char reg_name[2];
			for(int j=0;j<2;j++){
				reg_name[j] = e[position-substr_len+j+1];
			}
			uint64_t value = isa_reg_str2val(reg_name,&regmatch);
			if(regmatch == false){
				printf("This reg name do not exist!!\n");
				//assert(0);
			}
			char val[128];
			sprintf(val,"%lx",value);
			//printf("val = %s \n",val);
			int length = strlen(val);
			//printf("%d\n",length);
			tokens[j].str[0]='0'; tokens[j].str[1]='x';
			for(int k=2;k<length+2;k++){
				tokens[j].str[k]=val[k-2];
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


  /* zsl:add dereference process.       */

#define deref_certain_type ('('||'+'||'-'||'*'||'/')

  for (int i = 0; i < nr_token; i ++) {
  	if (tokens[i].type == '*'){
		if(i==0){tokens[i].type = DEREF;}
		else {
			switch (tokens[i-1].type){
				case'(':  case'+':  case'-':
				case'*':  case'/': {tokens[i].type = DEREF;}
			}
		}
  	}
  }




  /* zsl:printf the expression the program got. */
  for(int j=0;j<=nr_token-1;j++){
 	 printf("%d:",tokens[j].type);
 	 printf("%s  ",tokens[j].str);
  }
  printf("\n");


  return 0;
}


//** zsl: evaluating the expression **//
//
//
//
//
//

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

bool check_deref(int p, int q){

	if(tokens[p].type==DEREF){ return true;}
	else {return false;} 
}

uint32_t eval(int p, int q){
	if(p>q){
		printf("bad expression");
		assert(0);
	}
	else if(p == q){
		uint64_t num = 0;
		if(tokens[p].type == TK_HEXNUMBER){
			//uint64_t num = atoi(tokens[p].str);
			//printf("ddd %ld\n",num);
			return 0;
		}
		else if(tokens[p].type == TK_NUMBER){
			num = atoi(tokens[p].str);
		}
		return num;
	}
	else if(check_deref(p,q)==true){
		uint64_t addr = eval(p+1,q);
	        uint64_t addrhex=0;
	       	for (int i=0;i<64;i++){
	       	  addrhex = addrhex+(addr%10)*pow(16,i);
	       	  addr = addr/10;
	       	}
		uint64_t value = paddr_read(addrhex,1);
		printf("aaa %lx\n", value);
		return value;
	}
        else if(check_parentheses(p,q) == true){
		return eval(p+1,q-1);


	}
        else {
		int op = main_operator(p,q);
		uint32_t val1 = eval(p, op-1);
		uint32_t val2 = eval(op+1, q);
		uint32_t result = 0;

		switch (tokens[op].type){
			case'+':{  result = val1 + val2; break;}  
                        case'-':{  result = val1 - val2; break;}
	                case'*':{  result = val1 * val2; break;}
                        case'/':{  result = val1 / val2; break;}
			default:  assert(0);
		}
		return result;
	}
}


int evaluation(char *e){
	uint32_t result = 0;
	expr(e,NULL);
	result = eval(0,nr_token-1);
	printf("The result is %u\n",result);

	return result;
}
