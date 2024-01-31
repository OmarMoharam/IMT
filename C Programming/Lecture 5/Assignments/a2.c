#include<stdio.h>

#define SIZE 10

int cls1[SIZE], cls2[SIZE], cls3[SIZE];

void grades(void);
int passStudents(void);
int failStudents(void);
int highestStudent(void);
int lowestStudent(void);
int averageOfGrades(void);

void main()
{
    int pass, fail, high, low, sum, avg;

    grades();
    pass = passStudents();
    fail = failStudents();
    high = highestStudent();
    low = lowestStudent();
    avg = averageOfGrades();
    printf("Pass Students: %d\n",pass);
    printf("Failed Students: %d\n",fail);
    printf("Highest Students: %d\n",high);
    printf("Lowest Students: %d\n",low);
    printf("Average of Students: %d\n",avg);

}

void grades(void) {
    printf("*Enter the grades of the first class*\n");
    for (int i = 1; i < SIZE+1; i++)
    {
        printf("Student %d: ",i);
        scanf(" %d",&cls1[--i]);
        ++i;
    }

    printf("*Enter the grades of the second class*\n");
    for (int i = 1; i < SIZE+1; i++)
    {
        printf("Student %d: ",i);
        scanf(" %d",&cls2[--i]);
        ++i;
    }

    printf("*Enter the grades of the third class*\n");
    for (int i = 1; i < SIZE+1; i++)
    {
        printf("Student %d: ",i);
        scanf(" %d",&cls3[--i]);
        ++i;
    }
}

int passStudents(void) {
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (cls1[i] >= 50)
            count++;
        if(cls2[i] >= 50)
            count++;
        if(cls3[i] >= 50)
            count++;
        
    }
    return count;
    
}

int failStudents(void) {
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (cls1[i] < 50)
            count++;
        if(cls2[i] < 50)
            count++;
        if(cls3[i] < 50)
            count++;
        
    }
    return count;
}

int highestStudent(void) {
    int max = cls1[0];
    for (int i = 0; i < SIZE; i++) {
        if (cls1[i] > cls2[i]) {
            if (cls1[i] > cls3[i]) {
                max = cls1[i];
            }
            else {
                max = cls3[i];
            }     
        }
        else if (cls2[i] > cls3[i]) {
            max = cls2[i];
        }
        else {
            max = cls3[i];
        }
    
    }
    return max;
    
}
int lowestStudent(void) {
    int min = cls1[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (cls1[i] < cls2[i]) {
            if (cls1[i] < cls3[i]) {
                min = cls1[i];
            }
            else {
                min = cls3[i];
            }     
        }
        else if (cls2[i] < cls3[i]) {
            min = cls2[i];
        }
        else {
            min = cls3[i];
        }
    }
    return min;
    
}
int averageOfGrades(void) {
    int sum = 0, avg = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + cls1[i] + cls2[i] + cls3[i];
    }
    avg = sum / (SIZE * 3);

    return avg;
}
