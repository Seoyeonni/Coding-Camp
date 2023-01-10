#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void transpose(int a[4][4], int b[4][4])
{
	int i, j, arr[4] = { 0 };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[j] = a[i][j];
		}
		for (j = 0; j < 4; j++) {
			b[j][i] = arr[j];
		}
	}
}

int main()
{
	int i, j, b[4][4] = { 0 };
	int a[4][4] = { {5,7,4,3},
					{6,1,8,3},
					{3,2,7,6},
					{2,5,9,1} };

	transpose(&a, &b);

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}