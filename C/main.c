#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {

	int a[] = { 1, 2, 3, 4, 5 };
	int* p = a;

	printf("%d\n", a);
	printf("%d\n", &a[0]);
	printf("%d %d\n", a[1], p[1]);


	return 0;
}