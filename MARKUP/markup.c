#include <stdio.h>
#include <stdlib.h>

float calcRetail (float markup, float wholeSale);

int main(void)
{
    float wholeSale, markup;
    printf("Enter wholeSale cost: ");
    scanf("%f", &wholeSale);

    printf("Enter markup percentage in decimals: ");
    scanf("%f", &markup);

    printf("Your retail price is $%.2f", calcRetail(markup, wholeSale));
}

float calcRetail (float markup, float wholeSale)
{
    float retail;
    retail = (markup * wholeSale) + wholeSale;
    return retail;
}