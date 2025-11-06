/*
An infinitive loop with for
*/


#include <stdio.h>

// This can be dangerous for your computer if you don't stop it
// This code is going to run always if you don't stop it
// you can stop the code with ctrl+c

int main()
{
    for (;;)
    {
        printf("\nThis is an infinitive loop");
    }
}


/*Infinite loops are good only when you control them properly —
like in menu systems, servers, or games.
Otherwise, they can cause your program to hang or crash.*/ 