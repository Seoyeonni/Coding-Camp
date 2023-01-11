#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

factorial(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	return (n * factorial(n - 1));
}

int main()
{
	int i;

	for (i = 0; i <= 10; i++) {
		printf("%d! = %d\n", i, factorial(i));
	}

	return 0;
}