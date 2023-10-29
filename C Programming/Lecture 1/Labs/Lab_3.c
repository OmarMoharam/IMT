/*Write a C code that will ask the user to enter two values and print their summation and multiplication.*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
         int num1, num2, sum, multi;
         printf("Enter the first number:");
         scanf(" %d",&num1);
         printf("Enter the second number:");
         scanf(" %d",&num2);
         sum = num1 + num2;
         multi = num1 * num2;

         printf("num1 + num2 = %d\n",sum);
         printf("num1 x num2 = %d\n",multi);



}