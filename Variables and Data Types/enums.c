#include <stdbool.h>
#include "stdio.h"

int main(){

    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    _Bool isMale = (myGender == anotherGender);

    return 0;

}