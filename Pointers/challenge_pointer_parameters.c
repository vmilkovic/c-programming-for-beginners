// write a function that squares a number by itself
// the function should define as a parameter an it pointer

#include "stdio.h"

void square(int *number);

void square(int *number){
    *number = (*number) * (*number);
}

int main(void){

    int number = 9;

    square(&number);
    printf("The square of the given number is %d\n", number);

    return 0;
}