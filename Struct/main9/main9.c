#include <stdio.h>



struct Address
{
    char *city;
    char *street;
    int zip;
};


struct employee
{
    char *name;
    int salary;
    struct Address address;  // Struct inside struct
};





int main()
{
    // Method1
    struct employee emp[3];
    emp[0].name="Yigit";
    emp[0].salary=200;
    emp[0].address.city="Edirne";
    emp[0].address.street="Main Street";
    emp[0].address.zip=22000;

    // Method2
    emp[1]=(struct employee){"Ahmet",300,{"Istanbul","Main Street",34000}};
    emp[2]=(struct employee){"x",100,{"Yozgat","Main Street",66000}};

    for(int i=0;i<3;i++)
    {
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %d\n", emp[i].salary);
        printf("City: %s\n", emp[i].address.city);
        printf("Street: %s\n", emp[i].address.street);
        printf("Zip: %d\n", emp[i].address.zip);

    }
    


    return 0;

}