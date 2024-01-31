#include<stdio.h>

#define SIZE 10

int scaler(int *arr1, int *arr2, int size);

void main() {
    int arr1[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int res = 0;

    res = scaler(arr1, arr2, SIZE);
    printf("The scaler is: %d",res);
}

int scaler(int *arr1, int *arr2, int size) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + (*(arr1 + i) * *(arr2 + i));
    }
    
    return sum;
}