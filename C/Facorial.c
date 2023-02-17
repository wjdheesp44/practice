#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num);

int main(void) {
	int num = 0;

	printf("정수 입력 : ");
	scanf("%d", &num);

	printf("%d! = %d", num, factorial(num));
	return 0;
}

int factorial(int num) {
	int result = 1;
	
	for (int i = num; i > 0; i--) {		// i에 num 저장, i가 num에서 1이 될 때까지 i를 곱함
		result *= i;		// result에 i 곱함
	}
	return result;	// 팩토리얼 계산 결과

}