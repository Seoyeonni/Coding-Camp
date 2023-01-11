#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define ROW 4
#define COL 3

int main()
{
	int i, j;
	int arr_a[ROW][COL] = { {1, 2, 3},
							{1, 2, 3},
							{1, 2, 3},
							{1, 2, 3} };
	int arr_b[COL][ROW] = { 0 };
	int a[ROW] = { 0 };
	int b[COL] = { 0 };

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			b[j] = arr_a[i][j];
		}
		for (j = 0; j < COL; j++) {
			arr_b[j][i] = b[j];
		}
	}

	for (i = 0; i < COL; i++) {
		for (j = 0; j < ROW; j++) {
			printf("%d ", arr_b[i][j]);
		}
		printf("\n");
	}

	return 0;
}