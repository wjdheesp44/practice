#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A = 0, Z = 0, result = 0;

	for (A = 0; A < 10; A++) {			// A�� 0���� 9����
		for (Z = 0; Z < 10; Z++) {		// Z�� 0���� 9����
			if (A == Z) {		// A�� Z�� ������ ������ ����
				continue;
			}
			result = (A * 10 + Z) + (Z * 10 + A);	// AZ+ZA
			if (result == 99) {		// ����� 99�� ���
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
			}
		}
	}

	return 0;
}