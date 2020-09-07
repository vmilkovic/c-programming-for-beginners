#include "stdio.h"
#include "stdlib.h"

int main(void){

    // ftell
    FILE *fp = NULL;
    int len;

    char file_path[100];

    realpath("../File Input and Output/file.txt", file_path);

    fp = fopen(file_path, "r");
    if(fp == NULL){
        perror("Error opening file");
        return (-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of file.txt = %d bytes\n", len);

    // fgetpos
    fpos_t position;
    fp = fopen(file_path, "w+");
    fgetpos(fp, &position);
    fputs("Hello, World!", fp);

    fclose(fp);

    // fseek
    fp = fopen(file_path, "w+");
    fputs("This is Vedran", fp);

    fseek(fp, 14, SEEK_SET);
    fputs("Hello how are you", fp);
    fclose(fp);

    // fsetpos
    fp = fopen(file_path, "w+");
    fgetpos(fp, &position);
    fputs("Hello, World!", fp);

    fsetpos(fp, &position);
    fputs("This is going to override previous content", fp);
    fclose(fp);

    return 0;
}

