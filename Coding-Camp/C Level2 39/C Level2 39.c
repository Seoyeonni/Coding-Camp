#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void search(int arr[], int n, int idx)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (n == arr[i]) {
			idx = i;
		}
	}
	
	if (idx) {
		printf("����� ��ġ: %d\n", idx);
	}
	else {
		printf("����� ��ġ: %����\n");
	}
}

int main()
{
	int n, idx = 0;
	int arr[10] = { 23,45,12,34,65,25,89,61,26,11 };

	scanf("%d", &n);

	printf("ã�����ϴ� ��: %d\n", n);
	search(arr, n, idx);

	return 0;
}