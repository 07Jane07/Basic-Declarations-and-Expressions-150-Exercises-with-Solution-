// C program to perform all arithmetic operations

#include<stdio.h>

int main()
{
    int a, b, sum, difference, product, quotent, moduls;
    
    printf("Enter your first number: ");
    scanf("%d", &a);
    
    printf("Enter your second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotent = a / b;
    moduls = a % b;

    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotent = %d\nModuls = %d\n",
    sum, difference, product, quotent, moduls);

    return 0;
}