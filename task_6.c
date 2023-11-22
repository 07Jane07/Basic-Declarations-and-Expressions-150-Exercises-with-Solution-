// Write a C program to print info book with struct.

#include <stdio.h>
#include <string.h>

typedef struct company
{
    char name[20];
    char founderCompany[30];
    int foundingYear;
    char specialization[20];
    int revenue;
} info_company;

int main() {
    info_company HP;

    strcpy(HP.name, "HP");
    strcpy(HP.founderCompany, "Bill Hewlett and David Packard");
    HP.foundingYear = 1939;
    strcpy(HP.specialization, "Hardware components");
    HP.revenue = 2000000000;

    printf("Name of Company: %s\nFounder of Company: %s\nFounded: %d\nSpesialization: %s\nRevenue: %d\n", HP.name, HP.founderCompany, HP.foundingYear, HP.specialization, HP.revenue );
}
