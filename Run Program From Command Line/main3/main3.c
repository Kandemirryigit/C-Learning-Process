#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    int number;
        
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    printf("The square of %d is %d\n", number, number * number);

    return 0;
}
