//////////////////
// SEARCH IN ARRAY
//////////////////

#include <stdio.h>

int main()
{
    int numbers[6]={10,23,45,12,23,34};
    int target;

    printf("Enter number to search: ");
    scanf("%d",&target);

    int found=0;
    for(int i=0;i<6;i++)
    {
        if(numbers[i]==target)
        {
            printf("Number found at position %d\n",i+1);
            found=1;
        }
    }

    if(!found)
    {
        printf("Number not found");
    }


    return 0;

}