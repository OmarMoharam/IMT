#include<stdio.h>

int getMax(int num1, int num2);

void main(void) {
    int num1 , num2, max;

    printf("Enter the first number: ");
    scanf(" %d",&num1);
    printf("Enter the second number: ");
    scanf(" %d",&num2);

    max = getMax(num1 , num2);
    printf("The maximum number is: %d",max);
}


int getMax(int num1, int num2) {
    if (num1 > num2) {
        return num1 ;
    }
    else {
        return num2 ;
    }
    
}