#include<stdio.h>

void main(void)
{
    int x = 10;
    int *ptr = &x;
    printf("X Before change is: %d\n",x);
    *ptr = 20;

    printf("X After change is: %d",x);
}