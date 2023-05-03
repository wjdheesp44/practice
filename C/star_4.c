#include <stdio.h>

int main(void) {

	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < (num - i - 1); j++) {	// 빈 칸 횟수
			printf(" ");
		}
		for (int j = 0; j < ((i+1) * 2)-1; j++) {		// 별 개수
			if (i % 2 == 0) {
				printf("o");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
