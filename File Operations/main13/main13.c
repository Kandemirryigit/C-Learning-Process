#include <stdio.h>

struct Student
{
    int id;
    float grade;
};


int main()
{
    struct Student arr[2]=
    {
        {1,70.0},
        {2,90.5},
    };

    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main13/data.txt","w");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    fprintf(fp,"Id: %d - Grade: %.2f\n",arr[0].id,arr[0].grade);
    fprintf(fp,"Id: %d - Grade: %.2f\n",arr[1].id,arr[1].grade);

    fclose(fp);

    return 0;



}