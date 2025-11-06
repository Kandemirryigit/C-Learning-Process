/*
find rectangle's perimeter and area values
*/


#include <stdio.h>

// %.2f means show 2 digit after .
// %.3f means show 3 digit afer .

// lets assume I have 5 digit in float but I don't wanna see all of them just wanna see 2 digit afer point then I can use %.2f 

int main()
{
    float width;
    float height;
    float area;
    float perimeter;

    printf("Width: ");
    scanf("%f",&width);

    printf("Height: ");
    scanf("%f",&height);

    area=width*height;
    perimeter=(width+height)*2;

    printf("Area is: %.2f\n",area);
    printf("Perimeter is : %.2f",perimeter);

}