#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void mode(int *arr, int n)
{
	int i, idx, max = 0, cnt = 0;
	int* a = (int*)malloc(sizeof(int));

	for (i = 0; i < n; i++) {
		a[i] = 0;
	}

	// 최빈값 찾기
	for (i = 0; i < n; i++)
	{
		idx = arr[i] + 100; // 110
		a[idx] += 1;

		if (a[idx] > max)
			max = a[idx]; // 3
	}

	// 최빈값이 여러개일 때
	for (i = 0, idx = 0; i <= 200; i++)
	{
		if (a[i] == 0)
			continue;

		if (a[i] == max)
		{
			if (cnt == 0)
			{
				idx = i;
				cnt += 1;
			}
			else if (cnt == 1)
			{
				idx = i;
				break;
			}
		}
	}

	printf("mode = %d, freq = %d\n", idx - 100, cnt);
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