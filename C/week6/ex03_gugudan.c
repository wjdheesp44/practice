#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result = 0;

	for (int i = 1; i < 10; i++) {	// 1~9�ܱ���
		if (i % 2 == 0) {	// ¦���� ������ ����
			continue;
		}

		int j = 1;
		while (1) {
			printf("%d��%d=%d  ", i, j, i * j);  // ������ ���
			j++;
			if (j > i) {	// j�� i���� ũ��
				break;	// Ż��
			}
		}
		printf("\n");
	}

	return 0;
}