#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;

	printf("0 �̻��� ���� �Է�: ");
	scanf("%d", &num);

	switch (num/10)
	{
	case 0:		// 0�̻� 10�̸��̸�
		printf("0�̻� 10�̸�");
		break;
	case 1:		// 10�̻� 20�̸��̸�
		printf("10�̻� 20�̸�");
		break;
	case 2:		// 20�̻� 30�̸��̸�
		printf("20�̻� 30�̸�");
		break;
	default:		// 30�̻��̸�
		printf("30�̻�");
		break;
	}

	return 0;
}