#include <stdio.h>

void Sum(int *num, int *total) {	// num, total이 이미 포인터로 선언됨
	if (*num * 3 > 100) {
		return;
	}
	*total += 3 * (*num);
	*num += 1;
	Sum(num, total);		// num, total은 값이 아니라 주소값
}

int main() {
	int num = 1;
	int sum = 0;

	Sum(&num, &sum);
	printf("%d\n", sum);

	int sum2 = 0;
	for (int i = 1; i*3 < 100; i++) {
		sum2 += i*3;
	}
	printf("3의 배수: %d", sum2);

	return 0;
}

