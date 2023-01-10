#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k, s, p;

	for (i = 1; i <= 10; i++) {
		s = 0, p = 0;
		if (i == 1) {
			printf("%d", i);
			s += i;
		}
		else {
			for (j = 1; j <= i; j++) {
				if (j == 1) {
					printf("%d+", j);
				}
				else {
					for (k = 1; k <= j; k++) {
						if (k == 1) {
							printf("(%d+", k);
						}
						else if (k == j) {
							printf("%d)", k);
						}
						else {
							printf("%d+", k);
						}
					}
				}
				p += j;
				s += p;
			}
		}
		printf(" = %d\n", s);
	}

	return 0;
}