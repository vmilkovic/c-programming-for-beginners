// Write a program that creates an integer variable with a hard-coded value.
// Assign that variable's address to a pointer variable.
// Display as output the address of the pointer, the value of the pointer, and the value of what the pointer is pointing to.
#include "stdio.h"

int main(void){

    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("num address is: %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("value of the pNum: %p\n", pNum);
    printf("value of what pNum is pointing to: %d\n", *pNum);

    return 0;
}