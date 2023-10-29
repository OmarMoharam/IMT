#include<stdio.h>

void main()
{
    int workingHours, salary, deduction = 0.1, hourRate = 50;

    printf("Enter your working hours: ");
    scanf(" %d",&workingHours);

    if (workingHours < 40)
    {
        salary = 0.9 * hourRate * workingHours;
        //salary -= (salary * deduction);
        printf("Your salary is: %d",salary);
    }
    else
    {
        salary = hourRate * workingHours;
        printf("Your salary is: %d",salary);
    }
}