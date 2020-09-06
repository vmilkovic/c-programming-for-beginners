#include "stdio.h"

struct date {
    int month;
    int day;
    int year;
};

int main(void){

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year / 100);

    // structures containing pointers
    struct intPtrs {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    // using pointers instead of arrays for chars
    // pointers only storing the address
    struct namect {
        char *fname;
        char *lname;
        int letters;
    };

    return 0;
}