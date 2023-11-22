// Write a C program that accepts three integers and finds the maximum of three.

#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Input the first integer: ");
    scanf("%d", &num1);

    printf("\nInput the second integer: ");
    scanf("%d", &num2);

    printf("\nInput the third integer: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Maximum value of three integers: %d", num1);
    }
    if (num1 < num2 && num2 > num3)
    {
        printf("Maximum value of three integers: %d", num2);
    } 
    else {
        printf("Maximum value of three integers: %d", num3);
    }
    
    return 0;
    
}