#include <stdio.h>
#include <string.h> // for strlen

int main(int argc, char *argv[]) {
    char name[50];
    
    printf("Enter your name: ");
    scanf("%49s", name); // %49s to avoid overflow
    

    printf("Your name '%s' has %lu characters.\n", name, strlen(name));

    return 0;
}
