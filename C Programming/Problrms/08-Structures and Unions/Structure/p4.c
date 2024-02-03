#include<stdio.h>

typedef char u8;
typedef unsigned int u16;
typedef float f16;

typedef struct
{
    u8 name[20];
    u16 quantity;
    f16 price;
}store;

store update(store product, u16 quantity_increment, f16 price_increment);
f16 totalNew(store stock);

void main() {
    u16 q_incre;
    f16 p_incre, multi;
    store item = {"Rice", 12, 25.75};

    printf("\nInput increment values:");
    printf(" price increment and quantity increment\n");
    scanf("%f %d", &p_incre, &q_incre);

    item = update(item, q_incre, p_incre);

    printf("Updated values of item\n\n");
    printf("Name : %s\n",item.name);
    printf("Price : %0.2f\n",item.price);
    printf("Quantity : %d\n",item.quantity);

    multi = totalNew(item);
    printf("\nValue of the item = %0.2f\n", multi);
}

store update(store product, u16 quantity_increment, f16 price_increment) {
    product.price += price_increment;
    product.quantity += quantity_increment;
    return product;
}

f16 totalNew(store stock) {
    return (stock.price * stock.quantity);
}
