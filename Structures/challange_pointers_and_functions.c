// create a structure named item with the following members
// itemName - pointer, quantity - int, price - float, amount -float

// create a function named readItem that take a structure pointer of type item as a parameter
// this function should read in (from the user) a product name, price, and quantity
// the contents read in should be stored in the passed in structure to the function

// create a function named print item that takes as a parameter a structure pointer of type item
// function prints the contents of the parameter

// the main function should declare an item and a pointer to the item
// you will need to allocate memory for the itemName pointer
// the item pointer should be passed into both the read an print item functions

#include "stdio.h"
#include "stdlib.h"

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);


int main(void){

    struct item item;
    struct item *pItem;

    pItem = &item;

    pItem->itemName = (char *) malloc(30 * sizeof(char));

    if(pItem == NULL)
        exit(-1);

    // read item
    readItem(pItem);

    // print item
    printItem(pItem);

    return 0;
}

void readItem(struct item *i){

    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("\nEnter price: ");
    scanf("%f", &i->price);

    printf("\nEnter quantity: ");
    scanf("%d", &i->quantity);

    i->amount = (float) i->quantity * i->price;

}

void printItem(struct item *i){

    printf("\nName: %s", i->itemName);
    printf("\nPrice: %.2f", i->price);
    printf("\nQuantity: %d", i->quantity);
    printf("\nTotal Amount: %.2f", i->amount);

}