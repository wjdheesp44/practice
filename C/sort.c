#include <stdio.h>

int main() {
	int arr[10];
	printf("배열 입력:");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	int temp = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
