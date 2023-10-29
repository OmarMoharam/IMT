#include<stdio.h>

void main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, search;

    printf("Enter Number 1: ");
    scanf(" %d",&num1);
    printf("Enter Number 2: ");
    scanf(" %d",&num2);
    printf("Enter Number 3: ");
    scanf(" %d",&num3);
    printf("Enter Number 4: ");
    scanf(" %d",&num4);
    printf("Enter Number 5: ");
    scanf(" %d",&num5);
    printf("Enter Number 6: ");
    scanf(" %d",&num6);
    printf("Enter Number 7: ");
    scanf(" %d",&num7);
    printf("Enter Number 8: ");
    scanf(" %d",&num8);
    printf("Enter Number 9: ");
    scanf(" %d",&num9);
    printf("Enter Number 10: ");
    scanf(" %d",&num10);
    
    printf("Enter the value to search: ");
    scanf(" %d",&search);

    if (search == num1)
    {
        printf("The Value is exist at element number 1");
    }
    else if (search == num2)
    {
        printf("The Value is exist at element number 2");
    }
    else if (search == num3)
    {
        printf("The Value is exist at element number 3");
    }
    else if (search == num4)
    {
        printf("The Value is exist at element number 4");
    }
    else if (search == num5)
    {
        printf("The Value is exist at element number 5");
    }
    else if (search == num6)
    {
        printf("The Value is exist at element number 6");
    }
    else if (search == num7)
    {
        printf("The Value is exist at element number 7");
    }
    else if (search == num8)
    {
        printf("The Value is exist at element number 8");
    }
    else if (search == num9)
    {
        printf("The Value is exist at element number 9");
    }
    else if (search == num10)
    {
        printf("The Value is exist at element number 10");
    }
    else
    {
        printf("Number no exist");
    }


}
