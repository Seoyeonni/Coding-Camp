#define _CRT_SECURE_NO_WARNINGS

// 1 ~ 100

#include <stdio.h>
#include <stdlib.h>

void mode(int arr[], int n)
{
	int ar[101] = { 0 };
	int i, idx = 0, max = 0, cnt = 0;

	// 최빈값 찾기
	for (i = 0; i < n; i++)
	{
		idx = arr[i];
		ar[idx] += 1;

		if (ar[idx] > cnt) {
			cnt = ar[idx];
			max = idx;
		}
	}

	// 최빈값이 여러개일 때 코드 추가

	printf("mode: %d, freq : %d\n", max, cnt);
}

int main()
{
	int n, i;

	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int));

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	mode(arr, n);

    return 0;
}