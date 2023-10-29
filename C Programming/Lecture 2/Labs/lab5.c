#include<stdio.h>

void main()
{
    int id;

    printf("Enter your ID: ");
    scanf(" %d",&id);

    switch (id)
    {
    case 1234:
        printf("Welcome Ahmed");
        break;
    
    case 5678:
        printf("Welcome Youssef");
        break;
    
    case 1145:
        printf("Welcome Mena");
        break;
    
    default:
        printf("Wrong ID");
        break;
    }
}