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

}
int searchValue(int value) {

}
int listSize(void) {

}
void printList(void) {

}
void updateValue(int old_data, int new_data) {
    
}