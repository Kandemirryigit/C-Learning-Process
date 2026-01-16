#include <stdio.h>


struct date
{
    int month;
    int day;
    int year;
};



int main()
{

    struct date today;
    today.month=9;
    today.day=25;
    today.year=2015;

    struct date yesterday;
    yesterday.month=9;
    yesterday.day=24;
    yesterday.year=2015;

    printf("Today's date is %d/%d/%d\n",today.month,today.day,today.year);
    printf("Yesterday's date is %d/%d/%d",yesterday.month,yesterday.day,yesterday.year);

}