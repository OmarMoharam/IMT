#include<stdio.h>
#include"project.h"

typedef struct Node
{
    short int ids;
    short int ages;
    char names[NAME_SIZE];
    char genders[NAME_SIZE];

    struct Node* next;

}Node;

static Node* head = NULL;
static Node* current = NULL;
static Node* deletedNode = NULL;
char flag = 0;
char update = 0;


void addPatient(short int ID, short int age, char name[NAME_SIZE], char gender[NAME_SIZE]) {
    //creating a node
    Node* temp = (Node*)malloc(sizeof(Node));

    // update the data with input parameter
    temp->ids = ID;
    temp->ages = age;
    temp->names = *name;
    temp->genders = *gender;

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
