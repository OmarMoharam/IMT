#include<stdio.h>

void main () {
    //%d treats the number as signed , %u treats the number as unsigned
    unsigned int num = 4294967295;

    printf("The representation is: %u\n",num);
    printf("The representation is: %d\n",num);
    
    printf("____________________________________________\n");
    num = -1;

    printf("The representation is: %u\n",num);
    printf("The representation is: %d",num);
}