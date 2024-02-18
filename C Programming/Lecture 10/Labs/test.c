#include<stdio.h>
#include<stdlib.h>

void insertAtFirst(int value);
void insertAtLeast(int value);
void deleteValue(int value);
int searchValue(int value);
int listSize(void);
void printList(void);
void updateValue(int old_data, int new_data);

typedef struct Node
{
    int data;
    struct Node* next;

}Node;

static Node* head = NULL;
static Node* current = NULL;
static Node* deletedNode = NULL;
char flag = 0;
char update = 0;

void main() {
    short int num, find, delete, counter = 0, old, new;
    printf("Enter Values to store:\n");
    scanf(" %d",&num);
    insertAtFirst(num);

    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&num);
        insertAtLeast(num);
    }
    
    printf("The list is: \n");
    printList();

    printf("List size is: %d\n",listSize());
    
    /*printf("\nEnter the value you want to search: ");
    scanf(" %d",&find);
    searchValue(find);

    printf("\nEnter the value you want to delete: ");
    scanf(" %d",&delete);
    deleteValue(delete);

    printf("The list is: \n");
    printList();

    printf("List size is: %d\n",listSize());

    printf("\nEnter the value you want to search: ");
    scanf(" %d",&find);
    searchValue(find);*/

    printf("Enter the value you want to update: ");
    scanf("%d",&old);
    printf("%d\n",old);
    printf("Enter the value you want to update: ");
    scanf("%d",&new);
    printf("%d\n",new);
    printf("%d\n",old);
    //updateValue(old, new);

    printf("\nThe list is: \n");
    printList();

}


void insertAtFirst(int value) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->next = head;
    head = temp;
}


void insertAtLeast(int value) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }

}


void deleteValue(int value) {
    Node *prev = NULL;
    if (head == NULL) {
        printf("The list is empty");
    } 
    else if (head->data == value)
    {
        deletedNode = head;
        head = deletedNode->next;
        free(deletedNode);
        flag = 1;
    }
    else
    {
        current = head->next;
        prev = head;
        while (current != NULL)
        {
            if (current->data == value)
            {
                deletedNode = current;
                current = NULL;
                flag = 1;
                prev->next = deletedNode->next;
                free(deletedNode);
                break;
            }
            
            prev = current;
            current = current->next;
        }
        
        if (flag == 0)
        {
            printf("The value is not found");
        }
        else
        {
            flag = 0;
        }
        
    }
    
    

}


int searchValue(int value) {
    current = head;
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else if (current->data == value)
    {
        printf("Value is found");
        flag = 1;
        update = 1;
    }
    else
    {
        while (current != NULL)
        {
            if (current->data == value)
            {
                printf("Value is found");
                flag = 1;
                update = 1;
                break;
            }
            current = current->next;
        }
        
    }
    
    if (flag == 0)
    {
        printf("Value is not found");
    }
    else
    {
        flag = 0;
    }
    
    
}

int listSize(void) {
    short int counter = 0;
    current = head;
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        while (current != NULL)
        {
            ++counter;
            current = current->next;
        }
        return counter;
    }
}


void printList(void) {
    current = head;
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        while (current != NULL)
        {
            printf("%d\n",current->data);
            current = current->next;
        }
        
    }
    
}


void updateValue(int old_data, int new_data) {
    current = head;
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else if (current->data == old_data)
    {
        current->data = new_data;
        flag = 1;
    }
    else
    {
        while (current != NULL)
        {
            if (current->data == old_data)
            {
                current->data = new_data;
                flag = 1;
                break;
            }
            current = current->next;
        }
        
    }
    
    if (flag == 0)
    {
        printf("Value is not found");
    }
    else
    {
        flag = 0;
    }
    
    
}