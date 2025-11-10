/*
- Take name,surname,age,weight,height inputs for 3 person and store them in an array
- calculate bmi value for given 3 person
- Show the values and the comment about their bmi value on the screen
*/


#include <stdio.h>
#include <string.h>


// When we work with arrays there is no need to use & when we try to take an input
// Because an array's itself is already an address so there is no need to specify it again


int main()
{
    char names[3][30];
    char surnames[3][30];
    int ages[3];
    float weights[3];
    float heights[3];
    float bmis[3];
    char comment[3][30];


    // To take name,surname,age information from keyboard and add them in the array
    for(int i=0;i<3;i++)
    {
        printf("\nWhat's your name: ");
        scanf("%s",names[i]);

        printf("What's your surname: ");
        scanf("%s",surnames[i]);

        printf("What's your age: ");
        scanf("%d",&ages[i]);

        printf("What's your weight(kg): ");
        scanf("%f",&weights[i]);

        printf("What's your height(m): ");
        scanf("%f",&heights[i]);

    }



    // To display names array on the screen
    printf("\nNames: ");
    for(int i=0;i<3;i++)
    {
        printf("[%s] ,",names[i]);
    }

    // To display surnames array on the screen
    printf("\nSurnames: ");
    for(int i=0;i<3;i++)
    {
        printf("[%s] ,",surnames[i]);
    }

    // To display ages array on the screen
    printf("\nAges: ");
    for(int i=0;i<3;i++)
    {
        printf("[%d] ,",ages[i]);
    }

    
    // To find bmi for each person
    for(int i=0;i<3;i++)
    {
        bmis[i]=weights[i]/(heights[i]*heights[i]);
    }

    // Give a comment based on values
   for(int i=0; i<3; i++)
    {
    if(bmis[i] < 18.5)
        strcpy(comment[i], "Underweight");
    else if(bmis[i] < 25)
        strcpy(comment[i], "Normal Weight");
    else if(bmis[i] < 30)
        strcpy(comment[i], "Overweight");
    else if(bmis[i] < 35)
        strcpy(comment[i], "Obese Class I");
    else if(bmis[i] < 40)
        strcpy(comment[i], "Obese Class II");
    else
        strcpy(comment[i], "Obese Class III");
    }   


    printf("\n");
    
    // To show each person's bmi values
    for(int i=0;i<3;i++)
    {
        printf("\nBmi value for %s %s -age %d - is: %.2f - %s -",names[i],surnames[i],ages[i],bmis[i],comment[i]);
    }


}