#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int GetSum(int n)
{
	int i, sum = 0;

	if (n == 1) {
		return 1;
	}
	else {
		for (i = 1; i <= n; i++) {
			sum += i;
		}
		return (sum + GetSum(n - 1));
	}
}

int main()
{
	printf("%d\n", GetSum(100));

	return 0;
}