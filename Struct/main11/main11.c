#include <stdio.h>

struct Student
{
    int id;
    float grade;
};


int main()
{
    struct Student s={1,91.5};
    struct Student *p=&s;  // created a pointer for s struct

    p->id=4;
    p->grade=95.0;

    printf("%d %.2f",p->id,p->grade);

    return 0;

}