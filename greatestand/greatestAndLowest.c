#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int least, greatest, newValue;

    printf("Enter your series of numbers between -98 to + infinity (-99 to end):");
    scanf("%d", &newValue);

    greatest = least = newValue;

    while (newValue != -99)
    {
        if(newValue > greatest)
        {
            greatest = newValue;
        }

        if(newValue < least)
        {
            least = newValue;
        }
        scanf("%d", &newValue);
    }

    if(greatest != -99)
    {
    printf("the greatest number is: %d\n", greatest);
    printf("The lowest number is: %d\n", least);
    }
    puts("thank you");
    return 0;
}