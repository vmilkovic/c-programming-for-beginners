#include "stdio.h"
#include "stdlib.h"

int main(void){

    // fputc
    FILE *fp;
    int ch;

    char file_path[100];

    realpath("../File Input and Output/file_write.txt", file_path);

    fp = fopen(file_path, "w+");
    for(ch = 33; ch <= 100; ch++){
        fputc(ch, fp);
    }

    fclose(fp);

    // fputs
    FILE *fpPuts;

    char puts_file_path[100];

    realpath("../File Input and Output/puts_file_write.txt", puts_file_path);

    fpPuts = fopen(puts_file_path, "w+");

    fputs("This is c programming\n", fpPuts);
    fputs("This is a system programming language\n", fpPuts);

    fclose(fpPuts);

    // fprintf
    FILE *prFp;

    char pr_file_path[100];
    realpath("../File Input and Output/print_file_write.txt", pr_file_path);

    prFp = fopen(pr_file_path, "w+");

    if(prFp != NULL)
        fprintf(fp,"%s %s %s %s %d", "Hello", "my", "number", "is", 555);

    fclose(prFp);

    return 0;
}