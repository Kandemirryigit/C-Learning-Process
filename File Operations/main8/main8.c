#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main7/data.txt","r");
    char ch;
    int count=0;

    if(fp==NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        count++;
    }

    printf("Characters: %d",count);

    fclose(fp);
    return 0;

}