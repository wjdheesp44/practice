#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A = 0, Z = 0, result = 0;

	for (A = 0; A < 10; A++) {			// A는 0부터 9까지
		for (Z = 0; Z < 10; Z++) {		// Z는 0부터 9까지
			if (A == Z) {		// A와 Z가 같으면 나머지 생략
				continue;
			}
			result = (A * 10 + Z) + (Z * 10 + A);	// AZ+ZA
			if (result == 99) {		// 결과가 99면 출력
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
			}
		}
	}

	return 0;
}