#include<stdio.h>

#define SIZE 10

void swap(int first , int second);
void bubbleSorting(int arr[SIZE]);

void main(void) {
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[i]);
    }

    bubbleSorting(arr);

}

void swap (int first , int second) {
    int temp;

    temp = first;
    first = second;
    second = temp;
}

void bubbleSorting(int arr[SIZE]) {
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
            
        }
        
    }

    printf("Values after sorting: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n",arr[i]);
    }
    
} 


/*#include<stdio.h>

#define SIZE 10

void swap(int first , int second);
void bubbleSorting(int arr[SIZE]);

void main(void) {
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ",i);
        scanf(" %d",&arr[i]);
    }

    //bubbleSorting(arr[SIZE]);

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

    printf("Values after sorting: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n",arr[i]);
    }

}

/*void swap (int first , int second) {
    int temp;

    temp = first;
    first = second;
    second = temp;
}

void bubbleSorting(int arr[SIZE]) {
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
            
        }
        
    }

    printf("Values after sorting: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n",arr[i]);
    }
    
} */