#include <stdio.h>

int main()
{
    int id;
    char name[20];
    float grade;

    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main17/data.txt","r");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }


    while(fscanf(fp,"%d %s %f",&id,name,&grade)==3)
    {
        printf("%d %s %.2f\n",id,name,grade);
    }

    fclose(fp);

    return 0;
}