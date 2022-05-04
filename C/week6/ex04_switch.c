#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;

	printf("0 이상의 정수 입력: ");
	scanf("%d", &num);

	switch (num/10)
	{
	case 0:		// 0이상 10미만이면
		printf("0이상 10미만");
		break;
	case 1:		// 10이상 20미만이면
		printf("10이상 20미만");
		break;
	case 2:		// 20이상 30미만이면
		printf("20이상 30미만");
		break;
	default:		// 30이상이면
		printf("30이상");
		break;
	}

	return 0;
}