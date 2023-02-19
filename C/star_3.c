#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int num;
	printf("숫자를 입력하세요 :");
	scanf("%d", &num);

	for (int i = 0; i <= (num / 2); i++) {		
		for (int j = 0; j < i; j++) {	// 빈 칸 횟수
			printf(" ");
		}
		for (int j = 0; j < num-(i*2); j++) {		// 별 개수
			printf("*");
		}
		printf("\n");
	}
	return 0;
}