/*
- Take numbers form keyboard to an array
- Show an array's characters on the screen
- Find average of numbers
- Find the max value in the array
- Find the min value in the array
*/


#include <stdio.h>


int main(void)
{
    float number;
    float numbers[6];
    float sum=0;
    int count=0;
    float average=0;
    int y=0;

  
    
    // To add taken numbers to the numbers array
    for(y;y<6;y++)
    {
        printf("Number%d: ",y+1);
        scanf("%f",&numbers[y]);
        count++;
    }
    


    // To display the array on the screen
    printf("Array is: ");
    for (y=0;y<6;y++)
    {
        printf("[%.2f] , ",numbers[y]);
    }



    // To display average value on the screen
    for(y=0;y<6;y++)
    {
        sum+=numbers[y];
    }
    average=sum/count;
    printf("\nAverage is: %.2f",average);





    // To display max and min value on the screen
    float max=numbers[0];
    float min=numbers[0];

    for(y=1;y<6;y++)
    {
        if(numbers[y]>max)
            max=numbers[y];
        
        if(numbers[y]<min)
            min=numbers[y];
    }
    printf("\nMax value is: %.2f",max);
    printf("\nMin value is: %.2f",min);

}


