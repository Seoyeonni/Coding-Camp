#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n, i;

	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		while (n % i == 0) {
			printf("%d ", i);
			n = n / i;
		}
	}
	printf("\n");

	return 0;
}