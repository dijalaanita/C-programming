#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float annualRate,initialAmount = 1000.0;
    int year = 10, period;

    // Prompt the user to enter an annual rate of inflation
    printf("Enter an annual rate of inflation between 1 to 15(in decimals): ");
    scanf("%f", &annualRate);

    if (annualRate < 0.01 || annualRate > 0.15)
    {
        printf("ERROR 404! Re-enter an annual rate of inflation between 1 to 15(in decimals): ");
        scanf("%f", &annualRate);
    }
    
    // Calculate and display the future values for the next 10 years
    if (annualRate >= 0.01 || annualRate <= 0.15)
    {
        for (period = 1; period <= year; period++)
        {
            initialAmount = initialAmount / (1 + (annualRate / 100.0));
            printf("Year %d: $%.2f\n", period, initialAmount);
        }
        
    }
    return 0;
}