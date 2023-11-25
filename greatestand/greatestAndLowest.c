#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int least, greatest, newValue;//declare variables

    //ask and accept from user
    printf("Enter your series of numbers between -98 to +infinity (-99 to end):");
    scanf("%d", &newValue);

    greatest = least = newValue;//assign variables to each other

    //iteration
    while (newValue != -99)
    {
        //loop to replace the new value entered by the user with either greater or least until the end
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

    //sentinel value to print out the greatest and least value
    if(greatest != -99)
    {
    printf("the greatest number is: %d\n", greatest);
    printf("The lowest number is: %d\n", least);
    }
    puts("thank you");
    return 0;
}