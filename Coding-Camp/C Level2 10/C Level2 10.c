#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
	int business_num;
	char name[20];
	char phone_num[20];
	int age;
} employee;

int main()
{
	int i;

	employee arr[5] = { { 1111, "�ϳ�", "01012341234", 21 },
						{ 2222, "�ο�", "01023452345", 23 },
						{ 3333, "����", "01034563456", 26 },
						{ 4444, "�׿�", "01045674567", 30 },
						{ 5555, "�ټ�", "01056785678", 35 } };

	for (i = 0; i < 5; i++) {
		if (arr[i].age >= 20 && arr[i].age <= 30) {
			printf("%s ", arr[i].name);
		}
	}

	printf("\n");

	return 0;
}