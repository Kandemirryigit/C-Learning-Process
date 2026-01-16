#include <stdio.h>

int main()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main2/data.txt","r");
    char ch;

    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;

}


// EOF means end of the file
// fgetc: reads exactly one character from a file
// fgets: reads one full line of text from a file