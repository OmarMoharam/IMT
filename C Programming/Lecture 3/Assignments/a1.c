#include<stdio.h>

void main(void) {
    int num1, num2, sum =0;

    while (1)
    {
        printf("Please enter first number: ");
        scanf(" %d",&num1);
        printf("Please enter second number: ");
        scanf(" %d",&num2);

        sum = num1 + num2;

        printf("The result is: %d\n",sum);
        sum = 0;
    }
    
}