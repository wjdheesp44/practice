#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int korean = 0, math = 0, english = 0, avg = 0;

	printf("국어,영어,수학 점수: ");
	scanf("%d %d %d", &korean, &math, &english);	

	avg = (korean + math + english) / 3;	// 평균 구하기

	switch (avg/10) {
	case 9:		// 90점 이상이면 A
		printf("A");
		break;
	case 8:		// 80점 이상이면 B
		printf("B");
		break;
	case 7:		// 70점 이상이면 C
		printf("C");
		break;
	case 5:		// 50점 이상이면 D
		printf("D");
		break;
	default:		// 50점 이하이면 F
		printf("F");
	}

	return 0;
}