#include <stdio.h>

struct Student
{
    int id;
    float grade;
};


void updateGrade(struct Student *s1)
{
    s1->grade=100.0;
}



int main()
{
    struct Student s1={1,60.0};

    printf("Before Update:\n");
    printf("Id: %d , Grade: %.2f\n",s1.id,s1.grade);

    updateGrade(&s1);
    printf("\nAfter Update\n");
    printf("Id: %d , Grade: %.2f",s1.id,s1.grade);

    return 0;

}