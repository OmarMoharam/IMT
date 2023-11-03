#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number to display its multiplication table: ");
    scanf(" %d",&num);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n",num , i , num*i);
    }
    
}