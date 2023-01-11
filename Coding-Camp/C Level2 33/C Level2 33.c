#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int price, remainder;

	printf("금액을 입력: ");
	scanf("%d", &price);

	printf("5만원: %d\n", price / 50000);
	remainder = price % 50000;

	printf("1만원: %d\n", remainder / 10000);
	remainder = remainder % 10000;

	printf("5천원: %d\n", remainder / 5000);
	remainder = remainder % 5000;

	printf("1천원: %d\n", remainder / 1000);
	remainder = remainder % 1000;

	printf("5백원: %d\n", remainder / 500);
	remainder = remainder % 500;

	printf("1백원: %d\n", remainder / 100);
	remainder = remainder % 100;

	printf("5십원: %d\n", remainder / 50);
	remainder = remainder % 50;

	printf("1십원: %d\n", remainder / 10);
	remainder = remainder % 10;

	printf("  5원: %d\n", remainder / 5);
	remainder = remainder % 5;

	printf("  1원: %d\n", remainder);

	return 0;
}