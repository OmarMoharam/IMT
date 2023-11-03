#include<stdio.h>

void main()
{
    int ans = 12, userAns = 0;

    printf("Enter the answer of 3 x 4 = ");
    scanf(" %d",&userAns);

    while (userAns != ans)
    {
        printf("Not Correct, Please try again: ");
        scanf(" %d",&userAns);
    }
    
    printf("Thank You");

}