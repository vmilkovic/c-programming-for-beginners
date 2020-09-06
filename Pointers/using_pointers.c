#include "stdio.h"

int main(void){

    long num1 = 0L;
    long num2 = 0L;

    long *pnum = NULL;

    pnum = &num1; // Get address of num1
    *pnum = 2L; // Set num1 to 2
    ++num2; // Increment num2
    num2 += *pnum; // Add num1 to num2

    pnum = &num2; // Get address of num2
    ++*pnum; // Increment num2 indirectly

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    int value = 0;
    int *pvalue = &value;

    printf("Input an integer:");
    scanf("%d", pvalue);

    printf("You entered %d.\n", value);

    // testing for NULL
    int *pt; // an uninitialized pointer -> should be NULL or 0 to allocate memory for it
    *pt = 5; // error -> not allocated memory for pointer (pointer should be NULL)

    return 0;
}