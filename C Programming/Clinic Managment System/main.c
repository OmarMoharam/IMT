#include "Clinical_Management_System.h"

void main()
{
    int modeChoice, userChoice, adminChoice, editChoice, patientID, adminPassword, passCounter = 0;
    char patientAge;
    int adminExitFlag = 0;
    char patientName[50];
    char patientGender[20];

    while (1)
    {
        printf("\nWelcome to Clinical Management System\n");
        printf("1- Admin Mode\n");
        printf("2- User Mode\nPlease choose the mode: ");
        scanf(" %d",&modeChoice);

        switch (modeChoice)
        {
        case ADMIN_MODE:

            while (passCounter < 3)
            {
                printf("Please enter the password: ");
                scanf(" %d",&adminPassword);

                if (adminPassword == 1234)
                {
                    printf("Welcome to admin mode\n");
                    while (1)
                    {
                        printf("1- Add new patient record.\n");
                        printf("2- Edit patient record.\n");
                        printf("3- Reserve a slot with the doctor.\n");
                        printf("4- Cancel reservation.\n");
                        printf("5- Exit Admin Mode.\nEnter your choice: ");
                        scanf("%d", &adminChoice);

                        if (adminChoice == 5)
                        {
                            adminExitFlag = 1;
                            break;
                        }

                        switch (adminChoice)
                        {
                        case 1:
                            printf("Enter the patient ID: ");
                            scanf(" %d",&patientID);
                            if (searchID(patientID))
                            {
                                printf("Patient ID already exists.\n");
                            }
                            else
                            {
                                printf("Enter the patient Name: ");
                                getchar(); // to consume the newline character left by previous scanf
                                fgets(patientName, sizeof(patientName), stdin);
                                patientName[strcspn(patientName, "\n")] = 0; // remove newline character
                                
                                printf("Enter the patient Gender: ");
                                fgets(patientGender, sizeof(patientGender), stdin);
                                patientGender[strcspn(patientGender, "\n")] = 0; // remove newline character
                                
                                printf("Enter the patient Age: ");
                                scanf(" %hhd",&patientAge);
                                insertIntoList(patientName, patientGender, patientAge, patientID);
                            }
                            break;
                        case 2:
                            printf("Enter the patient ID: ");
                            scanf(" %d",&patientID);
                            if (!searchID(patientID)) 
                            {
                                printf("Patient ID not found\n");
                            }
                            else
                            {
                                printf("1- Edit Name\n2- Edit Gender\n3- Edit Age\nEnter what you want to edit: ");
                                scanf(" %d",&editChoice);

                                switch (editChoice)
                                {
                                case 1:
                                    printf("Enter the patient Name: ");
                                    getchar(); // to consume the newline character left by previous scanf
                                    fgets(patientName, sizeof(patientName), stdin);
                                    patientName[strcspn(patientName, "\n")] = 0; // remove newline character
                                    editName(patientID, patientName);
                                    break;
                                case 2:
                                    printf("Enter the patient Gender: ");
                                    getchar(); // to consume the newline character left by previous scanf
                                    fgets(patientGender, sizeof(patientGender), stdin);
                                    patientGender[strcspn(patientGender, "\n")] = 0; // remove newline character
                                    editGender(patientID, patientGender);
                                    break;
                                case 3:
                                    printf("Enter the patient Age: ");
                                    scanf(" %hhd",&patientAge);
                                    editAge(patientID, patientAge);
                                    break;

                                default:
                                    printf("Wrong Choice, Please try again later\n");
                                    break;
                                }
                            }
                            break;
                        case 3:
                            reserveSlot();
                            break;
                        case 4:
                            printf("Enter the patient ID: ");
                            scanf(" %d",&patientID);
                            cancelSlot(patientID);
                            break;

                        default:
                            printf("Wrong Choice, Please try again later\n");
                            break;
                        }

                    }

                }

                else
                {
                    printf("Incorrect password. Try again.\n");
                    passCounter++;
                }

                if (adminExitFlag)
                {
                    break;
                }

            }
        
        
            if (!adminExitFlag)
            {
                printf("Too many incorrect attempts. System closed.\n");
            }
            passCounter = 0;
            break;
        
        case USER_MODE:
            printf("Welcome to user mode\n");
            while (1)
            {
                printf("1- View patient record.\n2- View today's reservations.\n3- Exit User Mode.\nEnter your choice: ");
                scanf(" %d",&userChoice);

                if (userChoice == 3)
                {
                    break;
                }

                switch (userChoice)
                {
                case 1:
                    printf("\nPlease Enter the patient ID: ");
                    scanf(" %d",&patientID);
                    printRecord(patientID);
                    break;

                case 2:
                    viewReservation();
                    break;

                default:
                    printf("Wrong choice , please try again");
                    break;
                }
            }
            break;
        
        default:
            printf("Wrong choice , please try again\n");
            break;
        }
    }
    
}