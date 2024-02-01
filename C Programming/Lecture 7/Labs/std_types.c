#include<stdio.h>

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef long double f128;

void main() {
    printf("Size of u8: %d\n",sizeof(u8));
    printf("Size of u16: %d\n",sizeof(u16));
    printf("Size of u32: %d\n",sizeof(u32));
    printf("Size of s8: %d\n",sizeof(s8));
    printf("Size of s16: %d\n",sizeof(s16));
    printf("Size of s32: %d\n",sizeof(s32));
    printf("Size of f32: %d\n",sizeof(f32));
    printf("Size of f64: %d\n",sizeof(f64));
    printf("Size of f128: %d\n",sizeof(f128));
}