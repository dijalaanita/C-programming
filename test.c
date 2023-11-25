#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int speed, time, distance;

    printf("enter speed");
    scanf("%d", &speed);
    printf("enter time");
    scanf("%d", &time);
    printf("-%5s %5s\n", "time", "distance");
    printf("------------\n");

    
    int hour;
    for( hour = 1; hour <= time; hour++)
    {
        distance = speed * hour;
        printf("-%5d %5d\n", hour, distance);
    }
    return 0;
    }