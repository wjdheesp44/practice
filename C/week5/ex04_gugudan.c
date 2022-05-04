#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {


	for (int i = 2; i < 10; i++) {  // 2~9단까지
		for (int j = 1; j < 10; j++) {	// i단 만큼 1~9 곱하기
			printf("%d×%d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
