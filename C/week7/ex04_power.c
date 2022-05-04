#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Power(int num);

int main(void) {
	int num;
	printf("정수입력: ");
	scanf("%d", &num);


	printf("2의 %d승은 %d", num, Power(num));
	return 0;
}


int Power(int num) {	// 2의 n승 구하는 함수
	if (num == 0) {	// num이 0이면 1 반환
		return 1;
	}
	else {	// 아니면 2 곱하기 num-1
		return 2 * Power(num - 1);
	}
}