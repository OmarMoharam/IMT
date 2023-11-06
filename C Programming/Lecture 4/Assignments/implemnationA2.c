#include<stdio.h>

void add(int num1, int num2)
{
    printf("Sum is: %d\n",num1 + num2);
}

void sub(int num1, int num2)
{
    printf("Subtract is: %d\n",num1 - num2);
}

void multi(int num1, int num2)
{
    printf("Multiply is: %d\n",num1 * num2);
}

void divide(int num1, int num2)
{
    printf("Divide is: %d\n",num1 / num2);
}

void and(int num1, int num2)
{
    printf("And is: %d\n",num1 & num2);
}

void or(int num1, int num2)
{
    printf("OR is: %d\n",num1 | num2);
}

void not(int num1)
{
    printf("Not is: %d\n",!num1);
}

void xor(int num1, int num2)
{
    printf("Xor is: %d\n",num1^num2);
}

void reminder(int num1, int num2)
{
    printf("Reminder is: %d\n",num1%num2);
}

void incre(int num1)
{
    printf("Increment is: %d\n",++num1);
}

void decre(int num1)
{
    printf("Decrement is: %d\n",--num1);
}