#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int isPrime(int n)
{
	int i;

	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int n, i, sum = 0;

	printf("1���� 100 ���� ���� �Է�: ");
	scanf("%d", &n);

	printf("%d���� ���� �Ҽ�: ", n);
	for (i = 2; i < n; i++) {
		if (isPrime(i) == 1) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("�Ҽ��� ��: %d\n", sum);

	return 0;
}