// write a program that allows a user to input a text string.
// the program will print the text that was inputted.
// the program will utilize dynamic memory allocation.
// the user can enter the limit of the string they are entering
// you can use this limit when invoking malloc
// the program should create a char pointer only, no character arrays
// be sure to release the memory that was allocated

#include "stdio.h"
#include "stdlib.h"

int main(void){

    int size;
    char *text = NULL;

    printf("Enter limit of the text: ");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char));

    if(text != NULL){

        printf("Enter some text: \n");
        scanf("%s", text);

        printf("Inputted text is: %s\n", text);

    }

    free(text);
    text = NULL;

    return 0;
}