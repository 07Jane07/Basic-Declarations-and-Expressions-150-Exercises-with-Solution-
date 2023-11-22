// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.

#include <stdio.h>

int main() {
    double item1 = 15;
    double no1 = 5;

    double item2 = 25;
    double no2 = 4;

    double average = ((item1 * no1) + (item2 * no2)) / 9;

    printf("Average Value = %f\n", average);
    return 0;
}