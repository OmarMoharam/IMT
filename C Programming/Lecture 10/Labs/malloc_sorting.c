#include<stdio.h>
#include<stdlib.h>

void sortedArray(int *arr_ptr, int size);
void swap(int *current, int *after);

void main() {
    int size;
    printf("Enter the number of elements: ");
    scanf(" %d",&size);

    int *arr = (int *)malloc(size * sizeof(int));

    // to check if malloc allocate null or address
    if (arr != NULL)
    {
        for (char i = 0; i < (char)size; i++)
        {
            printf("Enter number %d: ",++i);
            --i;
            scanf(" %d",arr+i);
        }

        printf("Values after sorting:\n");
        sortedArray(arr, size);
    }
    else
    {
        printf("No more space in memory");
    }
    
    
    
}

void sortedArray(int *arr_ptr, int size) {

    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr_ptr[j] > arr_ptr[j+1]) 
            {
                swap(&arr_ptr[j] , &arr_ptr[j+1]);
            }
            
        }
        
    }
     //printing
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr_ptr[i]);
    }
    
    
}

void swap(int *current, int *after) {
    int temp;
    temp = *current;
    *current = *after;
    *after = temp;
}