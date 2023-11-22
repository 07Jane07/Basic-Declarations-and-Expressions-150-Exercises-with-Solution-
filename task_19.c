/* Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
 Print the ID and salary (with two decimal places) of the employee for a particular month.*/

 #include <stdio.h>

 int main() {
    char id[10];
    int workHour, amountHour, salary;
    amountHour = 15000;

     printf("Input the Employees ID(Max. 10 chars): ");
     scanf("%s", &id);

     printf("Input the working hrs: ");
     scanf("%d", &workHour);

     salary = workHour * amountHour;

     printf("\nEmployees ID = %s\nSalary = U$ %d", id, salary);
     return 0;
 }