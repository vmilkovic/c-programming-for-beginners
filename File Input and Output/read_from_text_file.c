#include "stdio.h"
#include "stdlib.h"

int main(void){

    FILE *fp;
    int c;
    char str[61];

    char file_path[100];

    realpath("../File Input and Output/file.txt", file_path);

    fp = fopen(file_path, "r");

    if(fp == NULL){
        perror("Error in opening file.txt");
        return(-1);
    }

    // read a single char
    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    if(fgets(str, 10, fp) != NULL){
        /* writing content to stdout */
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}