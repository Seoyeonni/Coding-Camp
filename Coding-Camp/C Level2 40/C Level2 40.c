#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, cnt;
	char arr[100];

	scanf("%s", &arr);
	n = strlen(arr);

	printf("%s %d\n",arr,  n);

	for (i = 0; i < n; i++) {
		for (j = n - 1; j >= 0; j--) {
			if (arr[i] == arr[j]) {
				cnt = 1;
			}
			if (i == j) {
				cnt = 0;
			}
		}
	}
	
	if (cnt) {
		printf("회문이 맞습니다.\n");
	}
	else {
		printf("회문이 아닙니다.\n");
	}

	return 0;
}