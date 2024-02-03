#include<stdio.h>

typedef int u16;

typedef struct {
    u16 inch;
    u16 feet;
}metric;

void main() {
    metric *ptr1, *ptr2;
    metric info1, info2;

    int sumOfInch = 0, sumOfFeet = 0;

    ptr1 = &info1;
    ptr2 = &info2;

    printf("Enter information about 1st distance\n");
    printf("Enter feet: ");
    scanf(" %d", &ptr1->feet);
    printf("Enter inch: ");
    scanf(" %d", &ptr1->inch);

    printf("Enter information about 2nd distance\n");
    printf("Enter feet: ");
    scanf(" %d", &ptr2->feet);
    printf("Enter inch: ");
    scanf(" %d", &ptr2->inch);

    sumOfFeet = info1.feet + info2.feet;
    sumOfInch = info1.inch + info2.inch;

    printf("Sum of distance: %d %d",sumOfFeet, sumOfInch);

}
