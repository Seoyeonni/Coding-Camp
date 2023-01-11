#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Fibo(int n)
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
	int i, sum = 0;
	
	printf("Fibonacii ¼ö¿­: ");
	for (i = 0; i <= 20; i++) {
		printf("%d ", Fibo(i));
		sum += Fibo(i);
	}
	printf("\n");
	printf("sum = %d\n", sum);

	return 0;
}