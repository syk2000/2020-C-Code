//file: staticgvar.c
#include<stdio.h>

//����������������
static int svar;
//�������� ����
int gvar;
int i = 0;

//�Լ� ����
void testglobal();
void imcrement();
//void teststatic();

int main(void) {
	for (int count = 1; count <= 5; count++)
		imcrement();
	printf("�Լ� imcrement()�� �� %d�� ȣ��Ǿ����ϴ�.\n", svar);
	
	testglobal();
	printf("���� ����: %d\n", gvar);
	//teststatic();
}

void imcrement() {
	svar++;
}

