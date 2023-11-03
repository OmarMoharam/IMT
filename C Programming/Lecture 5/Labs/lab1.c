#include<stdio.h>

void main(void) {
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[i]);
    }

    printf("The value in reversed order: \n");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n",arr[i]);
    }
    
}