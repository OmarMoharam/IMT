#include<stdio.h>

void op(int num1, int num2, int *sum, int *sub);

void main (void)
{
    int num1, num2, sum = 0, sub = 0;

    printf("Enter the first number: ");
    scanf(" %d",&num1);

    printf("Enter the second number: ");
    scanf(" %d",&num2);

    op(num1, num2, &sum, &sub);

    printf("The summation is: %d",sum);
    printf("The subtraction is: %d",sub);
}

void op(int num1, int num2, int *sum, int *sub) {
    *sum = num1 + num2;
    *sub = num1 - num2;
}