#include<stdio.h>
#define SIZE 10

typedef unsigned int u16;
typedef char u8;

typedef struct
{
    u8 id;
    u16 math;
    u16 language;
    u16 physics;
    u16 chemistry;
}studentData;

void main() {
    studentData class[SIZE];
    u8 studentID;
    u8 flag = 0;

    for (u16 i = 0; i < SIZE; i++)
    {
        printf("\nPlease Enter Student ID: ");
        scanf(" %d",&class[i].id);
        
        printf("Math Grade: ");
        scanf(" %d",&class[i].math);
        
        printf("Language Grade: ");
        scanf(" %d",&class[i].language);
        
        printf("Physics Grade: ");
        scanf(" %d",&class[i].physics);
        
        printf("Chemistry Grade: ");
        scanf(" %d",&class[i].chemistry);
    }

    printf("\nPlease Enter Student ID to search: ");
    scanf(" %d",&studentID);

    for (u16 i = 0; i < SIZE; i++)
    {
        if (studentID == class[i].id)
        {
            printf("Math Grade: %d\n",class[i].math);
            printf("Language Grade: %d\n",class[i].language);
            printf("Physics Grade: %d\n",class[i].physics);
            printf("Chemistry Grade: %d\n",class[i].chemistry);

            flag = 1;
        }
        
    }
    
    if (flag == 0)
    {
        printf("Student ID is not correct");
    }
    
    
}
