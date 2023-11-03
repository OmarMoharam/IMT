#include<stdio.h>

int fac(int num);

void main (void) {
    int num;

    printf("Enter the number: ");
    scanf(" %d",&num);

    int res = fac(num);
    printf("The factorial is: %d",res);

}

int fac (int num) {
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * fac(num - 1);
    }
    
}