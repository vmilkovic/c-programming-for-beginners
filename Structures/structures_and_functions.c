#include "stdio.h"
#include "string.h"
#include "stdbool.h"

struct Family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

/*bool siblings(struct Family member1, struct Family member2){
    if(strcmp(member1.mother, member2.mother) == 0)
        return true;
    else
        return false;
}*/

// pass by reference
bool siblings(struct Family *pmember1, struct Family *pmember2){
    if(strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    else
        return false;
}

struct funds {
    char bank[50];
    double bankfund;
    char save[50];
    double savefund;
};

double sum(struct funds moolah){
    return(moolah.bankfund + moolah.savefund);
}

int main(void){

    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Load",
        8543.94
    };

    printf("Stan has a total of $%.2f.\n", sum(stan));

    return 0;
}