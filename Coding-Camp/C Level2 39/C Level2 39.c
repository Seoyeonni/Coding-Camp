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
		printf("요소의 위치: %d\n", idx);
	}
	else {
		printf("요소의 위치: %없다\n");
	}
}

int main()
{
	int n, idx = 0;
	int arr[10] = { 23,45,12,34,65,25,89,61,26,11 };

	scanf("%d", &n);

	printf("찾고자하는 값: %d\n", n);
	search(arr, n, idx);

	return 0;
}