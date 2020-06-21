#include "stdio.h"

int main(int argc, char *argv[]){

    int numberOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    char *argument3 = argv[2];

    printf("Number of Arguments: %d\n", numberOfArgs);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);
    printf("Argument 3 is the command line argument: %s\n", argument3);

    return 0;

}