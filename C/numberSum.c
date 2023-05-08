#include <stdio.h>

int Sum(int num);

int main()
{
	int num = 0;
	printf("입력 : "); scanf("%d", &num);
	printf("각 숫자의 합 : %d", Sum(num));

}

int Sum(int num) {

	if (num == 0) {
		return num;
	}
	return (num % 10) + Sum(num / 10);
}
