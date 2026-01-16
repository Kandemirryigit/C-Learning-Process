#include <stdio.h>

struct Address
{
    char city[30];
    int zip;
};

struct Person
{
    char name[30];
    struct Address addr;   // struct inside struct
};


int main()
{

    struct Person p;

    printf("Name: ");
    scanf("%s",p.name);

    printf("City: ");
    scanf("%s",p.addr.city);

    printf("Zip Code: ");
    scanf("%d",&p.addr.zip);

    printf("%s %s %d",p.name,p.addr.city,p.addr.zip);

    return 0;
}