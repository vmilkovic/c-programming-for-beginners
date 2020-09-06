#include "stdio.h"

int main(void){

    int number = 0;
    int *pnumber = NULL; // null pointer

    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %lu\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);


    // dereference pointer
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count=%i, x=%i", count, x);

    return 0;
}