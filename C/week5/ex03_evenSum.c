#include <stdio.h>

int main(void) {
	int result = 0;
	int i = 0;		// i�� 0 ����

	do {		// ¦�� ���ϱ�
		result += i;		// result�� i ����
		i += 2;		// i�� 2 ����
	} while (i <= 100);	// i�� 100������ ������

	printf("������ ��� : %d", result);	// ¦�� ������ ���

	return 0;
}
