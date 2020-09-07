// write a program that converts all characters of a file to uppercase and write the results out to a temporary file.
// Then rename the temporary file to the original filename and remove the temporary filename
// use the fgetc and fputc functions
// use the rename and remove functions
// use the islower function (subtracting 32 from it)
// display the contents of the original file to standard output

#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(void){

    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch;

    char file_path[100];
    char temp_path[100];

    realpath("../File Input and Output/uppercase.txt", file_path);
    realpath("../File Input and Output/temp.txt", temp_path);

    fp = fopen(file_path, "r");
    if(fp == NULL)
        return -1;

    // create a temp file
    fp1 = fopen(temp_path, "w");
    if(fp1 == NULL)
        return -1;

    while((ch = fgetc(fp)) != EOF){
        if(islower(ch)){
            ch = ch - 32;
        }
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    // rename temp file to uppercase.txt file
    rename(temp_path, file_path);

    // remove the temp file
    remove(temp_path);

    fp = fopen(file_path, "r");
    if(fp == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    fp = NULL;
    fp1 = NULL;

    return 0;
}