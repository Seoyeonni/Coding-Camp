#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Oddsum(int n)
{
	if (n <= 2) {
		return 1;
	}
	else {
		if (n % 2 == 0) {
			n = n - 1;
		}
		return (n + Oddsum(n - 2));
	}
}

int main()
{
	int i;

	for (i = 1; i <= 20; i++) {
		printf("Oddsum(%d) = %d\n", i, Oddsum(i));
	}

	return 0;
}