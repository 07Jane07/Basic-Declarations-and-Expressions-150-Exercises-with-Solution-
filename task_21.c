/* Write a C program to calculate a bike’s average consumption from the given total distance (integer value)
 travelled (in km) and spent fuel (in litters, float number – 2 decimal points).*/

 #include <stdio.h>

 int main() {
    int distance, liters;
    float average;

    printf("\nInput total distance in km: ");
    scanf("%d", &distance);

    printf("\nInput total fuel spent in liters: ");
    scanf("%d", &liters);

    average = distance / liters;

    printf("Average consumption (km/lt) %.3f", average);
    return 0;
 }