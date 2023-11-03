#include<stdio.h>

void main(void) {
    int arr[10], noToSearch, counter = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[i]);
    }

    printf("Enter the number you want to search: \n");
    scanf(" %d",&noToSearch);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == noToSearch)
        {
            counter++;
        }
        
    }
    
    if (counter > 0)
    {
        printf("Value Exist %d times",counter);
    }
    else
    {
        printf("Value Not Exist");
    }
}