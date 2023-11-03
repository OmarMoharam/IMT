#include<stdio.h>

void main()
{
    int fac, res = 1;

    printf("Enter the number to display its factorial: ");
    scanf(" %d",&fac);

    for (fac; fac >= 1; fac--)
    {
        res = res * fac;
        
    }
    
    printf("Factorial is: %d",res);
}