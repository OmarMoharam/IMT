#include<stdio.h>

void summ(int num1, int num2, int *sum);

void main (void)
{
    int num1, num2, sum = 0;

    printf("Enter the first number: ");
    scanf(" %d",&num1);

    printf("Enter the second number: ");
    scanf(" %d",&num2);

    summ(num1, num2, &sum);

    printf("The summation is: %d",sum);
}

void summ(int num1, int num2, int *sum) {
    *sum = num1 + num2;
}