struct time {
    int hours;
    int minutes;
    int seconds;
};

struct date {
    int day;
    int month;
    int year;
};

struct dateAndTime {
    struct date sdate;
    struct time stime;
};

int main(void){

    struct dateAndTime event;

    event.sdate.month = 10;
    ++event.stime.seconds;

    struct dateAndTime newEvent = { {2, 1, 2020}, {3, 30, 0} };

    struct dateAndTime newerEvent = {
                                        { .month = 2, .day = 1, .year = 2022 },
                                        { .hours = 3, .minutes = 30, .seconds = 0 }
                                    };

    struct dateAndTime arrEvents[100];

    arrEvents[0].stime.hours = 12;
    arrEvents[0].stime.minutes = 0;
    arrEvents[0].stime.seconds = 0;

    // date is scoped to time
    struct Time {

        struct Date {
            int day;
            int month;
            int year;
        } dob;

        int hour;
        int minutes;
        int seconds;
    };



    return 0;
}