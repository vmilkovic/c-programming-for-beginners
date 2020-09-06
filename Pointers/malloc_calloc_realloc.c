#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){

    // malloc
    int *pNumber = (int*)malloc(100); // 100 bytes -> int = 4 bytes -> 25 -> numbers

    int *pNum = (int*)malloc(25*sizeof(int)); // better

    if(!pNumber){
        // always check if the memory is allocated
        // code to deal with memory allocation failure...
    }

    // free memory
    free(pNumber);
    pNumber = NULL;

    // calloc - initializes memory
    int *pNumb = (int*) calloc(75, sizeof(int));

    // realloc - reuse memory - change memory
    char *str = NULL;

    /* Initial memory allocation */
    str = (char*) malloc(15 * sizeof(char));
    strcpy(str, "vedran");
    printf("String = %s, Address = %p\n", str, str);

    /* Reallocating memory */
    str = (char *) realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    return 0;
}