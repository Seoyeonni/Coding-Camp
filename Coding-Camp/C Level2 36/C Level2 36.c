#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i, n1, n2;
	char op;

	for (i = 0; i < 4; i++) {
		printf("���� �Է�: ");
		scanf("%d %c %d", &n1, &op, &n2);
		switch (op)
		{
		case '+':
			printf("%d %c %d = %d\n", n1, op, n2, n1 + n2);
			break;
		case '-':
			printf("%d %c %d = %d\n", n1, op, n2, n1 - n2);
			break;
		case '*':
			printf("%d %c %d = %d\n", n1, op, n2, n1 * n2);
			break;
		case '/':
			printf("%d %c %d = %d\n", n1, op, n2, n1 / n2);
			break;
		}
	}

	return 0;
}