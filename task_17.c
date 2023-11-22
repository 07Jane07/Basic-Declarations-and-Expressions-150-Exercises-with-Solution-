// Write a C program that accepts two integers from the user and calculates the product of the two integers.

#include <stdio.h>

int main() {
    int a, b, sum;

    printf("\nInput the first integer: ");
    scanf("%d", &a);

    printf("\nInput the second integer: ");
    scanf("%d", &b);

    sum = a * b;

    printf("\nProduct of the above two integers %d\n", sum);

    return 0;
}