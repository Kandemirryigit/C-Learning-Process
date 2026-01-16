#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
