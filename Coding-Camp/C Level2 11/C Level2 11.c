#include <stdio.h>

void octal(int n)
{
    int temp;

    temp = n % 8;
    n /= 8;
    if (n > 0) {
        octal(n); 
    }
    if (temp < 10) {
        printf("%d", temp);
    }
}

void hexa(int n)
{

}

int main()
{
	int n;

    printf("10000보다 작은 정수: ");
	scanf("%d", &n);

    printf("8진수: ");
    octal(n);
    printf("\n");
    printf("16진수: ");
    hexa(n);
    printf("\n");

	return 0;
}