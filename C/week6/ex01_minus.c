#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1 = 0, num2 = 0, result = 0;


	printf("�ΰ��� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	// num1�� num2���� ũ�� num1-num2, num1�� num2���� ������ num2-num1
	result = num1>num2 ? num1 - num2 : num2 - num1;		

	printf("��� : %d", result);

	return 0;
}

