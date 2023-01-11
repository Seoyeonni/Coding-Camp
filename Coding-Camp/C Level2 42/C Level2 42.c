#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int mystrlen(char* str)
{
	int i = 0;

	while (*str)
	{               
		i++;
		str++;
	}

	return i;
}

int mystrcmp(char* str1, char* str2)
{
	if (mystrlen(str1) > mystrlen(str2)) {
		return 1;
	}
	else if (mystrlen(str1) < mystrlen(str2)) {
		return -1;
	}
	else {
		return 0;
	}
}

char* mystrcpy(char* str1, char* str2)
{
	while (*str2) {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	
	return str1;
}

char* mystrcat(char* str1, char* str2)
{
	while (*str1) {
		str1++;
	}
	while (*str2) {
		*str1 = *str2;
		str1++;
		str2++;
	}

	return str1;
}

int main()
{
	char str1[80], str2[80], str3[80] = { 0 };

	gets(str1);
	gets(str2);

	printf("str1 길이: %d, str2 길이: %d\n", mystrlen(str1), mystrlen(str2));
	if (mystrcmp(str1, str2) > 0) {
		printf("%s\n", str1);
	}
	else if (mystrcmp(str1, str2) < 0) {
		printf("%s\n", str2);
	}
	else {
		printf("%s %s\n", str1, str2);
	}
	mystrcpy(str3, str1);
	printf("str3: %s\n", str3);
	mystrcat(str3, str2);
	printf("%s\n", str3);

	return 0;
}