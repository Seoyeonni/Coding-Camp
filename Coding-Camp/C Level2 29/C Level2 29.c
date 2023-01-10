#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void hexa(int n)
{
    if (n < 16) {
        if (n % 16 <= 9) {
            printf("%d", n % 16);
        }
        else {
            printf("%c", (n % 16) + 55);
        }
    }
    else {
        hexa(n / 16);
        if (n % 16 <= 10) {
            printf("%d", n % 16);
        }
        else {
            printf("%c", (n % 16) + 55);
        }
    }

}

int main()
{
    int n;

    printf("10000보다 작은 정수: ");
    scanf("%d", &n);

    printf("16진수: 0x");
    hexa(n);
    printf("\n");

    return 0;
}