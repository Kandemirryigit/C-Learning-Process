#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    float grade;
};


int main()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main14/data.txt","w");
    int n;
    

    printf("how much student are there: ");
    scanf("%d",&n);

    struct Student *arr=malloc(n*sizeof(struct Student));
    if(arr==NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i=0;i<n;i++)
    {
        printf("id: ");
        scanf("%d",&arr[i].id);

        printf("Grade: ");
        scanf("%f",&arr[i].grade);

    }


    for(int i=0;i<n;i++)
    {
        fprintf(fp,"Id: %d - Grade: %.2f\n",arr[i].id,arr[i].grade);
    }


    free(arr);
    fclose(fp);

    return 0;
}