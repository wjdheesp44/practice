#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num);

int main(void) {
	int num = 0;

	printf("���� �Է� : ");
	scanf("%d", &num);

	printf("%d! = %d", num, factorial(num));
	return 0;
}

int factorial(int num) {
	int result = 1;
	
	for (int i = num; i > 0; i--) {		// i�� num ����, i�� num���� 1�� �� ������ i�� ����
		result *= i;		// result�� i ����
	}
	return result;	// ���丮�� ��� ���

}