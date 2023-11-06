#include<stdio.h>

void main()
{
    int id, password, counter = 0, flag = 0;

    printf("Enter your ID: ");
    scanf(" %d",&id);

    switch (id)
    {
    case 1234:
        printf("Enter your password: ");
        scanf(" %d",&password);
        while ((counter < 2 ) || (flag == 1))
        {
            if (password == 7788)
            {
                printf("Welcome Ahmed");
                break;
            }
            else
            {
                if (flag == 1)
                {
                    flag = 0;
                    break;
                }
                printf("Try again: ");
                scanf(" %d",&password);
                counter++;
                if (counter == 2)
                {
                    flag = 1;
                }
                
            }
        }
        if ((counter == 2) && (flag == 0))
        {
            printf("Incorrect password for 3 times, No more tries");
        }
        
        break;
    
    case 5678:
        printf("Enter your password: ");
        scanf(" %d",&password);
        while ((counter < 2 ) || (flag == 1))
        {
            if (password == 5566)
            {
                printf("Welcome Amr");
                break;
            }
            else
            {
                if (flag == 1)
                {
                    flag = 0;
                    break;
                }
                printf("Try again: ");
                scanf(" %d",&password);
                counter++;
                if (counter == 2)
                {
                    flag = 1;
                }
                
            }
        }
        if ((counter == 2) && (flag == 0))
        {
            printf("Incorrect password for 3 times, No more tries");
        }
        break;
    
    case 9870:
        printf("Enter your password: ");
        scanf(" %d",&password);
        while ((counter < 2 ) || (flag == 1))
        {
            if (password == 1122)
            {
                printf("Welcome Wael");
                break;
            }
            else
            {
                if (flag == 1)
                {
                    flag = 0;
                    break;
                }
                printf("Try again: ");
                scanf(" %d",&password);
                counter++;
                if (counter == 2)
                {
                    flag = 1;
                }
                
            }
        }
        if ((counter == 2) && (flag == 0))
        {
            printf("Incorrect password for 3 times, No more tries");
        }
        break;
    
    default:
        printf("You are not registered");
        break;
    }
}