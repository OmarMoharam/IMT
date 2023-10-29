#include<stdio.h>

void main()
{
    int x = 0 , y = 1;
    printf("False value in GCC: %d\n", x && y);
    printf("True value in GCC: %d\n", x || y);
}