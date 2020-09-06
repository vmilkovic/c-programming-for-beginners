// wire a function that calculates the length of a string
// the function should take as a parameter a const char pointer
// the function can only determine the length of the string using pointer arithmetic
// incrementation operator (++pointer) to get to the ond of the string
// you are required to use a while loop using the value of the pointer to exit
// the function should subtract two pointers (one pointing to the end of the string and one pointing to the beginning of the string)
// the function should return an int that is the length of the string passed into the function

#include "stdio.h"

int stringLength(const char *string);

int stringLength(const char *string){

    const char *lastAddress = string; // 0

    while(*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}

int main(void){

    printf("%d\n", stringLength("stringLength test"));
    printf("%d\n", stringLength(""));
    printf("%d\n", stringLength("Vedran"));

    return 0;
}