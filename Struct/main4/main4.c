#include <stdio.h>


struct Student
{
    char name[20];
    int score;
};


void printStudent(struct Student s)
{
    printf("Name: %s\n",s.name);
    printf("Score: %d\n",s.score);
}



int main(void)
{
    struct Student s1={"yiğit",95};
    printStudent(s1);

    return 0;
}