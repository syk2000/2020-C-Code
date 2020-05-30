//file: gets.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char line[101]; //char *line 으로는 오류발생

	printf("입력을 종료하려면 새로운 행에서 (ctrl + Z)를 누르세요.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line,101))
		puts(line);
	printf("\n");

	return 0;
}