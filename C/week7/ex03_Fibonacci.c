#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Fibonacci(int num);

int main(void) {
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	Fibonacci(num);

	return 0;
}

void Fibonacci(int num) {
	int num1 = 0, num2 = 1, num3;
	
	for (int i = 0; i < num; i++) {		// num��ŭ �Ǻ���ġ ���� �ݺ�
		printf("%d ", num1);
		num3 = num1 + num2;	// num3�� num1 ���ϱ� num2 ����
		num1 = num2;	// num1�� num2 ����
		num2 = num3;	// num2�� num3 ����
	}
}