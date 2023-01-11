#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct point {
	int x;
	int y;
} point;

typedef struct rect {
	point pt1;
	point pt2;
} rect;

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	rect a;

	scanf("%d %d", &a.pt1.x, &a.pt1.y);
	scanf("%d %d", &a.pt2.x, &a.pt2.y);

	if (a.pt1.x < a.pt2.x) {
		if (a.pt1.y < a.pt2.y) {
			if (x >= a.pt1.x && x <= a.pt2.x && y >= a.pt1.y && y <= a.pt2.y) {
				printf("사각형 안에 있음\n");
			}
			else {
				printf("사각형 안에 없음\n");
			}
		}
		else {
			if (x >= a.pt1.x && x <= a.pt2.x && y >= a.pt2.y && y <= a.pt1.y) {
				printf("사각형 안에 있음\n");
			}
			else {
				printf("사각형 안에 없음\n");
			}
		}
	}
	else if (a.pt1.x > a.pt2.x) {
		if (a.pt1.y < a.pt2.y) {
			if (x >= a.pt2.x && x <= a.pt1.x && y >= a.pt1.y && y <= a.pt2.y) {
				printf("사각형 안에 있음\n");
			}
			else {
				printf("사각형 안에 없음\n");
			}
		}
		else {
			if (x >= a.pt2.x && x <= a.pt1.x && y >= a.pt2.y && y <= a.pt1.y) {
				printf("사각형 안에 있음\n");
			}
			else {
				printf("사각형 안에 없음\n");
			}
		}
	}

	return 0;
}