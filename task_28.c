// Write a C program that reads two integers and checks whether they are multiplied or not.

#include <stdio.h>

int main() {
    int a, b;

    printf("Input the first integer: ");
    scanf("%d", &a);

    printf("Input the second integer: ");
    scanf("%d", &b);

    if (a * b && b * a)
    {   
        printf("Multiplied!");
    } else
    {
        printf("Wrong integer!");
    }
    
    return 0;
}