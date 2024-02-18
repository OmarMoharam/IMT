#include<stdio.h>
#include<stdlib.h>
#include"single_linkedlist.h"

// creating nodes
typedef struct Node
{
    int data;
    struct Node* next;

}Node;

// static is here to protect the head pointer from being used in another file.c
static Node* head = NULL;
static Node* current = NULL;
static Node* deletedNode = NULL;
short char flag = 0;
short char update = 0;

void insertAtFirst(int value) {
    //creating a node
    Node* temp = (Node*)malloc(sizeof(Node));

    // update the data with input parameter
    temp->data = value;

    // points to the next node
    temp->next = head;

    // update head pointer
    head = temp;
}

// here you have 2 options (1-linked list is empty) (2-linked list have nodes)
void insertAtLeast(int value) {
    //creating a node
    Node* temp = (Node*)malloc(sizeof(Node));

    // update the data with input parameter
    temp->data = value;

    // points to null
    temp->next = NULL;

    // if list is empty
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
    // if list is empty
    if (head == NULL)
    {
        printf("The list is empty");
    }
    // if value is in the first node
    else if (head->data == value)
    {
        deletedNode = head;
        head = deletedNode->next;
        free(deletedNode);
        flag = 1;
    }
    // if value is not in the first node
    else
    {
        current = head->next;
        prev = head;
        while (current != NULL)
        {
            if (current->data == value)
            {
                deletedNode = current
                current = NULL;
                flag = 1;
                prev->next = deletedNode->next;
                free(deletedNode);
                break;
            }
            
            prev = current;
            current = current->next;
        }
        
        if (flag == 0) // indication if the value is not found
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
        printf("List size is %d",counter);
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
    searchValue(old_data);
    if (update == 1)
    {
        current->data = new_data;
        printf("Value updated");
    }
    
}