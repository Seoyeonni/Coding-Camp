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

	printf("1부터 100 사이 정수 입력: ");
	scanf("%d", &n);

	printf("%d보다 작은 소수: ", n);
	for (i = 2; i < n; i++) {
		if (isPrime(i) == 1) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("소수의 합: %d\n", sum);

	return 0;
}