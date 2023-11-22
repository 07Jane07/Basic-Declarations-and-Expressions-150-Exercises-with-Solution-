// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

#include <stdio.h>

int main() {
    int numberOfDays, days, month, years;

    numberOfDays = 2535;

    years = numberOfDays / 365;
    numberOfDays = numberOfDays - (365 * years);
    month = (int)numberOfDays / 30;
    days = (int)numberOfDays - (month * 30);
    
    printf("Years: %d\nMonth: %d\nDays: %d\n", years, month, days);
}