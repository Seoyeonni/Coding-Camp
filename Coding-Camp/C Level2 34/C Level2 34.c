#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n, cnt = 0;

	printf("정수입력: ");
	scanf("%d" , &n);

	while (n > 0) {
		printf("%d", n % 10);
		n = n / 10;
		cnt++;
	}
	printf("\n");
	printf("자리수 = %d\n", cnt);

	return 0;
}