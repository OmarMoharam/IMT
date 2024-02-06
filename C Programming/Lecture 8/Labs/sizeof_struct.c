#include<stdio.h>
#pragma pack(1) // not desirable

typedef char u8;
typedef unsigned int u32;

// struct before packing
/*typedef struct
{
    u8 x;
    u32 y;
    u8 z;
    u32 k;
}size;*/

// struct after packing
typedef struct
{
    u8 x;
    u8 z;
    u32 y;
    u32 k;
}size;

void main() {
    printf("Size of struct: %d",sizeof(size));
}