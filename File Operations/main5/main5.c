#include <stdio.h>

int main()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main2/data.txt","a");
    fprintf(fp,"This is added later\n");
    fclose(fp);

    return 0;
}