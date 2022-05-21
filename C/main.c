#include <stdio.h>

void find_three_largest(int a[], int n, int* largest, int* sec_largest, int* third_largest) {	// 가장 큰 값, 두번째로 큰 값, 세번째로 큰 값 찾기
	*largest = a[0];
	*sec_largest = a[0];
	*third_largest = a[0];

	for (int i = 1; i < n; i++) {	// 가장 큰 값
		if (*largest < a[i]) {
			*largest = a[i];
		}
	}

	for (int i = 1; i < n; i++) {	// 두번째로 큰 값
		if (a[i] < *largest) {		// 가장 큰 값보다 작을 때
			if (*sec_largest < a[i]) {
				*sec_largest = a[i];
			}
		}
	}

	for (int i = 1; i < n; i++) {	// 세번째로 큰 값
		if (a[i] < *sec_largest) {	// 두번째로 큰 값보다 작을 때
			if (*third_largest < a[i]) {
				*third_largest = a[i];
			}
		}
	}
}

int one_pointer(void) {
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;	// int *ptr=&arr[0];와 같은 문장
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;		// printf 함수호출 후, ptr++ 실행
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;		// printf 함수호출 후, ptr-- 실행
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	return 0;
}

int two_pointer(void) {
	char str1[] = "My string";		// 변수 형태의 문자열
	char* str2 = "Your String";	// 상수 형태의 문자열
	printf("%s %s \n", str1, str2);

	str2 = "Our String";		// 가리키는 대상 변경
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';		// 문자열 변경 성공!
	//str2[0] = 'X';		// 문자열 변경 실패!
	printf("%s %s \n", str1, str2);
	return 0;
}



int main(void) {

	int largest, sec_largest, third_largest;
	int a[] = { 1, 11, 3, 18, 8 };
	find_three_largest(a, sizeof(a) / sizeof(a[0]), &largest, &sec_largest, &third_largest); // (배열, 배열길이, largest 주소, sec_largest 주소, third_largest 주소)

	printf("함수 내에서 가장 큰 값은 : %d \n", largest);
	printf("함수 내에서 두번째로 큰 값은 : %d \n", sec_largest);
	printf("함수 내에서 세번째로 큰 값은 : %d \n", third_largest);

	one_pointer();
	two_pointer();
}