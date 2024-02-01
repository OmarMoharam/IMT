#include<stdio.h>

#define SIZE 5

void sortedArray(int *arr_ptr, int size);
void swap(int *current, int *after);

void main() {
    int arr[SIZE] = {5,14,3,88,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortedArray(arr, size);

}

void sortedArray(int *arr_ptr, int size) {
    int temp;

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