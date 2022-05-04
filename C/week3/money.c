#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int moneyHW(void) {
	int money;
	printf("금액 :");	scanf("%d", &money);
	
	int result1 = money / 50000;		//5만원권
	int remainder = money % 50000;
	printf("5만원권 : %d개 \n", result1);

	int result2 = remainder / 10000;	//1만원권
	remainder %= 10000;
	printf("1만원권 : %d개 \n", result2);

	int result3 = remainder / 5000;		//5천원권
	remainder %= 5000;
	printf("5천원권 : %d개 \n", result3);

	int result4 = remainder / 1000;		//1천원권
	remainder %= 1000;
	printf("1천원권 : %d개 \n", result4);

	return 0;
}
