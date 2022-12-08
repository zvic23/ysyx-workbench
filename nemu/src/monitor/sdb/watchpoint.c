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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expression[640] ;
  struct figure lastresult;

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(){
	WP *p = head;
	WP *q = free_;
	if(q == NULL){
		printf("no free watchpoint left!\n");
		assert(0);
	}
	free_ = q->next;
        q->next = p;
	head = q;
	return q;
}


void free_wp(WP *wp){
	WP *p = head;
	//WP *q = free_;
	if(p == wp){
		head = p->next;
		p->next = free_;
		free_ = p;
	}
	else{
		for(p = head; p ; p=p->next){
			if(p->next == wp){
				p->next = wp->next;
				break;
			}
		}
		wp->next = free_;
		free_ = wp;
	}
}



void setwp(char *expression){
	WP *wp = new_wp();
	int length = strlen(expression);
	for(int i=0;i<length;i++){
		wp->expression[i]=expression[i];
	}
	printf("Watchpoint %d: %s\n",wp->NO,wp->expression);
	return;
}


void delwp(char *NO){
	WP *c = head;
	WP *d = NULL;
	for(c=head; c ;c=c->next){
		if(c->NO == atoi(NO)){
			d = c;
			break;
		}
	}
	free_wp(d);
}



int check_wpchange(){
	WP *c = head;
	int stop_exec = 0;
	for(c=head; c; c=c->next){
		struct figure result =evaluation(c->expression);
		if(result.sign != c->lastresult.sign || result.value != c->lastresult.value){
			printf("watchpoint NO.%d (%s): %ld -> %ld    hex: 0x%lx -> 0x%lx\n",c->NO,c->expression,c->lastresult.value,result.value,c->lastresult.value,result.value);
			c->lastresult.sign = result.sign; 
			c->lastresult.value = result.value; 
			stop_exec = 1;
		}
		//printf("wp:result=%s\n",c->expression);
	}
	return stop_exec;
}


void wp_display(){
	WP *c = head;
	printf("NUM        What\n");
	for(c=head; c; c=c->next){
		printf("%d          %s\n",c->NO,c->expression);
	}	
}



