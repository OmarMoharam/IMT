#include<stdio.h>

void main()
{
    int num1, num2, sum, and, or, xor,sub;

    printf("please enter number 1: ");
    scanf(" %d",&num1);
    printf("please enter number 2: ");
    scanf(" %d",&num2);

    sum = num1 + num2;
    sub = num1 - num2;
    and = num1 & num2;
    or = num1 | num2;
    xor = num1 ^ num2;

    printf("a + b = %d\n",sum);
    printf("a - b = %d\n",sub);
    printf("a & b = %d\n",and);
    printf("a | b = %d\n",or);
    printf("a ^ b = %d\n",xor);

}