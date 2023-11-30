#include <stdio.h>
#include <stdlib.h>

float celcius (float F);

int main (void)
{
int F;

for (F = 0; F <= 20; F++)
{
    printf("%d %f\n", F, celcius(F));
}


}

float celcius (float F)
{
float C;
C = 5.0/9 * (F - 32);
return C;
}