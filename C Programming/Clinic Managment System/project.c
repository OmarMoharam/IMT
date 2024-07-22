#include<stdio.h>
#include"project.h"

void main()
{
    short int admin_pass = 0, enter_mode, adminLog = 0, adminFlag = 0, adminChoice = 0;


    while (1)
    {
        printf("Choose\n1-Admin Mode\n2-User Mode\n");
        scanf(" %d",&enter_mode);

        switch (enter_mode)
        {
        case 1:
            printf("Hello, please enter the password: ");
            scanf(" %d",&admin_pass);
        
            while (admin_pass != ADMIN_PASSWORD && adminLog <= 2)
            {   
                adminLog++;
                if (adminLog == 3)
                {
                    adminFlag = 1;
                }

                if (adminFlag == 1)
                {
                    break;
                }

                printf("Incorrect password, please try again: ");
                scanf(" %d",&admin_pass);
            }
        
            if (adminFlag == 1)
            {
                printf("Incorrect password for 3 times, please try again later\n");
                adminFlag = 0;
                adminLog = 0;
            }
            else if (adminFlag == 0 || admin_pass == ADMIN_PASSWORD)
            {
                adminFlag = 0;
                adminLog = 0;
                
                while (1)
                {
                    printf("Welcome dear admin to the control screen for the clinic, please choose what do you want to do"
                    "\n1-Add New Patient"
                    "\n2-Edit Patient Record"
                    "\n3-Reserve a Slot"
                    "\n4-Cancel Reservation"
                    "\n5-Exit");
                    scanf(" %d",&adminChoice);

                    switch (adminChoice)
                    {
                    case 1:
                        /* add new patient */
                        break;
                    case 2:
                        /* edit patient */
                        break;
                    case 3:
                        /* Reserve a Slot */
                        break;
                    case 4:
                        /* Cancel Reservation */
                        break;
                    case 5:
                        /* exit */
                        break;

                    default:
                        printf("Wrong choice, please insert a correct choice\n");
                        break;
                    }

                }
               
            }
        
        
        break;
    
     case 2:
        printf("Hello, please enter your ID");
        break;
    
    default:
        printf("No such choice, please try again");
        break;
    }
    }
    
    

    
}