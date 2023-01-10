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
    int i;

	for (i = 1; i <= 100; i++) {
		if (isPrime(i) == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");

    return 0;
}