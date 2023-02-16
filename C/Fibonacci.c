#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Fibonacci(int num);

int main(void) {
	int num;
	printf("n번째 정수 입력 : ");
	scanf("%d", &num);

	Fibonacci(num);

	return 0;
}

void Fibonacci(int num) {
	int num1 = 1, num2=1, num3;

	for (int i = 0; i < num; i++) {		// num만큼 피보나치 수열 반복
		printf("%d번째 : %d\n", i+1, num1);
		num3 = num1 + num2;	
		num1 = num2;	
		num2 = num3;	
	}
}