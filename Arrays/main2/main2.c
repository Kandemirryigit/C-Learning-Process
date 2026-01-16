///////////////////////////////////////
// ADD VALUE FROM KEYBOARD TO THE ARRAY
///////////////////////////////////////



#include <stdio.h>

int main()
{
    int numbers[5];
    int sum=0;

    for(int i=0;i<5;i++)
    {
        printf("Number-%d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum+=numbers[i];
    }

    printf("{");
    for(int i=0;i<5;i++)
    {
        printf("%d,",numbers[i]);
    }
    printf("}");

    printf("\nSum of array's elements: %d",sum);

    return 0;
}