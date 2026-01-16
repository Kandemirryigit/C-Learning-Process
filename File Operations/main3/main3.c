#include <stdio.h>

int main()
{
    FILE *fp = fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main2/data.txt", "r");
    if (!fp) return 1;

    char line[100];

    fgets(line,sizeof(line),fp); // hello file!
    printf("%s",line);

    fgets(line,sizeof(line),fp); // number42
    printf("%s",line);
    

    fclose(fp);
    return 0;
}


// fgets: It reads one full line of text from a file (or input) into a buffer.

// scanf(%s):
// stops at space
// unsafe (overflow risk)
// hard to detect errors
// skips whitespace weirdly

// fgets:
// reads entire line
// safe (size limit)
// easy to check
// predictable