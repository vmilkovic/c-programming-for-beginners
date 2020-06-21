#include "stdio.h"

int main(){

    _Bool a = 1;
    _Bool b = 0;
    _Bool result1;
    _Bool result2;

    result1 = a && b;
    result2 = a || b;

    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}