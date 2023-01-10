#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int i, j;
    int a[2][3] = { {1,2,3},
                    {4,5,6} };
    int b[2][3] = { {10,20,30},
                    {40,50,60} };
    int c[2][3] = { 0 };

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("행렬 a + 행렬 b = 행렬 c\n");
    for (i = 0; i < 2; i++) {
        printf("[ ");
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("] ");
        printf("[ ");
        for (j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("[ ");
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("]\n");
    }

    return 0;
}