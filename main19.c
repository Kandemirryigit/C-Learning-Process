/*
Learn macro definition and reaching an array
*/


#include <stdio.h>

// This is macro definition 
// When I write MONTHS it means 12
#define MONTHS 12  // number of months in a year

int main()
{
    int days[MONTHS]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int index;

    for (index=0;index<MONTHS;index++)
    {
        printf("Month %d has %2d days\n",index+1,days[index]);
    }
}