#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0, cnt = 0;

	printf("����� ����: ");	
	scanf("%d", &num);	// num �ȿ� ����� ���� �Է�

	for (int i = 1; i < num+1; i++) {		// num ����ŭ ���ư�
		printf("%d ", i*3);	// 3�� ��� ���
	}
	return 0;
}

