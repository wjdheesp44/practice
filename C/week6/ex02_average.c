#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int korean = 0, math = 0, english = 0, avg = 0;

	printf("����,����,���� ����: ");
	scanf("%d %d %d", &korean, &math, &english);	

	avg = (korean + math + english) / 3;	// ��� ���ϱ�

	switch (avg/10) {
	case 9:		// 90�� �̻��̸� A
		printf("A");
		break;
	case 8:		// 80�� �̻��̸� B
		printf("B");
		break;
	case 7:		// 70�� �̻��̸� C
		printf("C");
		break;
	case 5:		// 50�� �̻��̸� D
		printf("D");
		break;
	default:		// 50�� �����̸� F
		printf("F");
	}

	return 0;
}