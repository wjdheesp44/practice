#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Power(int num);

int main(void) {
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);


	printf("2�� %d���� %d", num, Power(num));
	return 0;
}


int Power(int num) {	// 2�� n�� ���ϴ� �Լ�
	if (num == 0) {	// num�� 0�̸� 1 ��ȯ
		return 1;
	}
	else {	// �ƴϸ� 2 ���ϱ� num-1
		return 2 * Power(num - 1);
	}
}