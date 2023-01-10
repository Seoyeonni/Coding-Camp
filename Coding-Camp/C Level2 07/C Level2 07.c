#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct grade {
	char name[20];
	int a; // ���� ����
	int b; // ���� ����
} grade;

int main()
{
	int n, i, top, idx;

	scanf("%d", &n); // �л���

	grade* arr = (grade*)malloc(sizeof(grade) * n);

	for (i = 0; i < n; i++) {
		scanf("%s %d %d", arr[i].name, &arr[i].a, &arr[i].b);
	}

	top = arr[0].a;
	idx = 0;
	for (i = 0; i < n; i++) {
		if (arr[i].a > top) {
			top = arr[i].a;
			idx = i;
		}
	}
	printf("���� �ְ� ������ ���� �л�: ");
	for (i = 0; i < n; i++) {
		if (arr[i].a == top) {
			printf("%s ", arr[i].name);
		}
	}
	printf("\n");

	top = arr[0].b;
	idx = 0;
	for (i = 0; i < n; i++) {
		if (arr[i].a > top) {
			top = arr[i].b;
			idx = i;
		}
	}
	printf("���� �ְ� ������ ���� �л�: ");
	for (i = 0; i < n; i++) {
		if (arr[i].b == top) {
			printf("%s ", arr[i].name);
		}
	}
	printf("\n");

	return 0;
}