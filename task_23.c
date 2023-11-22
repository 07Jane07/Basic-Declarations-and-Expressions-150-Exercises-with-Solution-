/* Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.*/

#include <stdio.h>

int main() {
    int amount, total;

    printf("\nEnter the amount: ");
    scanf("%d", &amount);

    total = amount / 100;
    printf("%d Notes of 100.00\n", total);
    amount = amount - (total * 100);

    total = amount / 50;
    printf("%d Notes of 50.00\n", total);
    amount = amount - (total * 50);

    total = amount / 20;
    printf("%d Notes of 20.00\n", total);
    amount = amount - (total * 20);

    total = amount / 10;
    printf("%d Notes of 10.00\n", total);
    amount = amount - (total * 10);

    total = amount / 5;
    printf("%d Notes of 5.00\n", total);
    amount = amount - (total * 5);

    total = amount / 2;
    printf("%d Notes of 2.00\n", total);
    amount = amount - (total * 2);

    total = amount / 1;
    printf("%d Notes of 0.00\n", total);
    amount = amount - (total * 1);

    return 0;
}