#include <stdio.h>

int main(void) {
	int num = 0;
	printf("입력 : ");	scanf("%d", &num);


	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i == j || i + j == num - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}


	return 0;
}
