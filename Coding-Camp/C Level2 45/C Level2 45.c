#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define ROW 3
#define COL 3

void array_equal(int* arr1, int* arr2) {

	int i, j;
	
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			*arr1++ = *arr2++;
		}
	}

}

int main()
{
	int i, j;
	
	int* arr1[ROW][COL] = { {1, 2, 3},
							{4, 5, 6},
							{7, 8, 9} };
	int* arr2[ROW][COL] = { 0 };

	array_equal(arr2, arr1);

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}