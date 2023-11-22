// Write a C program to calculate the distance between two points.

#include <stdio.h>

int main() {
    double x1, y1, x2, y2, distance;

    printf("\nInput x1: ");
    scanf("%d", &x1);

    printf("\nInput y1: ");
    scanf("%d", &y1);

    printf("\nInput x2: ");
    scanf("%d", &x2);

    printf("\nInput y2: ");
    scanf("%d", &y2);

    distance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    printf("Distance between the said points: %d", distance);
    return 0;
}