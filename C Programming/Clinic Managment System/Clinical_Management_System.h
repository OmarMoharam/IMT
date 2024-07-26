#ifndef CLINICAL_MANAGEMENT_SYSTEM_H
#define CLINICAL_MANAGEMENT_SYSTEM_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node_t
{
    char *name;
    char *gender;
    char age;
    int ID;
    struct Node_t *next;
    struct Node_t *pre;
} Node;

void insertIntoList(const char *name, const char *gender, char age, int ID);
int searchID(int ID);
void editName(int ID, const char *newName);
void editGender(int ID, const char *newGender);
void editAge(int ID, char newAge);
void printRecord(int ID);
void reserveSlot(void);
void cancelSlot(int ID);
void viewReservation(void);

#define ADMIN_MODE 1
#define USER_MODE 2
#endif