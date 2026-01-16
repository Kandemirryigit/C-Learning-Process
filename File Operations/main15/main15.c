#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[50];
    char surname[50];
    float grade;
};



int main()
{
    int student;
    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/data.txt","w");

    printf("How much student are there: ");
    scanf("%d",&student);

    struct Student *arr=malloc(student*sizeof(struct Student));  // based on our answer "count of student" the malloc allocate memory
    if(arr==NULL)
    {
        printf("Memory cannot allocated");
        return 1;
    }


    for(int i=0;i<student;i++)
    {
        printf("Id: ");
        scanf("%d",&arr[i].id);

        printf("Name: ");
        scanf("%s",arr[i].name);

        printf("Surname: ");
        scanf("%s",arr[i].surname);

        printf("Grade: ");
        scanf("%f",&arr[i].grade);
        
    }

    for(int i=0;i<student;i++)
    {
        fprintf(fp,"Id: %d , Name: %s , Surname: %s , Grade: %.2f\n",arr[i].id,arr[i].name,arr[i].surname,arr[i].grade);
    }


    return 0;
}