//file:out.c
#include<stdio.h>

void outfunction() {
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);

	//외부 파일에 선언된 정적 전역변수이므로 실해시 오류
	//printf("%d\n", ++sglobal);
}