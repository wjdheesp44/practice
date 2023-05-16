#include <stdio.h>
#define ROW 3
#define COL 4


int main() {
	int a[ROW][COL] = { {2, 6, 3, 0}, {7, 9, 0, 8}, {0, 5, 4, 11} };
	int b[ROW][COL] = { {0, 0, 9, 16}, {13, 6, 4, 2}, {0, 0, 1, 0} };
	int sum = 0;
	int column = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", a[i][j] + b[i][j]);
			sum += a[i][j] + b[i][j];
		}
		printf("\n");
	}
	printf("Total : %d", sum);
	
	return 0;
}
