#include <stdio.h>
#define LOW 4
#define COL 3

void swap_array(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int i, j;
	int a[LOW][COL] = { {1, 2, 3},
						{1, 2, 3},
						{1, 2, 3},
						{1, 2, 3} };
	int b[LOW][COL] = { {4, 5, 6},
						{4, 5, 6},
						{4, 5, 6},
						{4, 5, 6} };

	for (i = 0; i < LOW; i++) {
		for (j = 0; j < COL; j++) {
			swap_array(&a[i][j], &b[i][j]);
		}
	}

	for (i = 0; i < LOW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < LOW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}