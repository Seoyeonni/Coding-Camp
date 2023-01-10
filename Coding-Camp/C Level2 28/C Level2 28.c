#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct point {
	double x;
	double y;
} point;

typedef struct circle {
	point point;
	double r;
} circle;

int main()
{
	double PI = 3.141592;
	circle* c = (circle*)malloc(sizeof(circle));

	printf("원 중심 좌표 (x, y): ");
	scanf("%lf %lf", &c[0].point.x, &c[0].point.y);
	printf("반지름: ");
	scanf("%lf", &c[0].r);

	printf("원 면적: %.2lf\n", PI * c[0].r * c[0].r);

	return 0;
}