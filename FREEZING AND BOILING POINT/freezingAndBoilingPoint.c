#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int temperature;//declare the variable

    printf("Enter a temperature: ");//ask and accept from the user
    scanf("%d", &temperature);

// loops checking and printing the materials boiling and freezing at the users temperature value
    if(temperature <= -362)
    {
        printf("oxygen will freeze at %d ºF\n", temperature);
    }

    if(temperature <= -173)
    {
        printf("Ethyl Alcohol will freeze at %d ºF\n", temperature);
    }

    if(temperature <= -38)
    {
        printf("water will freeze at %d ºF\n", temperature);
    }

    if(temperature >= -306)
    {
        printf("oxygen will boil at %d ºF\n", temperature);
    }

    if(temperature >= 172)
    {
        printf("Ethyl Alcohol will boil at %d ºF\n", temperature);
    }

    if(temperature >= 212)
    {
        printf("water will boil at %d ºF\n", temperature);
    }

    if(temperature >= 676)
    {
        printf("mecury will boil at %d ºF\n", temperature);
    }
    return 0;
}