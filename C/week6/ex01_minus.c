#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1 = 0, num2 = 0, result = 0;


	printf("두개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	// num1이 num2보다 크면 num1-num2, num1이 num2보다 작으면 num2-num1
	result = num1>num2 ? num1 - num2 : num2 - num1;		

	printf("결과 : %d", result);

	return 0;
}

