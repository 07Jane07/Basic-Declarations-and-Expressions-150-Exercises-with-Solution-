// Write a C program to print your name, date of birth, and mobile number.

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Alexandra Abramov";
    char dateBirth[] = "July 14, 1975";
    int mobile = 99-999999999;

    printf("Name: %s\nDOB: %s\nMobile: %d", name, dateBirth, mobile);

    return 0;

}