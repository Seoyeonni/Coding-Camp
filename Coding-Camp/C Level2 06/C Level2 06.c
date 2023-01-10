#include <stdio.h>
#define ROW 4 // ї­
#define COL 3 // За

int main()
{
	int a[ROW][COL] = { {1, 2, 3},
							{1, 2, 3},
							{1, 2, 3},
							{1, 2, 3} };
	int b[ROW][COL] = { {4, 5, 6},
							{4, 5, 6},
							{4, 5, 6},
							{4, 5, 6} };
	int i, j;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			a[i][j] = a[i][j] + b[i][j];
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}