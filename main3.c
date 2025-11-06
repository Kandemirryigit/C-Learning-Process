/*
Learning format specifiers and displaying variabes on the screen
*/



#include <stdio.h>


// For displaying variables on the screen the syntax is below 

int main(void)
{
    int intNumber1=10;
    short int intnumber2=8;
    long int intNumber3=15;
    long long int intNumber4=20;

    float floatNumber=5.5;

    double doubleNumber=6.88;
    long double doubleNumber2= 7.888;
    char character='A';

    printf("\nInt is: %d",intNumber1);                 // %d for int
    printf("\nShort int is: %hd",intnumber2);          // %hd for short int
    printf("\nLong int is: %ld",intNumber3);           // %ld for long int
    printf("\nLong long int is: %lld",intNumber4);     // %lld for long long int

    printf("\nFloat is:%f",floatNumber);               // %f for float

    printf("\nDouble number is: %lf",doubleNumber);    // %lf for double
    printf("\nLong double number is: %Lf",doubleNumber2); // %LF for long double

    printf("\nChar is: %c",character); // %c for characters
}

// When working with print it is not going to be any problem if you dont type %hd for short int or other things (long long ,long) 
// You can use %d with print but when working with scanf it is going to be a problem so its good to know


// When defining a character we should use ('A')
// When defining a string we should ("Hello")


