#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int integer(double num);
double decimal(double num);

int main(void) {
	double num;
	printf("실수 입력: ");
	scanf("%lf", &num);

	printf("정수부: %d \n소수부: %lf \n", integer(num), decimal(num));
	return 0;
}

int integer(double num) {		//  정수부분 반환
	return (int)num;
}

double decimal(double num) {		// 소수부분 반환
	return (num - integer(num));
}