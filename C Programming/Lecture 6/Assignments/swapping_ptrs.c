#include<stdio.h>

void main() {
    int x = 1, y = 2, z = 3;
    int *p = &x, *q = &y, *r = &z;

    printf("Value of x: %d\n",x);
    printf("Value of y: %d\n",y);
    printf("Value of z: %d\n",z);
    printf("Value of p: %p\n",p);
    printf("Value of q: %p\n",q);
    printf("Value of r: %p\n",r);
    printf("Value of *p: %d\n",*p);
    printf("Value of *q: %d\n",*q);
    printf("Value of *r: %d\n",*r);

    printf("_________________Swapping Pointers_________________\n");

    r = p;
    p = q;
    q = r;

    printf("Value of x: %d\n",x);
    printf("Value of y: %d\n",y);
    printf("Value of z: %d\n",z);
    printf("Value of p: %p\n",p);
    printf("Value of q: %p\n",q);
    printf("Value of r: %p\n",r);
    printf("Value of *p: %d\n",*p);
    printf("Value of *q: %d\n",*q);
    printf("Value of *r: %d\n",*r);

}