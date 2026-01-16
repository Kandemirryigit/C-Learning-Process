#include <stdio.h>


struct employee
{
    char *name;
    int year;
    int month;
    int day;
    int salary;
};



int main()
{

    // This is one of the way to assign values to struct members
    struct employee employee1;
    employee1.name="Yigit";
    employee1.year=2025;
    employee1.month=5;
    employee1.day=12;
    employee1.salary=200;


    printf("Name: %s\nDate: %d/%d/%d\nSalary:%d",employee1.name,employee1.day,employee1.month,employee1.year,employee1.salary);

    // Another way to assign values to struct members
    struct employee employee2={"Ahmet",2024,3,10,250};
    struct employee employee3={"Mehmet",2023,7,15,300};

    printf("\n\nName: %s\nDate: %d/%d/%d\nSalary:%d",employee2.name,employee2.day,employee2.month,employee2.year,employee2.salary);
    printf("\n\nName: %s\nDate: %d/%d/%d\nSalary:%d",employee3.name,employee3.day,employee3.month,employee3.year,employee3.salary);

    return 0;



}