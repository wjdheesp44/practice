#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int moneyHW(void) {
	int money;
	printf("�ݾ� :");	scanf("%d", &money);
	
	int result1 = money / 50000;		//5������
	int remainder = money % 50000;
	printf("5������ : %d�� \n", result1);

	int result2 = remainder / 10000;	//1������
	remainder %= 10000;
	printf("1������ : %d�� \n", result2);

	int result3 = remainder / 5000;		//5õ����
	remainder %= 5000;
	printf("5õ���� : %d�� \n", result3);

	int result4 = remainder / 1000;		//1õ����
	remainder %= 1000;
	printf("1õ���� : %d�� \n", result4);

	return 0;
}