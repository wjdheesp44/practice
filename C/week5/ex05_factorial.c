#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int result = 1;	// ���丮�� ��� ��� ����

	printf("���� �Է� : ");
	scanf("%d", &num);

	for (int i = num; i > 0; i--) {		// i�� num ����, i�� num���� 1�� �� ������ i�� ����
		result = result * i;	// result�� i ����
	}

	printf("%d! = %d", num, result);
	return 0;
}
