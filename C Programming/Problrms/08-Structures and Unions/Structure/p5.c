#include<stdio.h>
#define SIZE 10

typedef unsigned int u16;

typedef struct
{
    u16 max;
    u16 min;
}level;

level findInArr(u16 *ptr, u16 size);

void main() {
    u16 arr[SIZE];
    u16 size = sizeof(arr) / sizeof(arr[0]);
    level found;

    printf("Enter Values:\n");
    for (u16 i = 0; i < SIZE; i++)
    {
        scanf(" %d",&arr[i]);
    }

    found = findInArr(arr, size);
    printf("Max value: %d\nMin value: %d",found.max, found.min);
    
}

level findInArr(u16 *ptr, u16 size) {
    u16 max = ptr[0];
    u16 min = ptr[0];
    level result;

    //find max min algorithm
    for (u16 i = 0; i < size; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
        
        if (ptr[i] < min) {
            min = ptr[i];
        }
        
    }
    
    result.max = max;
    result.min = min;

    return result;
}