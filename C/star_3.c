#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int num;
	printf("���ڸ� �Է��ϼ��� :");
	scanf("%d", &num);

	for (int i = 0; i <= (num / 2); i++) {		
		for (int j = 0; j < i; j++) {	// �� ĭ Ƚ��
			printf(" ");
		}
		for (int j = 0; j < num-(i*2); j++) {		// �� ����
			printf("*");
		}
		printf("\n");
	}
	return 0;
}