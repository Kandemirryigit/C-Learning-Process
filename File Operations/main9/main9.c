#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main9/data.txt","a");
    int i;

    if(fp==NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    for(int i=1;i<=5;i++)
    {
        fprintf(fp,"Log line-%d\n",i);
    }

    fclose(fp);

    return 0;
}