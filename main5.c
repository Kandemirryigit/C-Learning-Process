/*
Take an input from user and make a basic calculation
*/

#include <stdio.h>


// when we want to take an input from user we should define input's data type that user is going to write 
// And we should define with (&) the address of the input.
// So we say we are going to store the input inside num1 with &num1
int main()
{
    int num1;
    int num2;
    int result;
    printf("Enter num1: ");
    scanf("%d",&num1);  // To take an input from keyboard

    printf("Enter num2: ");
    scanf("%d",&num2);

    result=num1+num2;

    printf("Result is: %d",result);

}

// &num1,&num2 means the address of the input