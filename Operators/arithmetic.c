#include "stdio.h"

int main(){

    int a = 33;
    int b = 15;
    int result = 0;

    result = a + b;
    result = a - b;
    result = a * b;
    result = a / b;
    result = a % b;

    printf("Result is %d\n", result);

    return 0;
}