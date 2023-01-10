#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int i, j;
	double PI = 3.141592;

	for (i = 0; i <= 360; i += 15) {
		printf("sin(%3d)= %5.2lf", i, sin(i * PI / 180));
		for (j = 0; j < sin(i * PI / 180) * 10 + 10; j++) {
			printf(" ");
		}
		printf("*\n");
	}

	return 0;
}