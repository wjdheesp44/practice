#include <stdio.h>

int main(void) {

	int num, max_index, min_index = 0;
	int arr[100];
	int max = -1000;
	int min = 1000;

	printf("숫자 개수 입력 : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}

	printf("최댓값 : %d, 최댓값의 인덱스 : %d\n", max, max_index);
	printf("최솟값 : %d, 최솟값의 인덱스 : %d", min, min_index);

	return 0;
}
