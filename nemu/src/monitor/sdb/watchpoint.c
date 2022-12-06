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
  char expression[64] ;

  /* TODO: Add more members if necessary */

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
	printf("wp:%s\n",wp->expression);
	return;
}



void check_wpchange(){
	WP *c = head;
	for(c=head; c; c=c->next){

		evaluation(c->expression);
		//printf("wp:result=%ld\n",number.value);
	}
}

