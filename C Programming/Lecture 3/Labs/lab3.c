#include<stdio.h>

void main()
{
    int num, sum = 0;
    float avg = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ",i);
        scanf(" %d",&num);
        sum += num;
    }

    printf("Sum is: %d\n",sum);

    avg = sum / 10;

    printf("Avg is: %d",avg);
    
}