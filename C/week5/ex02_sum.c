#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 1, total = 0;
	

	while (num != 0) {		// ���ѹݺ�
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;	// ���� �Է��ϸ� result���� ������ ����
	}

	printf("�� �� : %d", total);	// ������ ���
	return 0;
}
