/*
learning parameters and arguments in functions
*/


#include <stdio.h>


void multiple(float num1,float num2)
{
    float result;
    result=num1*num2;

    printf("Result is: %.2f\n",result);
}


void division(float num1,float num2)
{
    float result;
    result=num1/num2;

    printf("Result is: %.2f\n",result);
}



int main(void)
{
    multiple(20,10);
    division(20,10);

    return 0;

}