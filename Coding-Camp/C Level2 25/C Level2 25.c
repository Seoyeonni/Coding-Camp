#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

int main()
{
	int n, user_n;

	srand(time(NULL));

	n = rand() % 100 + 1;

	do {
		printf("정답 입력: ");
		scanf("%d", &user_n);
	} while (n != user_n);
	printf("맞았습니다!\n");

	return 0;
}