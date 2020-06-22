#include "stdio.h"

int main(){

    /*
    int number_to_test;
    int remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if(remainder == 0){
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    */

   int number;
   int sign;

   printf("Please type in a number: ");
   scanf("%i", &number);

   if(number < 0){
       sign = -1;
   } else if(number == 0){
       sign = 0;
   } else {
       sign = 1;
   }

   printf("Sign = %i\n", sign);

   return 0;
}