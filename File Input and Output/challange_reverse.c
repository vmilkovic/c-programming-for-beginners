// write a program that will print the contents of a file in reverse order
// use the fseek function to seek to the end of the file
// use the ftell function to get the position of the file pointer
// display as output the file in reverse order

#include "stdio.h"
#include "stdlib.h"

int main(void){

    FILE *fp = NULL;
    int count;
    int i = 0;

    char file_path[100];

    realpath("../File Input and Output/reverse.txt", file_path);

    fp = fopen(file_path, "r");
    if(fp == NULL)
        return -1;

    // moves the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // get the position of the file pointer
    count = ftell(fp);

    while(i < count){
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}