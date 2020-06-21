#include "stdio.h"

int main(){

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result1;
    int result2;
    int result3;
    int result4;

    result1= a & b; // 0000 1100
    result2= a | b; // 0011 1101
    result3 = a << 2; // 1111 0000
    result4 = a >> 3; // 0000 0111

    printf("result1 is %d\n", result1);
    printf("result2 is %d\n", result2);
    printf("result3 is %d\n", result3);
    printf("result4 is %d\n", result4);

    return 0;
}