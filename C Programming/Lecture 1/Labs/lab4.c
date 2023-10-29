/* Solve these examples in a paper and confirm the that your answers are correct by writing a code printing the result */

#include <stdio.h>

void main()
{
         int x = 7 , y = 5;

         printf("OR = %d \n",x | y);
         printf("AND = %d \n",x & y);
         printf("NOT = %d \n",~x);
         printf("XOR = %d \n",x^y);
         printf("LEFT SHIFT = %d \n",x<<1);
         printf("RIGHT SHIFT = %d \n",y>>2);
}