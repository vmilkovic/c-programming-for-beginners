#include "stdio.h"

int arraySum(int array[], const int n){

    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;

    return sum;
}

int arrSum(int *array, const int n){
    int sum = 0;
    int *const arrayEnd = array + n;

    for(; array < arrayEnd; ++array)
        sum += *array;

    return sum;
}

int main(void){

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    printf("The sum is %i\n", arrSum(values, 10));

    return 0;
}