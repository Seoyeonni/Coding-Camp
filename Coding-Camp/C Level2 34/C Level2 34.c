#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n, cnt = 0;

	printf("�����Է�: ");
	scanf("%d" , &n);

	while (n > 0) {
		printf("%d", n % 10);
		n = n / 10;
		cnt++;
	}
	printf("\n");
	printf("�ڸ��� = %d\n", cnt);

	return 0;
}