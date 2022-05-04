#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result = 0;

	for (int i = 1; i < 10; i++) {	// 1~9단까지
		if (i % 2 == 0) {	// 짝수면 나머지 생략
			continue;
		}

		int j = 1;
		while (1) {
			printf("%d×%d=%d  ", i, j, i * j);  // 구구단 출력
			j++;
			if (j > i) {	// j가 i보다 크면
				break;	// 탈출
			}
		}
		printf("\n");
	}

	return 0;
}