// Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.

#include <stdio.h>
#include <string.h>


int main()
{
    int a, b, i, sum = 0;

    printf("Input first number of the pair: ");
    scanf("%d", &a);

    printf("Input second number of the pair: ");
    scanf("%d", &b);

    if (a < b)
    {
        return 0;
    }

    for (i = b; i <= a; i++)
    {
        if ((i % 2) != 0)
        {
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("Sum = %d\n", sum);

    return 0;
}