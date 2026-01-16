#include <stdio.h>

struct Student
{
    int grade;
};

int main()
{
    struct Student s[4];
    int maxIndex=0;

    for(int i=0;i<4;i++)
    {
        printf("%d. student's grade: ",i+1);
        scanf("%d",&s[i].grade);
    }

    for(int i=0;i<4;i++)
    {
        if (s[i].grade>s[maxIndex].grade)
        {
            maxIndex=i;
        }
    }

    printf("\nHighest grade: %d\n",s[maxIndex].grade);

    return 0;
}