#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int i, j;
    int arr[6] = { 0,1,2,3,4,5 };

    for (i = 0; i < 6; i++) {
        for (j = 0; j <= 5; j++) {
            if (j < i) {
                printf(" ");
            }
            else {
                printf("%d", arr[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}