#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float membership = 2500.0, feeRate = 0.04, feeNum, newFees;
    int year = 6;

    for (int period = 1; period <= year; period++)
    {
        feeNum = membership * feeRate;
        newFees = feeNum + membership;
        printf("%d $%.1f\n",period, newFees);
    }
    
    
}