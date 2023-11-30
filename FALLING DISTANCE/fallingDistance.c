#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fallingDistance (int fallingTime);

int main (void)
{
    int fallingTime;
    
    for (fallingTime = 1; fallingTime <= 10; fallingTime++)
{
    printf("at %ds your distance is: %.2f metres\n",fallingTime, fallingDistance(fallingTime));
}


}

float fallingDistance (int fallingTime)
{
    float d,g = 9.8;
    d = 1.0/2 * g * pow(fallingTime,2);
    return d;
}