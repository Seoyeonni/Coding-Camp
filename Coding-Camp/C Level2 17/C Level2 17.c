#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void f(int n)
{
    if (n < 2) {
        printf("%d", n % 2);
    }
    else {
        f(n / 2);
        printf("%d", n % 2);
    }

}

int main()
{
    int n, i, j;

    printf("십진수 입력: ");
    scanf("%d\n", &n);

    f(n);

    return 0;
}