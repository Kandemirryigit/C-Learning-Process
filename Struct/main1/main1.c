#include <stdio.h>
#include <string.h>

// A struct (structure) is a custom data type in C.
// It lets you group multiple variables (with different data types) under one name.

// Struct is so useful
/*
Let's imagine you have 3 students and you wanna strore 
their informations with struct you don't have to always create 
new variable.You can create on time and you can use it later
*/



struct Student
{
    char name[30];
    int age;
    float grade;

};



int main()
{
    struct Student s1;
    strcpy(s1.name,"yiğit");
    s1.age=19;
    s1.grade=90.2;

    printf("Name1: %s\n",s1.name);
    printf("Age1: %d\n",s1.age);
    printf("Grade1: %.2f\n",s1.grade);


    struct Student s2;
    strcpy(s2.name,"Ricardo");
    s2.age=47;
    s2.grade=80;

    printf("\nName2: %s\n",s2.name);
    printf("Age2: %d\n",s2.age);
    printf("Grade2: %.2f\n",s2.grade);

    return 0;

}
