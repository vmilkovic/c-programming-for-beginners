// write a program to find the total number of lines in a text
// create a file that counts some lines of texts

#include "stdio.h"
#include "stdlib.h"

int main(void){

    FILE *fp;
    char ch;
    int linesCount = 0;
    char file_path[100];

    realpath("../File Input and Output/number_of_lines.txt", file_path);

    fp = fopen(file_path, "r");
    if(fp == NULL){
        perror("Error in opening number_of_lines.txt");
        return(-1);
    }

    while((ch = fgetc(fp)) != EOF){
        if(ch=='\n')
            linesCount++;
    }
    linesCount++;

    fclose(fp);
    fp = NULL;

    printf("Total number of lines are:  %d\n", linesCount);

    return 0;
}