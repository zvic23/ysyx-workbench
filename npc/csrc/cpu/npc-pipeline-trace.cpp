#include "verilated_dpi.h"            //zsl:for printf the gpr

#include "../include/generated/autoconf.h"
#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"



#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)


extern Vysyx_22050612_npc* top;
#ifdef CONFIG_PIPELINETRACE
long long A[20],B[20],C[20],D[20],E[20],F[20];
void IFU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A,152);
	memcpy(&A[1],z,152);
	A[0] = a;
	memcpy(z,B,152);
	memcpy(&B[1],z,152);
	B[0] = b;
	memcpy(z,C,152);
	memcpy(&C[1],z,152);
	C[0] = c;
	memcpy(z,D,152);
	memcpy(&D[1],z,152);
	D[0] = d;
}


long long A1[20],B1[20],C1[20],D1[20],E1[20],F1[20];
void IDU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A1,152);
	memcpy(&A1[1],z,152);
	A1[0] = a;
	memcpy(z,B1,152);
	memcpy(&B1[1],z,152);
	B1[0] = b;
	memcpy(z,C1,152);
	memcpy(&C1[1],z,152);
	C1[0] = c;
	memcpy(z,D1,152);
	memcpy(&D1[1],z,152);
	D1[0] = d;
}

long long A2[20],B2[20],C2[20],D2[20],E2[20],F2[20];
void EXU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A2,152);
	memcpy(&A2[1],z,152);
	A2[0] = a;
	memcpy(z,B2,152);
	memcpy(&B2[1],z,152);
	B2[0] = b;
	memcpy(z,C2,152);
	memcpy(&C2[1],z,152);
	C2[0] = c;
	memcpy(z,D2,152);
	memcpy(&D2[1],z,152);
	D2[0] = d;
	memcpy(z,E2,152);
	memcpy(&E2[1],z,152);
	E2[0] = e;
	memcpy(z,F2,152);
	memcpy(&F2[1],z,152);
	F2[0] = f;
}

long long A3[20],B3[20],C3[20],D3[20],E3[20],F3[20];
void MEM_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A3,152);
	memcpy(&A3[1],z,152);
	A3[0] = a;
	memcpy(z,B3,152);
	memcpy(&B3[1],z,152);
	B3[0] = b;
	memcpy(z,C3,152);
	memcpy(&C3[1],z,152);
	C3[0] = c;
	memcpy(z,D3,152);
	memcpy(&D3[1],z,152);
	D3[0] = d;
	memcpy(z,E3,152);
	memcpy(&E3[1],z,152);
	E3[0] = e;
	memcpy(z,F3,152);
	memcpy(&F3[1],z,152);
	F3[0] = f;
}

long long A4[20],B4[20],C4[20],D4[20],E4[20],F4[20];
void WBU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A4,152);
	memcpy(&A4[1],z,152);
	A4[0] = a;
	memcpy(z,B4,152);
	memcpy(&B4[1],z,152);
	B4[0] = b;
	memcpy(z,C4,152);
	memcpy(&C4[1],z,152);
	C4[0] = c;
	memcpy(z,D4,152);
	memcpy(&D4[1],z,152);
	D4[0] = d;
	memcpy(z,E4,152);
	memcpy(&E4[1],z,152);
	E4[0] = e;
	memcpy(z,F4,152);
	memcpy(&F4[1],z,152);
	F4[0] = f;
}

long long A5[20],B5[20],C5[20],D5[20],E5[20],F5[20],G5[20],H5[20],I5[20],J5[20],K5[20],L5[20],M5[20],N5[20],O5[20],P5[20];
void ICACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){
	long long z[19];
	memcpy(z,A5,152);
	memcpy(&A5[1],z,152);
	A5[0] = a;
	memcpy(z,B5,152);
	memcpy(&B5[1],z,152);
	B5[0] = b;
	memcpy(z,C5,152);
	memcpy(&C5[1],z,152);
	C5[0] = c;
	memcpy(z,D5,152);
	memcpy(&D5[1],z,152);
	D5[0] = d;
	memcpy(z,E5,152);
	memcpy(&E5[1],z,152);
	E5[0] = e;
	memcpy(z,F5,152);
	memcpy(&F5[1],z,152);
	F5[0] = f;
	memcpy(z,G5,152);
	memcpy(&G5[1],z,152);
	G5[0] = g;
	memcpy(z,H5,152);
	memcpy(&H5[1],z,152);
	H5[0] = h;
	memcpy(z,I5,152);
	memcpy(&I5[1],z,152);
	I5[0] = i;
	memcpy(z,J5,152);
	memcpy(&J5[1],z,152);
	J5[0] = j;
	memcpy(z,K5,152);  memcpy(&K5[1],z,152);  K5[0] = k;
	memcpy(z,L5,152);  memcpy(&L5[1],z,152);  L5[0] = l;
	memcpy(z,M5,152);  memcpy(&M5[1],z,152);  M5[0] = m;
	memcpy(z,N5,152);  memcpy(&N5[1],z,152);  N5[0] = n;
	memcpy(z,O5,152);  memcpy(&O5[1],z,152);  O5[0] = o;
	memcpy(z,P5,152);  memcpy(&P5[1],z,152);  P5[0] = p;
	//memcpy(z,Q5,152);  memcpy(&Q5[1],z,152);  K5[0] = q;

}

long long A6[20],B6[20],C6[20],D6[20],E6[20],F6[20],G6[20],H6[20],I6[20],J6[20],K6[20],L6[20],M6[20],N6[20],O6[20],P6[20];
void DCACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){
	long long z[19];
	memcpy(z,A6,152);
	memcpy(&A6[1],z,152);
	A6[0] = a;
	memcpy(z,B6,152);
	memcpy(&B6[1],z,152);
	B6[0] = b;
	memcpy(z,C6,152);
	memcpy(&C6[1],z,152);
	C6[0] = c;
	memcpy(z,D6,152);
	memcpy(&D6[1],z,152);
	D6[0] = d;
	memcpy(z,E6,152);
	memcpy(&E6[1],z,152);
	E6[0] = e;
	memcpy(z,F6,152);
	memcpy(&F6[1],z,152);
	F6[0] = f;
	memcpy(z,G6,152);
	memcpy(&G6[1],z,152);
	G6[0] = g;
	memcpy(z,H6,152);
	memcpy(&H6[1],z,152);
	H6[0] = h;
	memcpy(z,I6,152);
	memcpy(&I6[1],z,152);
	I6[0] = i;
	memcpy(z,J6,152);
	memcpy(&J6[1],z,152);
	J6[0] = j;
	memcpy(z,K6,152);  memcpy(&K6[1],z,152);  K6[0] = k;
	memcpy(z,L6,152);  memcpy(&L6[1],z,152);  L6[0] = l;
	memcpy(z,M6,152);  memcpy(&M6[1],z,152);  M6[0] = m;
	memcpy(z,N6,152);  memcpy(&N6[1],z,152);  N6[0] = n;
	memcpy(z,O6,152);  memcpy(&O6[1],z,152);  O6[0] = o;
	memcpy(z,P6,152);  memcpy(&P6[1],z,152);  P6[0] = p;
	//memcpy(z,Q6,152);  memcpy(&Q6[1],z,152);  K6[0] = q;

}



void pipeline_state_printf(){
	for(int i=19;i>=0;i--){
		printf("IFU:   pc:%llx  inst:%08llx  valid:%lld  ready:%lld\n",A[i],B[i],C[i],D[i]);
		printf("ICACHE:pc:%llx  inst:%08llx  valid:%lld  ready:%lld   line_mem_prev:%016llx%016llx  index:%llx  index_prev:%llx\n",A5[i],B5[i],C5[i],D5[i],E5[i],F5[i],G5[i],H5[i]);
		printf("offset:%llx  offset_prev:%llx  way_hit:%llx  way_hit_prev:%llx  cen:%llb  wen:%lld  arvalid:%lld  state:%lld \n",I5[i],J5[i],K5[i],L5[i],M5[i],N5[i],O5[i],P5[i]);
		printf("IDU:   pc:%llx  inst:%08llx  valid:%lld\n",A1[i],B1[i],C1[i]);
		printf("EXU:   pc:%llx  inst:%08llx  valid:%lld\n",A2[i],B2[i],C2[i]);
		printf("MEM:   pc:%llx  inst:%08llx  valid:%lld   rdata:%llx  block:%llx\n",A3[i],B3[i],C3[i],D3[i],E3[i]);
		printf("DCACHE:pc:%llx  dout:%08llx  valid:%lld  ready:%lld   line_mem_prev:%016llx%016llx  index:%llx  index_prev:%llx\n",A6[i],B6[i],C6[i],D6[i],E6[i],F6[i],G6[i],H6[i]);
		printf("offset:%llx  offset_prev:%llx  way_hit:%llx  way_hit_prev:%llx  cen:%llb  wen:%lld  line_mem:%016llx%016llx \n",I6[i],J6[i],K6[i],L6[i],M6[i],N6[i],O6[i],P6[i]);
		printf("WBU:   pc:%llx  inst:%08llx  valid:%lld\n",A4[i],B4[i],C4[i]);

		printf("\n");
	}

}
#else
void IFU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void IDU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void EXU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void MEM_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void WBU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void ICACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){}
void DCACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){}
void pipeline_state_printf(){}
#endif
