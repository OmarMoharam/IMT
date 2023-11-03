#include<stdio.h>

#define SIZE 10

void main(void) {
    int arr[SIZE], noToSearch, left, right, mid = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[i]);
    }

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp;

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    printf("Enter the number you want to search: ");
    scanf(" %d",&noToSearch);

    left = 0;
    right = SIZE - 1;
    

    while (left <= right)
    {
        mid = ((right - left) / 2) + left;
        if (noToSearch == arr[mid])
        {
            printf("Value Found");
            break;
        }
        else if (noToSearch > arr[mid])
        {
            left = mid + 1;
            mid = ((right - left) / 2) + left;
        }
        else if (noToSearch < arr[mid])
        {
            right = mid - 1;
            mid = ((right - left) / 2) + left;
        }
        
        if ((left == right) && (arr[left] != noToSearch))
        {
            printf("Value Not Found");
            break;
        }
        
        
        
    }
    
}