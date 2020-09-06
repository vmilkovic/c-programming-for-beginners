#include "stdio.h"

void swap(int *x, int *y){

    int temp;

    temp = *x; // save the value at address x
    *x = *y; // put y into x
    *y = temp; // put temp into y

}

int main(void){

    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap(&a, &b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);

    return 0;
}