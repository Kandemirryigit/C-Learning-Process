#include <stdio.h>

int main()
{
    FILE *fp;
    int id;
    float grade;

    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main16/data.txt","r");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    while(fscanf(fp,"%d %f",&id,&grade)!=EOF)
    {
        printf("%d %.2f\n",id,grade);
    }

    fclose(fp);

    return 0;
}