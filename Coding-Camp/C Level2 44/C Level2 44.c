#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book {
	char name[20];
	int home_n;
	int phone_n;
} book;

int main()
{
	int i, * name[20] = { 0 };
	book* n_book = (book*)malloc(sizeof(book) * 5);

	for (i = 0; i < 5; i++) {
		scanf("%s %d %d", n_book[i].name, &n_book[i].home_n, &n_book[i].phone_n);
	}

	printf("�̸� �Է�: ");
	scanf("%s", name);

	for (i = 0; i < 5; i++) {
		if (strcmp(name, n_book[i].name) == 0) {
			printf("%d\n", n_book[i].phone_n);
			break;
		}
	}

	// ��Ͽ� �����ϴ�.

	return 0;
}