#include "stdio.h"

int main(void){

    // write mode
    FILE *pfile = NULL;

    char *filename = "myfile.txt";

    pfile = fopen(filename, "w");
    if(pfile != NULL)
        printf("Failed to open %s.\n", filename);

    // appended mode
    pfile = fopen("myfile.txt", "a");

    // read mode
    pfile = fopen("myfile.txt", "r");

    // renaming a file.txt
    if(rename("myfile.txt", "myfile_copy.txt"))
        printf("File renamed successfully.");
    else
        printf("Failed to rename file.txt.");

    // close a file.txt
    fclose(pfile);
    pfile = NULL;

    // deleting a file.txt
    remove("myfile.txt");

    return 0;
}