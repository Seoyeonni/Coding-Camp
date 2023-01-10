#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n, i = 0, max = 0, idx = 0, cnt = 0;
	int arr[20] = { 0 };
	int ar[10] = { 0 };

	while (i < 20) {
		scanf("%d", &n);
		if (n >= 0 && n <= 9) {
			arr[i] = n;
			i++;
		}
	}
 
	for (i = 0; i < 20; i++)
	{
		idx = arr[i];
		ar[idx] += 1;

		if (ar[idx] > cnt) {
			cnt = ar[idx];
			max = idx;
		}
	}

	printf("가장 많이 입력 받은 수: %d, 횟수: %d\n", max, cnt);

	return 0;
}