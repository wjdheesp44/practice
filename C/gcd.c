#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int num1, int num2);

int main(void) {
	int a, b;
	printf("정수 2개 입력 : ");
	scanf("%d %d", &a, &b);

	printf("최대공약수 : %d", gcd(a, b));

	return 0;
}

int gcd(int num1, int num2) {
	if (num2 == 0) {
		return num1;
	}
	gcd(num2, num1 % num2);
}





#include <stdio.h>

int main(void) {
	int abc;		
	Input(abc);			
	printf("%d\n", abc);
	return 0;
}

int Input(int a) {
	a = 10;
	return abc;			
}



