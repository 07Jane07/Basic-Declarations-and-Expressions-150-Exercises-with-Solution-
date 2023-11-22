// C program to find perimeter of a rectangle

#include <stdio.h>

int main() {
    int a, b, result;
    
    printf("Enter length: ");
    scanf("%d", &a);
    
    printf("Enter width: ");
    scanf("%d", &b);
    
    result = a * b;
    
    printf("Perimeter of rectangle: %d sq. units", result);
    
    return 0;
}