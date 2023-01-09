#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int evensum(int n)
{
	int i, sum = 0;

	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}

	return sum;
}

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d\n", evensum(n));

	return 0;
}