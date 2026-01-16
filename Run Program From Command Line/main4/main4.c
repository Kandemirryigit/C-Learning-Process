#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "1234";
    char str2[] = "56abc";
    char str3[] = "hello";

    int num1 = atoi(str1); // 1234
    int num2 = atoi(str2); // 56 (stops when non-digit is found)
    int num3 = atoi(str3); // 0 (no digits at start)

    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}




// atoi in C stands for “ASCII to Integer”. 
// It’s a standard library function that converts a string (array of characters) representing a number into an actual int.