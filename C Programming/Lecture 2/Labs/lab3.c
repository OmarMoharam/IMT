#include<stdio.h>

void main()
{
    int num, res;
    printf("Enter the number: ");
    scanf(" %d",&num);

    res = num % 2;

    if (res == 0)
    {
        printf("Even");
    }
    else
    {
        printf("ODD");
    }
    
}