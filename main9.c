/*
find that the number is even or odd
*/

#include <stdio.h>

int main(void)
{
    int number;
    printf("Give an integer number: ");
    scanf("%d",&number);

    if (number%2==0)
        printf("The number is even");
    
    else
        printf("The number is odd");
    

    return 0;  // cuz function's type is int 
    
}

// % this operation gives you the remainder 