#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 1, total = 0;
	

	while (num != 0) {		// 무한반복
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;	// 정수 입력하면 result값에 정수를 더함
	}

	printf("총 합 : %d", total);	// 정수합 출력
	return 0;
}
