#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int lowest, highest, nextValue;

    printf("Enter your series of numbers between -98 to + infinity (-99 to end):");
    scanf("%d", &nextValue);

    highest = lowest = nextValue;

    while (nextValue != -99)
    {
        if(nextValue > highest)
        {
            highest = nextValue;
        }

        if(nextValue < lowest)
        {
            lowest = nextValue;
        }
        scanf("%d", &nextValue);
    }

    if(highest != -99)
    {
    printf("the greatest number is: %d\n", highest);
    printf("The lowest number is: %d\n", lowest);
    }
    puts("thank you love");
    return 0;
}