#include <stdio.h>



struct Car
{
    char brand[20];
    int year;
    float price;
};


int main(void)
{
    struct Car c;
    
    printf("Enter brand: ");
    scanf("%s",c.brand);

    printf("Enter year: ");
    scanf("%d",&c.year);

    printf("Enter price: ");
    scanf("%f",&c.price);

    printf("\nCar Info:\n");
    printf("Brand: %s\n",c.brand);
    printf("Year: %d\n",c.year);
    printf("Price: %.2f\n",c.price);

    return 0;

}