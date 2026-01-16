#include <stdio.h>

struct Student
{
    char name[50];
    int id;
    float grade;
};



int main()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main11/data.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    struct Student s[3]=
    {
        {"Ali",1,80.5},
        {"Ahmet",2,90.0},
        {"Veli",3,70.25},
    };

    for(int i=0;i<3;i++)
    {
        fprintf(fp,"name: %s , Id:%d ,Grade: %.2f\n",s[i].name,s[i].id,s[i].grade);
    }

    fclose(fp);

    return 0;

}