#include<stdio.h>

void swap (int num1 , int num2);

void main(void) {
    int num1, num2;

    printf("Enter the first number: ");
    scanf(" %d",&num1);
    printf("Enter the second number: ");
    scanf(" %d",&num2);

    printf("X before swapping: %d\n",num1);
    printf("Y before swapping: %d\n\n",num2);

    swap(num1, num2);

}

void swap (int num1 , int num2) {
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("X after swapping: %d\n",num1);
    printf("Y after swapping: %d\n\n",num2);
}