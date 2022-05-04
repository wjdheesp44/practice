#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int result = 1;	// 팩토리얼 계산 결과 저장

	printf("정수 입력 : ");
	scanf("%d", &num);

	for (int i = num; i > 0; i--) {		// i에 num 저장, i가 num에서 1이 될 때까지 i를 곱함
		result = result * i;	// result에 i 곱함
	}

	printf("%d! = %d", num, result);
	return 0;
}
