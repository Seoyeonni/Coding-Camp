#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

int main()
{
	int n, user_n;

	srand(time(NULL));

	n = rand() % 100 + 1;

	do {
		printf("���� �Է�: ");
		scanf("%d", &user_n);
	} while (n != user_n);
	printf("�¾ҽ��ϴ�!\n");

	return 0;
}