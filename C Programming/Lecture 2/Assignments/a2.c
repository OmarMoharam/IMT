#include<stdio.h>

void main()
{
    int id, password;

    printf("Enter your ID: ");
    scanf(" %d",&id);

    switch (id)
    {
    case 1234:
        printf("Enter your password: ");
        scanf(" %d",&password);
        if (password == 1234)
        {
            printf("Welcome Ahmed");
        }
        else
        {
            printf("Incorrect password");
        }
        break;
    
    case 5678:
        printf("Enter your password: ");
        scanf(" %d",&password);
        if (password == 5678)
        {
            printf("Welcome Khaled");
        }
        else
        {
            printf("Incorrect password");
        }
        break;
    
    case 1145:
        printf("Enter your password: ");
        scanf(" %d",&password);
        if (password == 1145)
        {
            printf("Welcome Omar");
        }
        else
        {
            printf("Incorrect password");
        }
        break;
    
    default:
        printf("Incorrect ID");
        break;
    }
}