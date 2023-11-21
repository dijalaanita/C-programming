#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float occupancyRate;
    int occupancySuites, floor, totalOccupancy = 0;
    const int TOTAL_SUITES = 120;

    puts("This program computes the occupancy rate of the hotel. ");
    
    for (floor = 10; floor < 16; floor++)
    {
        if (floor == 13)
        {
        continue;
        }

        printf("Enter suite number on floor %d", floor);
        scanf("%d",&occupancySuites);

        while (occupancySuites < 0 || occupancySuites > 20)
        {
            printf("the number of suites occupied should be between 0-20\n");
            printf("re-enter the number of suites occupied inthe floor %d:", floor);
            scanf("%d", &occupancySuites);
        }
        totalOccupancy += occupancySuites;        
    }

    occupancyRate = (float)totalOccupancy / TOTAL_SUITES * 100.0;

    printf("The occupancy rate is: %.2f", occupancyRate);
    return 0;
    
}