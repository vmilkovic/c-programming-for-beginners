#include "stdio.h"

struct date {
    int month;
    int day;
    int year;
};

int main(void){

    // declare variables of structure
    struct date today;

    today.day = 6;
    today.month = 9;
    today.year = 2020;

    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    int century = today.year / 100 + 1;

    printf("Century: %i\n", century);

    // define and declare a struct
    struct date {
        int month;
        int day;
        int year;
    } purchaseDate;

    // un-named structures - can use it once
    struct {
        int day;
        int year;
        int month;
    } aDay;

    // initialize structures

    struct date aNewDay = { 9, 6, 2020 };
    struct date aNewDate = { .month = 12, .day = 25 };
    struct date year = { .year = 2025 };

    // compound literals
    // newDay = (struct date) {9, 24, 1990};

    return 0;
}