#include "stdio.h"
#include "string.h"

int main(){

    char myString[] = "My Name is Jason";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The length is: %lu\n", strlen(myString));
    printf("The string is: %s\n", temp);

    return 0;
}
