#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i, j;
	int arr[5][5] = { {78, 48,78,98},
						{99,92,83,29},
						{29,64,83,89},
						{34,78,92,56} };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
			arr[4][j] += arr[i][j];
			arr[4][4] += arr[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		if (i == 3) {
			printf("------------------\n");
		}
		for (j = 0; j < 5; j++) {
			if (j == 4) {
				printf("| %d", arr[i][j]);
			}
			else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}