#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct info {
	char name[20];
	int grade;
	int rank;
} info;

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int main()
{
	int i, j;
	int rank[5] = { 0 };
	info* class = (info*)malloc(sizeof(info) * 5);

	for (i = 0; i < 5; i++) {
		scanf("%s %d", class[i].name, &class[i].grade);
	}

	for (i = 0; i < 5; i++) {
		rank[i] = class[i].grade;
	}

	qsort(rank, 5, sizeof(int), compare);

	// 동점자 처리

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (class[i].grade == rank[j]) {
				class[i].rank = j;
			}
		}
	}
	
	printf("이름  성적 순위\n");
	printf("==============\n");
	for (i = 0; i < 5; i++) {
		printf("%s %d %3d\n", class[i].name, class[i].grade, class[i].rank + 1);
	}

	return 0;
}