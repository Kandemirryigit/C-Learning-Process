////////////////
// COPY AN ARRAY
////////////////


#include <stdio.h>


int main()
{
    int original[5]={1,2,3,4,8};
    int copy[5];

    for(int i=0;i<5;i++)
    {
        copy[i]=original[i];
    }

    printf("Copied Array: ");
    for(int i=0;i<5;i++)
        printf("%d ",copy[i]);


    return 0;
}