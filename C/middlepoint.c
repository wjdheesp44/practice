#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double middlepoint_x(int x1, int x2) {
	return (double)(x1 + x2) / 2;
}

double middlepoint_y(int y1, int y2) {
	return (double)(y1 + y2) / 2;
}

int main(void) {

	int x1, y1;
	int x2, y2;

	printf("xy평면상의 두점 사이의 중점 구하기");
	printf("1번째 좌표 입력:");	scanf("%d %d", &x1, &y1);
	printf("1번째 좌표 : (%d, %d)\n", x1, y1);
	printf("2번째 좌표 입력:");	scanf("%d %d", &x2, &y2);
	printf("2번째 좌표 : (%d, %d)\n", x2, y2);

	printf("중점 : (%.2f, %.2f)", middlepoint_x(x1, x2), middlepoint_y(y1, y2));

	return 0;
}

