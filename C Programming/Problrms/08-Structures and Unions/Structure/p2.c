#include<stdio.h>

typedef int u16;

struct complex
{
    u16 real;
    u16 img;
}num1, num2;

struct complex sumComplex(struct complex pass1, struct complex pass2);

void main() {
    struct complex sum;
    printf("Enter real and imaginary numbers for 1st\n");
    scanf(" %d",&num1.real);
    scanf(" %d",&num1.img);
    
    printf("Enter real and imaginary numbers for 2st\n");
    scanf(" %d",&num2.real);
    scanf(" %d",&num2.img);

    sum = sumComplex(num1, num2);

    printf("The first number: %d + %di\n",sum.real, sum.img);

}


struct complex sumComplex(struct complex pass1, struct complex pass2) {
    struct complex sum;
    sum.real = pass1.real + pass2.real;
    sum.img = pass1.img + pass2.img;
    return sum;
}