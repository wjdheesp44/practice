#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Maxnum(int num1, int num2, int num3);
int Minnum(int num1, int num2, int num3);


int main(void) {
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("가장 큰 수: %d \n", Maxnum(num1, num2, num3));
	printf("가장 작은 수: %d \n", Minnum(num1, num2, num3));
	return 0;
}

int Maxnum(int num1, int num2, int num3) {		// 가장 큰 수를 구하는 함수
	if (num1 > num2 && num1 > num3) {	// num1이 num2, num3보다 큰 경우
		return num1;
	}
	else if (num2 > num1 && num2 > num3) {		// num2가 num1, num2보다 큰 경우
		return num2;
	}
	else {
		return num3;
	}
}

int Minnum(int num1, int num2, int num3) {		// 가장 작은 수를 구하는 함수
	if (num1 < num2 && num1 < num3) {		// num1이 num2, num3보다 작은 경우
		return num1;
	}
	else if (num2 < num1 && num2 < num3) {		// num2가 num1, num2보다 작은 경우
		return num2;
	}
	else {
		return num3;
	}
	return 0;
}