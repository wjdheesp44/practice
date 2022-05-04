#include <stdio.h>

int main(void) {
	int result = 0;
	int i = 0;		// i는 0 저장

	do {		// 짝수 더하기
		result += i;		// result에 i 더함
		i += 2;		// i에 2 더함
	} while (i <= 100);	// i가 100이하일 때까지

	printf("덧셈의 결과 : %d", result);	// 짝수 덧셈의 결과

	return 0;
}
