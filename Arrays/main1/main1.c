//////////////////////////////////////
// USING ARRAY'S ELEMENTS
// FIND INT TYPE ARRAY'S ELEMENT COUNT
//////////////////////////////////////


#include <stdio.h>

int main()
{
    int numbers[5]={10,20,30,40,50};
    int sum=0;
    int countOfNumbers=sizeof(numbers)/sizeof(numbers[0]);  // If my array is integer than I can find the count of elements in array with this method

    for(int i=0;i<countOfNumbers;i++)
    {
        sum+=numbers[i];
    }

    printf("Sum of array's elements: %d",sum);

    return 0;
}


