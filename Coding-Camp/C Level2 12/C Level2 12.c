#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int i, j;
    int arr[10][10];

    for (i = 1; i <= 9; i++) {
        arr[0][i] = i;
        arr[i][0] = i;
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            arr[i][j] = i * j;
        }
        printf("\n");
    }
    
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            if (i == 0 && j == 0) {
                printf(" * ");
            }
            else {
                printf("%2d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}