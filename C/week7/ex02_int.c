#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int integer(double num);
double decimal(double num);

int main(void) {
	double num;
	printf("�Ǽ� �Է�: ");
	scanf("%lf", &num);

	printf("������: %d \n�Ҽ���: %lf \n", integer(num), decimal(num));
	return 0;
}

int integer(double num) {		//  �����κ� ��ȯ
	return (int)num;
}

double decimal(double num) {		// �Ҽ��κ� ��ȯ
	return (num - integer(num));
}