// C program to find perimeter of a rectangle

#include <stdio.h>

int main() {
    int a, b, result;
    
    printf("Enter length: ");
    scanf("%d", &a);
    
    printf("Enter width: ");
    scanf("%d", &b);
    
    result = (a + b) * 2;
    
    printf("Perimeter of rectangle: %d", result);
    
    return 0;
}