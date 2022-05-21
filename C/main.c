#include <stdio.h>

void find_three_largest(int a[], int n, int* largest, int* sec_largest, int* third_largest) {	// ���� ū ��, �ι�°�� ū ��, ����°�� ū �� ã��
	*largest = a[0];
	*sec_largest = a[0];
	*third_largest = a[0];

	for (int i = 1; i < n; i++) {	// ���� ū ��
		if (*largest < a[i]) {
			*largest = a[i];
		}
	}

	for (int i = 1; i < n; i++) {	// �ι�°�� ū ��
		if (a[i] < *largest) {		// ���� ū ������ ���� ��
			if (*sec_largest < a[i]) {
				*sec_largest = a[i];
			}
		}
	}

	for (int i = 1; i < n; i++) {	// ����°�� ū ��
		if (a[i] < *sec_largest) {	// �ι�°�� ū ������ ���� ��
			if (*third_largest < a[i]) {
				*third_largest = a[i];
			}
		}
	}
}

int one_pointer(void) {
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;	// int *ptr=&arr[0];�� ���� ����
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;		// printf �Լ�ȣ�� ��, ptr++ ����
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;		// printf �Լ�ȣ�� ��, ptr-- ����
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	return 0;
}

int two_pointer(void) {
	char str1[] = "My string";		// ���� ������ ���ڿ�
	char* str2 = "Your String";	// ��� ������ ���ڿ�
	printf("%s %s \n", str1, str2);

	str2 = "Our String";		// ����Ű�� ��� ����
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';		// ���ڿ� ���� ����!
	//str2[0] = 'X';		// ���ڿ� ���� ����!
	printf("%s %s \n", str1, str2);
	return 0;
}



int main(void) {

	int largest, sec_largest, third_largest;
	int a[] = { 1, 11, 3, 18, 8 };
	find_three_largest(a, sizeof(a) / sizeof(a[0]), &largest, &sec_largest, &third_largest); // (�迭, �迭����, largest �ּ�, sec_largest �ּ�, third_largest �ּ�)

	printf("�Լ� ������ ���� ū ���� : %d \n", largest);
	printf("�Լ� ������ �ι�°�� ū ���� : %d \n", sec_largest);
	printf("�Լ� ������ ����°�� ū ���� : %d \n", third_largest);

	one_pointer();
	two_pointer();
}