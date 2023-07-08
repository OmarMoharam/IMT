/* Write a C code that will ask the user to enter a value then print it. */

#include <stdio.h>

void main (void)
{
    int data;
    printf("Please Enter the value: ");
    scanf(" %d",&data);
    printf("The entered value is %d",data);
}