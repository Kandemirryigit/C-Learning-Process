///////////////////////////////////////
// DISPLAY CHARACTERS IN A STRING ARRAY
///////////////////////////////////////



#include <stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    scanf(" %[^\n]", name);    // name is a string cuz of that we don't need to use &name

    printf("Characters in name: ");
    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c ",name[i]);
    }


    return 0;

}