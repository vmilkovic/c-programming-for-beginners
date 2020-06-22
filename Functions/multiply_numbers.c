#include "stdio.h"

void multiplyTwoNumbers(int x, int y){
    int result = x * y;
    printf("The product of %d multiplied by %d is %d\n", x, y, result);
}

int main(){

    multiplyTwoNumbers(10, 20);
    multiplyTwoNumbers(20, 30);
    multiplyTwoNumbers(50, 2);

    return 0;
}