#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int startday, i, month, daysum = 0;
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("출력 월을 입력 : ");
	scanf("%d", &month);

	startday = 1; // 시작 요일

	for (i = 1; i < month; i++)
		daysum += m[i]; // month == 3월이면 1, 2월까지 날수의 합

	daysum += startday;
	daysum %= 7; // 마지막 끝주의 몇일인지 계산

	printf("일 월 화 수 목 금 토\n");

	for (i = 0; i < daysum; i++)
		printf("   ");

	for (i = 1; i <= m[month - 1]; i++) {
		printf("%2d ", i);
		if ((i + daysum) % 7 == 0) // i가 7의 배수이면, 7, 14, 21, 28
			printf("\n");
	}
	printf("\n");

	return 0;
}
