#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[4][5] = { {5, 7, 4, 3},
					{6, 1, 8, 3},
					{3, 2, 7, 6} };

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			a[i][4] += a[i][j];
			a[3][j] += a[i][j];
			a[3][4] += a[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		if (i == 3) {
			printf("----------+---\n");
		}
		for (j = 0; j < 5; j++) {
			if (j == 4) {
				printf("| %d", a[i][j]);
			}
			else {
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}