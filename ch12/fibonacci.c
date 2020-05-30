//file fibonacci.c
#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
//전역변수
int count;
//원형 변수
void fibonacci(int prev_number, int number);

int main() {
	auto prev_number = 0, number = 1;						//자동지역 변수
	printf("피보나츠를 몇 개 구할까요?(3 이상) >> ");
	//전역변수를 표준 입력으로 저장
	scanf_s("%d", &count,100);
	if (count <= 2)
		return 0;
	printf("1 ");
	fibonacci(prev_number, number);
	printf("\n");
}

void fibonacci(int prev_number, int number){
	static int i = 1;	//정적 지역변수 i

	//전역변수 count와 함수의 정적 지역변수를 비교
	while (i++ < count)
	{
		//지역변수
		int next_num = prev_number + number;
		prev_number = number;
		number = next_num;
		printf("%d", next_num);
		fibonacci(prev_number, number);
	}
}