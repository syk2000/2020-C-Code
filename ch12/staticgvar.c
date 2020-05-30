//file: staticgvar.c
#include<stdio.h>

//정적전역변수선언
static int svar;
//전역변수 선언
int gvar;
int i = 0;

//함수 원형
void testglobal();
void imcrement();
//void teststatic();

int main(void) {
	for (int count = 1; count <= 5; count++)
		imcrement();
	printf("함수 imcrement()가 총 %d번 호출되었습니다.\n", svar);
	
	testglobal();
	printf("전역 변수: %d\n", gvar);
	//teststatic();
}

void imcrement() {
	svar++;
}

