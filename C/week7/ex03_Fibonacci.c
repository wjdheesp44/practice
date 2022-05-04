#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Fibonacci(int num);

int main(void) {
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	Fibonacci(num);

	return 0;
}

void Fibonacci(int num) {
	int num1 = 0, num2 = 1, num3;
	
	for (int i = 0; i < num; i++) {		// num만큼 피보나치 수열 반복
		printf("%d ", num1);
		num3 = num1 + num2;	// num3에 num1 더하기 num2 저장
		num1 = num2;	// num1에 num2 저장
		num2 = num3;	// num2에 num3 저장
	}
}