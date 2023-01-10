#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double fact(int n) {
    if (n == 1) {
        return 1;
    }
    else return n * fact(n - 1);
}
double oiler(int n) {
    if (n == 1) {
        return 2;
    }
    return (1 / fact(n)) + oiler(n - 1);
}

int main()
{
    int n = 2;

    while (1) {

        if (oiler(n) - oiler(n - 1) <= 0.000001) {
            printf("%.6f\n", oiler(n));
            break;
        }
        n += 1;
    }

    return 0;
}