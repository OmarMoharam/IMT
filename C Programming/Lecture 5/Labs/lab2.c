#include<stdio.h>

#define SIZE 10

void main(void) {
    int arr[SIZE], sum = 0;
    float avg = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[i]);
        sum += arr[i];
    }

    avg = sum / SIZE;

    printf("Sum of array elements = %d\n",sum);
    printf("Average of array elements = %0.2f\n",avg);
    
}