#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Fibonacci(int num);

int main(void) {
	int num;
	printf("n��° ���� �Է� : ");
	scanf("%d", &num);

	Fibonacci(num);

	return 0;
}

void Fibonacci(int num) {
	int num1 = 1, num2=1, num3;

	for (int i = 0; i < num; i++) {		// num��ŭ �Ǻ���ġ ���� �ݺ�
		printf("%d��° : %d\n", i+1, num1);
		num3 = num1 + num2;	
		num1 = num2;	
		num2 = num3;	
	}
}