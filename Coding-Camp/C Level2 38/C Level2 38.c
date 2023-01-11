#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double Fibo(double n)
{
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return (Fibo(n - 1) + Fibo(n - 2));
	}
}

int main()
{
	int n;
	double i;

	scanf("%d", &n);

	for (i = 3; i <= n; i++) {
		printf("R(%2.0lf)=%.10lf - R(%2.0lf)=%.10lf = %13.10lf\n",
			i, Fibo(i - 1) / Fibo(i), i - 1, Fibo(i - 2) / Fibo(i - 1), (Fibo(i - 1) / Fibo(i)) - (Fibo(i - 2) / Fibo(i - 1)));
	}
	printf("n = %d일 때 황금 분활비 Fibo(%2d) / Fibo(%2d) = %.10lf\n", n, n, n - 1, Fibo(n - 1) / Fibo(n));

	return 0;
}