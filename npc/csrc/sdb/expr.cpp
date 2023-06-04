#include "../include/sdb.h"  //zsl:connect the expr and watchpoint
#include <math.h>
#include <cstring>
#include <cstdio>
#include <cassert>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

uint64_t isa_reg_str2val(const char *s, bool *success) {
	extern uint64_t *cpu_gpr;
	uint64_t value = 0;
	int j =0;
	//if((s[0] == 'p') && (s[1] == 'c')){
	//	*success = true;
	//	value = cpu.pc;
	//	return value;
	//}
	for(j=0;j<32;j++){
		if((s[0] == regs[j][0])&&(s[1] == regs[j][1])){
			*success = true;
			value = cpu_gpr[j];
			break;
		}
	}
	//printf("j is %d\n",j);
	if(j == 32){*success = false;}
	return value;
  //return 0;
}




enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUMBER, TK_NEXTLINE, TK_HEXNUMBER, TK_REG, DEREF, TK_NOTEQ, TK_AND,  MINUS

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
  {"0x[[:digit:][a-f]+", TK_HEXNUMBER},   // hex-number
  {"[0-9]+", TK_NUMBER},// number
  {"\\$..",  TK_REG},   // value of register
  {"!=", TK_NOTEQ},     // not equal
  {"&&", TK_AND},       // logical and
			
  {"\\\n", TK_NEXTLINE},// next line
};

#define NR_REGEX 13

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
      //panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
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
        int substr_len = pmatch.rm_eo;

/*zsl:these three lines prinft information everytime the program found a matching-rule tokens*/
        //char *substr_start = e + position;
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
			sprintf(val,"%lx",value);               //zsl:transform the int(decimal) to char(hexadecimal)
			//printf("val = %s \n",val);
			int length = strlen(val);
			//printf("%d\n",length);

			//tokens[j].str[0]='0'; tokens[j].str[1]='x';
			for(int k=0;k<length;k++){
				tokens[j].str[k]=val[k];
			}

			j++;nr_token++;
			break;
		}
		case TK_EQ:{tokens[j].type=TK_EQ;j++;nr_token++;break;}
		case TK_NOTEQ:{tokens[j].type=TK_NOTEQ;j++;nr_token++;break;}
		case TK_AND:{tokens[j].type=TK_AND;j++;nr_token++;break;}
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


uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();

  /* zsl:add dereference sign.       */
  for (int i = 0; i < nr_token; i ++) {
  	if (tokens[i].type == '*'){
		if(i==0){tokens[i].type = DEREF;}
		else {
			switch (tokens[i-1].type){
				case'(':  case'+':  case'-':  case'*':  case'/': 
				case TK_EQ: case TK_NOTEQ: case TK_AND: {tokens[i].type = DEREF;}
			}
		}
  	}
  }

  /* zsl:add minus number sign.      */
   for (int i = 0; i < nr_token; i ++) {
  	if (tokens[i].type == '-'){
		if(i==0){tokens[i].type = MINUS;}
		else {
			switch (tokens[i-1].type){
				case'(':  case'+':  case'-':  case'*':  case'/':  case MINUS:
				case TK_EQ: case TK_NOTEQ: case TK_AND: {tokens[i].type = MINUS;}
			}
		}
  	}
  }

  /* zsl:printf the expression tokens the program got. */
//  for(int j=0;j<=nr_token-1;j++){
// 	 printf("%d:",tokens[j].type);
// 	 printf("%s  ",tokens[j].str);
//  }
//  printf("\n");


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
	int priority = 0;                //zsl: 3(&&)  2(== !=,such logical sign)   1(+  -)  0(*  /)   high priority sign have low value "priority"
	int mainoperator = 0;

	for(int j=p;j<=q;j++){
		if(tokens[j].type == '('){
			meetpare++;
		}
	        else if(tokens[j].type == ')'){
			if(meetpare == 0){
				printf("main_operator:paretheses not match\n");
			}
			meetpare--;
		}
		else if(meetpare == 0){
			if(tokens[j].type == TK_AND){
				priority = 3;
				mainoperator = j;
			}
			else if((priority <=2)&&(tokens[j].type == TK_EQ || tokens[j].type == TK_NOTEQ)){
				priority = 2;
				mainoperator = j;
			}
			else if((priority <= 1)&&(tokens[j].type == '+'||tokens[j].type == '-')){
				priority = 1;
				mainoperator = j;
			}
			else if((priority == 0)&&((tokens[j].type == '*')||(tokens[j].type == '/'))){
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


bool check_minus(int p, int q){
	if(tokens[p].type==MINUS){
		int t = p;                      //zsl: t saves the last one of a sequence of "minus"
		for(int j=1;j>0;j++){
			if(tokens[t+1].type!=MINUS){break;}
			t++;
		}
		if((t+1==q)||(check_parentheses(t+1,q))){return true;}
		else{return false;}
	}
	else{return false;}
}


//struct figure{
//	int sign;
//	uint64_t value;
//};


struct figure eval(int p, int q){
	if(p>q){
		printf("bad expression");
		assert(0);
	}
	else if(p == q){
		uint64_t num = 0;
		if(tokens[p].type == TK_HEXNUMBER||tokens[p].type == TK_REG){
			char *str_hexnum = tokens[p].str;              //zsl:transforming the string(hexadecimal number)  to  int(decimal number)
			int length = strlen(str_hexnum);
			//printf("str=%s\n",str_hexnum);
			//printf("len=%d\n",length);
			for(int j=0;j<length;j++){
				int bit =0;
				switch(tokens[p].str[j]){
					case'a':{bit=10;break;}
					case'b':{bit=11;break;}
					case'c':{bit=12;break;}
					case'd':{bit=13;break;}
					case'e':{bit=14;break;}
					case'f':{bit=15;break;}
					default:{char s = '0';s= tokens[p].str[j];
						bit=atoi(&s);break;}
				}
				num = num + bit*pow(16,(length-j-1)); 
			}
		}
		else if(tokens[p].type == TK_NUMBER){
			num = atoi(tokens[p].str);
		}
		struct figure number;
		number.sign = 0;
		number.value = num;
		//printf("num = %lx\n",num);
		return number;
	}
	else if((tokens[p].type==DEREF)&&((p+1==q)||(check_parentheses(p+1,q)))){   //zsl:dereference gets the value of an address
		struct figure address = eval(p+1,q);
		uint64_t addr = address.value;
	        uint64_t addrhex=0;
	       	for (int i=0;i<64;i++){
	       	  	addrhex = addrhex+(addr%10)*pow(16,i);
	       	  	addr = addr/10;
	       	}
		uint8_t value = pmem_read(addrhex);
		//printf("aaa %lx\n", value);
		struct figure number;
	        number.sign=0;
	        number.value=value;	
		return number;
	}
	else if(check_minus(p,q)){
		struct figure inclusion;
		int t = p;                      //zsl: t saves the last one of a sequence of "minus"
		for(int j=1;j>0;j++){
			if(tokens[t+1].type!=MINUS){break;}
			t++;
		}
		inclusion = eval(t+1,q);
		struct figure number;
		number.sign=1-(t-p)%2;
		if(inclusion.sign==1){number.sign=1-number.sign;}
		number.value=inclusion.value;
		return number;

	}
        else if(check_parentheses(p,q) == true){
		return eval(p+1,q-1);
	}
        else {
		int op = main_operator(p,q);
		struct figure number1 = eval(p, op-1);
		uint64_t val1 = number1.value;
		int sign1 = number1.sign;
		struct figure number2 = eval(op+1, q);
		uint64_t val2 = number2.value;
		int sign2 = number2.sign;
		uint64_t value = 0;
		int sign = 0;
		switch (tokens[op].type){
			case'+':{
					if(sign1 == sign2){
						value  = val1 + val2;
						sign = sign1;
					}
					else if(val1 > val2){
						value = val1 - val2;
						sign = sign1;
					}
					else if(val1 < val2){
						value = val2 - val1;
						sign = sign2;
					}
					else{value = 0;sign = 0;}
				       	break;
				}  
                        case'-':{  
					sign2 = 1-sign2;
					if(sign1 == sign2){
						value  = val1 + val2;
						sign = sign1;
					}
					else if(val1 > val2){
						value = val1 - val2;
						sign = sign1;
					}
					else if(val1 < val2){
						value = val2 - val1;
						sign = sign2;
					}
					else{value = 0;sign = 0;}
				       	break;
				}  
	                case'*':{  
					value  = val1 * val2;
					if(value == 0){sign = 0;}
					else if(sign1 != sign2){sign = 1;}
					else{sign = 0;}
				       	break;
				}
                        case'/':{  
					value  = val1 / val2; 
					if(value == 0){sign = 0;}
					else if(sign1 != sign2){sign = 1;}
					else{sign = 0;}
					break;
				}
                        case TK_EQ   :{  
				        if(sign1 == sign2){value = val1 == val2;}
				        else{value =0;}
					sign = 0;
					break;
				      }
                        case TK_NOTEQ:{  
					if(sign1 == sign2){value = val1 != val2;}
				        else{value =0;}
					sign = 0;
					break;
				      }
		    	case TK_AND  :{ 
					if(sign1 == sign2){value = val1 && val2;}
				        else{value =0;}
					sign = 0;
					break;
				      }
			default:  assert(0);
		}
		struct figure result;
		result.sign =sign;
		result.value=value;
		return result;
	}
}


struct figure evaluation(char *e){
     init_regex();
	expr(e,NULL);
	struct figure result = eval(0,nr_token-1);
	//char *sign = "0";                                //zsl:printf the evaluation result
	//if(result.sign == 1){sign = "-";}
	//else{sign=" ";}
	//printf("evaluated result is %s%lu   (hexdecimal:%s0x%lx)\n",sign,result.value,sign,result.value);
	return result;
}
