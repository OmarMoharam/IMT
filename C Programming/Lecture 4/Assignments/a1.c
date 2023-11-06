#include<stdio.h>

void max(int num1, int num2, int num3, int num4);
void min(int num1, int num2, int num3, int num4);

void main(void)
{
    int num1, num2, num3, num4;

    printf("Enter number 1: ");
    scanf(" %d",&num1);
    printf("Enter number 2: ");
    scanf(" %d",&num2);
    printf("Enter number 3: ");
    scanf(" %d",&num3);
    printf("Enter number 4: ");
    scanf(" %d",&num4);

    max(num1, num2, num3, num4);
    min(num1, num2, num3, num4);
    
}

void max(int num1, int num2, int num3, int num4)
{
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("The maximum number is: %d\n",num1);
            }
            else
            {
                printf("The maximum number is: %d\n",num4);
            }
            
        }
        else
        {
            if (num3 > num4)
            {
                printf("The maximum number is: %d\n",num3);
            }
            else
            {
                printf("The maximum number is: %d\n",num4);
            }
        }
        
    }
    else
    {
        if (num2 > num3)
        {
            if (num2 > num4)
            {
                printf("The maximum number is: %d\n",num2);
            }
            else
            {
                printf("The maximum number is: %d\n",num4);
            }
            
        }
        else
        {
            if (num3 > num4)
            {
                printf("The maximum number is: %d\n",num3);
            }
            else
            {
                printf("The maximum number is: %d\n",num4);
            }
        }        
    }
    
    
}

void min(int num1, int num2, int num3, int num4)
{
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                printf("The minimum number is: %d\n",num1);
            }
            else
            {
                printf("The minimum number is: %d\n",num4);
            }
            
        }
        else
        {
            if (num3 < num4)
            {
                printf("The minimum number is: %d\n",num3);
            }
            else
            {
                printf("The minimum number is: %d\n",num4);
            }
        }
        
    }
    else
    {
        if (num2 < num3)
        {
            if (num2 < num4)
            {
                printf("The minimum number is: %d\n",num2);
            }
            else
            {
                printf("The minimum number is: %d\n",num4);
            }
            
        }
        else
        {
            if (num3 < num4)
            {
                printf("The minimum number is: %d\n",num3);
            }
            else
            {
                printf("The minimum number is: %d\n",num4);
            }
        }        
    }
}