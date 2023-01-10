#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LOW 4
#define COL 3

int main()
{
	int i, j;
	int arr_a[LOW][COL] = { {1, 2, 3},
							{1, 2, 3},
							{1, 2, 3},
							{1, 2, 3} };
	int arr_b[COL][LOW] = { 0 };
	int a[LOW] = { 0 };
	int b[COL] = { 0 };

	for (i = 0; i < LOW; i++) {
		for (j = 0; j < COL; j++) {
			b[j] = arr_a[i][j];
		}
		for (j = 0; j < COL; j++) {
			arr_b[j][i] = b[j];
		}
	}

	for (i = 0; i < COL; i++) {
		for (j = 0; j < LOW; j++) {
			printf("%d ", arr_b[i][j]);
		}
		printf("\n");
	}

	return 0;
}