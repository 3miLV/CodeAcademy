#include <stdio.h>

struct date{
    int day;
    int month;
    int yaer;
};


int main(){
    //struct date contractdate = {21,2,2020};
    //struct date contractdate = {.yaer=2020, .day=21, .month=2};
    struct date contractdate[10];
    contractdate[0].day = 21;
    contractdate[0].month = 2;
    contractdate[0].yaer = 2020;
    return 0;
}
