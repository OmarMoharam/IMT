#include"Clinical_Management_System.h"

Node *head = NULL;

/* for reserved slots */
char slots[5][20] = {
        "1- 2pm to 2:30pm",
        "2- 2:30pm to 3pm",
        "3- 3pm to 3:30pm",
        "4- 4pm to 4:30pm",
        "5- 4:30pm to 5pm"
    };
static int slotStates[5] = {0,0,0,0,0}; //0 not reserved , 1 reserved
static int slotID[5] = {0,0,0,0,0};


int searchID(int ID)
{
    Node *current = head;

    while (current != NULL)
    {
        if (current->ID == ID)
        {
            return 1;
        }
        current = current->next;
    }
    
    return 0;
}


void insertIntoList(const char *name, const char *gender, char age, int ID)
{
    if (searchID(ID))
    {
        printf("Patient ID already exists.\n");
        return;
    }
    
    Node *newNode = (Node *)malloc(sizeof(Node));
    /* to handle allocation errors */
    if (!newNode)
    {
        printf("Memory allocation failed\n");
        return;
    }
    
    newNode->age = age;
    newNode->ID = ID;
    /* This method is similar to malloc function and can use free with it 
    and it used to allocate a memory for duplicated string */
    newNode->name = strdup(name);
    newNode->gender = strdup(gender);
    newNode->next = NULL;
    newNode->pre = NULL;
    
    /* to handle allocation error */
    if (!newNode->name || !newNode->gender)
    {
        printf("Memory allocation for strings failed\n");
        free(newNode);
        return;
    }

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;

        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->pre = current;
    }
    
    printf("\nInsertion Completed Successfully\n");
}


void editName(int ID, const char *newName)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->ID == ID)
        {
            free(current->name);
            current->name = strdup(newName);
            if (!current->name)
            {
                printf("Memory allocation for name failed\n");
            }
            else 
            {
                printf("\nEdit Completed Successfully\n");
            }
            return;
        }
        current = current->next;
        
    }
    printf("Patient ID not found\n");
}

void editGender(int ID, const char *newGender)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->ID == ID)
        {
            free(current->gender);
            current->gender = strdup(newGender);
            if (!current->gender)
            {
                printf("Memory allocation for gender failed\n");
            }
            else 
            {
                printf("\nEdit Completed Successfully\n");
            }
            return;
        }
        current = current->next;
        
    }
    printf("Patient ID not found\n");
    
}

void editAge(int ID, char newAge)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->ID == ID)
        {   
            current->age = newAge;
            printf("\nEdit Completed Successfully\n");
            return;
        }

        current = current->next;
    }
    printf("Patient ID not found\n");
}

void printRecord(int ID)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->ID == ID)
        {
            printf("The Patient Information are: \n");
            printf("Name: %s\n", current->name);
            printf("Gender: %s\n", current->gender);
            printf("Age: %d\n", current->age);
            return;
        }
        current = current->next;
    }
    printf("Patient ID not found\n");
}

void reserveSlot(void)
{
    int noSlotFlag = 0, slot , ID;

    printf("Available slots:\n");
    for (int i = 0; i < 5; i++)
    {
        if (slotStates[i] == 0)
        {
            printf("%s\n",slots[i]);
            noSlotFlag = 1;
        }
        
    }
    
    if (noSlotFlag == 0)
    {
        printf("No Slots available\n");
        return;
    }

    printf("Enter patient ID: ");
    scanf(" %d",&ID);

    if (searchID(ID) == 0)
    {
        printf("Can't reserve for non-existance patient\n");
        return;
    }

    printf("Enter the desired slot: ");
    scanf(" %d",&slot);
    slot--;

    if (slot < 0 || slot >= 5 || slotStates[slot] == 1)
    {
        printf("Invalid slot or slot already reserved\n");
        return;
    }

    slotStates[slot] = 1;
    slotID[slot] = ID;
    
    printf("Slot %s reserved successfully for patient ID %d.\n", slots[slot], ID);
    
}


void cancelSlot(int ID)
{
    for (int i = 0; i < 5; i++)
    {
        if (slotID[i] == ID)
        {
            slotID[i] = 0;
            slotStates[i] = 0;
            printf("The Reservation cancelled successfully\n");
            return;
        }
        
    }
    
    printf("No reservation found for the provided patient ID.\n");
}

void viewReservation(void)
{
    int flag = 0;

    printf("Current Reservations:\n");
    for (int i = 0; i < 5; i++)
    {
        if (slotStates[i] == 1)
        {
            printf("ID: %d\tSlot: %s\n", slotID[i], slots[i]);
            flag = 1;

        }
        
    }
    
    if (!flag)
    {
        printf("No Reservations\n");
    }
    
}