#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float membership = 2500.0, feeRate = 0.04, feeNum, newFees; //declare and initialize variables
    int year = 6;

    for (int period = 1; period <= year; period++)//iteration to update memebership price each year
    {
        //calculating the new fees for each year
        feeNum = membership * feeRate;
        newFees = feeNum + membership;
        printf("%d $%.1f\n",period, newFees);//displaying the year and the price increase

        // Update membership for the next iteration
        membership = newFees;
    }
    return 0;
    
}