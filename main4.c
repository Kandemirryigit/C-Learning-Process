/*
Understand how char works with numbers
*/


#include <stdio.h>

// When we define a char and give it a mumber it returns that number's ascii value

int main()
{
    char character1='A';
    char character2='6';
    char character3=66;  // Ascii value of 'B' is 66
    char character4=67;  // Ascii value of 'C' is 67

    printf("Character1 is :%c",character1);
    printf("\nCharacter2 is :%c",character2);
    printf("\nCharacter3 is :%c",character3);
    printf("\nCharacter4 is :%c",character4);


}