#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0, cnt = 0;

	printf("배수의 개수: ");	
	scanf("%d", &num);	// num 안에 배수의 개수 입력

	for (int i = 1; i < num+1; i++) {		// num 수만큼 돌아감
		printf("%d ", i*3);	// 3의 배수 출력
	}
	return 0;
}

