#include <stdio.h>
#include <string.h>


struct Student
{
    char name[30];
    int age;
};



int main()
{
    struct Student class[3];

    strcpy(class[0].name,"Yiğit");
    class[0].age=19;

    strcpy(class[1].name,"Ahmet");
    class[1].age=50;

    strcpy(class[2].name,"Mehmet");
    class[2].age=22;

    for(int i=0;i<3;i++)
    {
        printf("%s - %d\n",class[i].name,class[i].age);
    }

    return 0;

}