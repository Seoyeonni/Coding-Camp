#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int price, remainder;

	printf("�ݾ��� �Է�: ");
	scanf("%d", &price);

	printf("5����: %d\n", price / 50000);
	remainder = price % 50000;

	printf("1����: %d\n", remainder / 10000);
	remainder = remainder % 10000;

	printf("5õ��: %d\n", remainder / 5000);
	remainder = remainder % 5000;

	printf("1õ��: %d\n", remainder / 1000);
	remainder = remainder % 1000;

	printf("5���: %d\n", remainder / 500);
	remainder = remainder % 500;

	printf("1���: %d\n", remainder / 100);
	remainder = remainder % 100;

	printf("5�ʿ�: %d\n", remainder / 50);
	remainder = remainder % 50;

	printf("1�ʿ�: %d\n", remainder / 10);
	remainder = remainder % 10;

	printf("  5��: %d\n", remainder / 5);
	remainder = remainder % 5;

	printf("  1��: %d\n", remainder);

	return 0;
}