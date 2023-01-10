#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n, i, j, max, idx;
	int arr[20] = { 0 };
	int cnt[10] = { 0 };

	while (1) {
		scanf("%d", &n);
		while (n >= 0 && n <= 9) {
			for (i = 0; i < 20; i++) {
				arr[i] = n;
				if (i == 19) {
				break;
				}
			}
		}
	}

	idx = 0, max = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 20; j++) {
			if (arr[i] == i) {
				cnt[i] += 1;
			}
			if (cnt[i] > idx) {
				idx = cnt[i];
				max = i;
			}
		}
	}

	printf("가장 많이 입력 받은 수: %d, 횟수: %d\n", max, idx);

	return 0;
}