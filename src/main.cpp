#include "circle.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, r1, x2, y2, r2;
    int a;

    printf("Circle #1: ");
    scanf("%f%f%f", &x1, &y1, &r1);

    printf("\n\nCircle #2: ");
    scanf("%f%f%f", &x2, &y2, &r2);

    printf("\n\n 1. Circle(%.2f %.2f, %.2f)", x1, y1, r1);
    printf("\n  perimetr = %.2f", 2 * 3.14 * r1);
    printf("\n  area = %.2f\n", 3.14 * r1 * r1);
    a = CheckCircle(r1, r2, x1, x2, y1, y2);
    if (a == 1)
        printf("intersects: \n  circle #2");
    else
        printf("no intersects");

    printf("\n\1. Circle(%.2f %.2f, %.2f)", x2, y2, r2);
    printf("\n  perimetr = %.2f", 2 * 3.14 * r2);
    printf("\n  area = %.2f\n", 3.14 * r2 * r2);
    if (a == 1)
        printf("intersects: \n  circle #1\n");
    else
        printf("no intersects\n");

    return 0;
}
