#include<stdio.h>

#define SIZE 10
void main()
{
    int arr[SIZE] = {0}, max, min;

    for (int i = 1; i < 11; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[--i]);
        ++i;
    }
   
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] >= max)
            max = arr[i];

        if(arr[i] <= min)
            min = arr[i];
    }

    printf("The max value user entered is: %d\n",max);
    printf("The min value user entered is: %d\n",min);
}