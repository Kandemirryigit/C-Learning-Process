/*
this program shows yearly and monthly average rainfall
*/

#include <stdio.h>

int main()
{

    float totalRainInTheMonth[5] = { 0 };  // Array to store total rainfall for each year
    float totalRain = 0;    // Variable to store total rainfall across all years
    float averageRain = 0; // Variable to store average rainfall
	float sumMonths[12] = { 0 };  // Array to store sum of rainfall for each month across all years
	float monthAverage[12] = { 0 };  // Array to store average rainfall for each month

    // Rainfall data for 5 years (rows) and 12 months (columns)
    float rainfall[5][12] = 
    {
    {7.5, 4.2, 5.0, 4.7, 1.2, 8.5, 4.0, 9.2, 7.5, 1.0, 6.0, 3.0},  // Year 1
    {3.2, 5.1, 2.5, 4.8, 6.0, 7.2, 8.3, 2.1, 5.7, 4.0, 6.5, 7.1},  // Year 2
    {6.1, 4.9, 5.8, 3.6, 2.7, 9.0, 7.2, 6.3, 8.5, 5.1, 4.4, 2.2},  // Year 3
    {2.5, 3.7, 4.6, 7.9, 5.2, 6.8, 8.1, 7.4, 3.9, 2.6, 1.7, 4.5},  // Year 4
    {5.4, 6.2, 7.8, 3.3, 4.5, 2.1, 6.7, 5.5, 7.0, 8.2, 6.3, 5.9}   // Year 5
    };

    // Calculate yearly totals and average
    for (int year = 0; year < 5; year++)
    {
        float sum = 0;  // reset sum for each year

        for (int month = 0; month < 12; month++)
        {
            sum += rainfall[year][month];
        }
        totalRainInTheMonth[year] = sum;  // Store total rainfall for the year
    }

    for (int year = 0; year < 5; year++) {
        printf("Total rainfall in year %d: %.1f\n", year + 1, totalRainInTheMonth[year]);
    }

    for (int year = 0; year < 5; year++) {
        totalRain += totalRainInTheMonth[year];
        averageRain = totalRain / 5;

    }
    printf("\nThe yearly average is : %.2f", averageRain);


    

    // Calculate monthly averages
    for (int month = 0; month < 12; month++)
    {
        for (int year = 0; year < 5; year++)
        {
            sumMonths[month] += rainfall[year][month];
        }
        monthAverage[month] = sumMonths[month] / 5;
    }

    printf("\n\nThe monthly averages are : \n");
    for (int month = 0; month < 12; month++) {
        printf("Month %d: %.2f\n", month + 1, monthAverage[month]);
    }
    return 0;




}
