#include<stdio.h>

struct financial {
    int salary;
    int bonus;
    int deduction;
}ahmed, amr, waleed;

void main(void) {
    int sum = 0;

    printf("Please Enter Ahmed Salary: ");
    scanf(" %d",&ahmed.salary);
    printf("Please Enter Ahmed Bonus: ");
    scanf(" %d",&ahmed.bonus);
    printf("Please Enter Ahmed Deduction: ");
    scanf(" %d",&ahmed.deduction);

    printf("Please Enter Amr Salary: ");
    scanf(" %d",&amr.salary);
    printf("Please Enter Amr Bonus: ");
    scanf(" %d",&amr.bonus);
    printf("Please Enter Amr Deduction: ");
    scanf(" %d",&amr.deduction);

    printf("Please Enter Waleed Salary: ");
    scanf(" %d",&waleed.salary);
    printf("Please Enter Waleed Bonus: ");
    scanf(" %d",&waleed.bonus);
    printf("Please Enter Waleed Deduction: ");
    scanf(" %d",&waleed.deduction);

    sum = (ahmed.salary + ahmed.bonus - ahmed.deduction) + (amr.salary +  amr.bonus - amr.deduction) + (waleed.salary + waleed.bonus - waleed.deduction);
    printf("Total Value Needed is %d",sum);
}