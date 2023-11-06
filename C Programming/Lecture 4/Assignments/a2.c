#include<stdio.h>
void add(int num1, int num2);
void sub(int num1, int num2);
void multi(int num1, int num2);
void divide(int num1, int num2);
void and(int num1, int num2);
void or(int num1, int num2);
void not(int num1);
void xor(int num1, int num2);
void reminder(int num1, int num2);
void incre(int num1);
void decre(int num1);

void main(void)
{
    int num1, num2;
    char op;
    printf("Enter the operation: ");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        add(num1, num2);
        break;
    
    case '-':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        sub(num1, num2);
        break;
    
    case '*':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        multi(num1, num2);
        break;
    
    case '/':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        divide(num1, num2);
        break;
    
    case '&':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        and(num1, num2);
        break;
    
    case '|':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        or(num1, num2);
        break;
    
    case '!':
        printf("Enter number: ");
        scanf(" %d",&num1);
        not(num1);
        break;
    
    case '^':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        xor(num1, num2);
        break;
    
    case '%':
        printf("Enter number 1: ");
        scanf(" %d",&num1);
        printf("Enter number 2: ");
        scanf(" %d",&num2);
        reminder(num1, num2);
        break;
    
    case 'I':
        printf("Enter number: ");
        scanf(" %d",&num1);
        incre(num1);
        break;
    
    case 'D':
        printf("Enter number: ");
        scanf(" %d",&num1);
        decre(num1);
        break;

    default:
        printf("Wrong Operation");
        break;
    }
}
