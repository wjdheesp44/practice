#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Maxnum(int num1, int num2, int num3);
int Minnum(int num1, int num2, int num3);


int main(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("���� ū ��: %d \n", Maxnum(num1, num2, num3));
	printf("���� ���� ��: %d \n", Minnum(num1, num2, num3));
	return 0;
}

int Maxnum(int num1, int num2, int num3) {		// ���� ū ���� ���ϴ� �Լ�
	if (num1 > num2 && num1 > num3) {	// num1�� num2, num3���� ū ���
		return num1;
	}
	else if (num2 > num1 && num2 > num3) {		// num2�� num1, num2���� ū ���
		return num2;
	}
	else {
		return num3;
	}
}

int Minnum(int num1, int num2, int num3) {		// ���� ���� ���� ���ϴ� �Լ�
	if (num1 < num2 && num1 < num3) {		// num1�� num2, num3���� ���� ���
		return num1;
	}
	else if (num2 < num1 && num2 < num3) {		// num2�� num1, num2���� ���� ���
		return num2;
	}
	else {
		return num3;
	}
	return 0;
}