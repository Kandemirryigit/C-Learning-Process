/*
learn how to use if,else if,else statments
*/

#include <stdio.h>

int main()
{
    int age;
    printf("What is your age: ");
    scanf("%d",&age);

    if (age<18)
    {
        printf("You are a kid");
    }

    else if (age>18 && age<45)
    {
        printf("You are an adult");
    }

    else
    {
        printf("You are so much old");
    }

}

// if you are just going to write one line after if,else if,else then you don't need to use curly brackets