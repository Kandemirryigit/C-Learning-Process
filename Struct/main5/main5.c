#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};


struct Person
{
    char name[20];
    struct Date birthday;
};


int main(void)
{
    struct Person p={"yiğit",{12,01,2006}};

    printf("Name: %s\n",p.name);
    printf("Birthday: %d/%d/%d\n",
        p.birthday.day,
        p.birthday.month,
        p.birthday.year);

    return 0;
}