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
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	for(int i=0;i<32;i++){
		printf("%s = %lx ,  ",regs[i],cpu.gpr[i]);

	}

		printf("\n");

}

word_t isa_reg_str2val(const char *s, bool *success) {
	uint64_t value = 0;
	//char reg_name[4];
	//sprintf(reg_name ,"%s",s);
	//char *name = "00";
	//char name[1];
	//sprintf(name[0], "%s",reg_name);
	//name[0]=reg_name[1];
	//name[1]=reg_name[1];
	
        char *name = "0000";
	strcpy(name,s);
	int j =0;
	//int i;

	printf("reg is %s\n",s);
	for(j=0;j<32;j++){
		if(strcmp(name ,regs[j])==0){
			//*success = true;
			value = cpu.gpr[j];
	printf("j is %d\n",j);

			break;
		}
	}
	printf("j is %d\n",j);
	return value;
  //return 0;
}
