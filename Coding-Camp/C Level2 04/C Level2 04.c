#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n = 3 * 12;
	double C = 1000000.0, r = 0.064 / 12.0, T;

	T = C * pow((1 + r), n);

	printf("ÃÑ±Ý¾× %lf\n", T);

	return 0;
}