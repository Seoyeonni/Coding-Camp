#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int startday, i, month, daysum = 0;
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("��� ���� �Է� : ");
	scanf("%d", &month);

	startday = 1; // ���� ����

	for (i = 1; i < month; i++)
		daysum += m[i]; // month == 3���̸� 1, 2������ ������ ��

	daysum += startday;
	daysum %= 7; // ������ ������ �������� ���

	printf("�� �� ȭ �� �� �� ��\n");

	for (i = 0; i < daysum; i++)
		printf("   ");

	for (i = 1; i <= m[month - 1]; i++) {
		printf("%2d ", i);
		if ((i + daysum) % 7 == 0) // i�� 7�� ����̸�, 7, 14, 21, 28
			printf("\n");
	}
	printf("\n");

	return 0;
}
