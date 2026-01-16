#include <stdio.h>

int main()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main9/data.txt","r");
    char line[100];
    int lines=0;

    if(fp==NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    while(fgets(line,sizeof(line),fp))
    {
        lines++;
        printf("%s",line);
    }

    printf("Total lines: %d",lines);

    fclose(fp);
    return 0;
}