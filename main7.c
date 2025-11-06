/*
logical operations in c
*/

#include <stdio.h>

// To be able to use boolean in c we should implement this library
// this library lets us to use booleans
#include <stdbool.h>


int main()
{
    bool a=true;
    bool b=false;
    bool c=true;

    if (a&&b) // && means and
    {
        printf("a and b are true");
    }

    if (a||c)  // || means or
    {
        printf("a and c are not same bool");
    }

    if (!b)  // ! means not
    {
        printf("\nB is false");
    } 
}