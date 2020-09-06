struct date {
    int month;
    int day;
    int year;
};

struct month {
    int numberOfDays;
    char name[3];
};

int main(void){

    struct date myDates[5] = { {12, 10, 1975}, {12 ,30, 1980}, {11, 15, 2005} };

    struct date myDates1[5] = { [2] = {12, 10, 1975 }};

    struct date myDates2[5] = { [1].month = 12, [1].day = 30 };


    struct month aMonth;

    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    struct month newMonth = { 31, {'J', 'a', 'n'} };

    struct month months[12];

    return 0;
}