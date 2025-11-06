/*
To display a string on the screen
*/


// Standart input-output library
// It lets my program interact with inputs and outputs
// This is a library and we can define libraries -that we wanna use- like this
#include <stdio.h> 

// Every c program should start with main function
// As you can see we can define functions like this
// void means our function is not going to take any parameter 
// I don't have to use void it can also be empty 
// int means our function is going to return an integer value so it is the type of the function
int main(void)
{
    printf("Hello,World!");

    // At the end of the function my function is going to return 0
    // 0 means program runned succesfully
    // I writed this line because our function's type is int 
    return 0 ;
}


// In c when our line is over we should add (;) at the end of the line