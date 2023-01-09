#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    int x;
    int y;
} point;

void f(point a, point b, double* slope, double* intercept) {
    *slope = (b.x - a.x) / (b.y - a.y);
  
    *intercept = a.y -  (*slope) * a.x;
}

int main() {
    double slope = 0, intercept = 0;

    point* a = (point*)malloc(sizeof(point));
    point* b = (point*)malloc(sizeof(point));

    printf("a = (x1, y1), b = (x2, y2) 값을 입력하시오: ");
    scanf("%d %d %d %d", &a->x, &a->y, &b->x, &b->y);

    f(*a, *b, &slope, &intercept);

    printf("기울기: %lf, y절편: %lf\n", slope, intercept);

    return 0;
}