#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float price, discountValue, quantityNumber, discountTotal,oldTotal;//declaring variables
    price = 99.0;//initializing price value

    printf("Please enter the number of packages you bought:");//asking and accepting values from user
    scanf("%f", &quantityNumber);
    /*
    oldTotal = price * quantityNumber;
    discountValue = 'the discount value' * oldTotal;
    discountTotal = oldTotal - discountTotal;
    */

//input invalidation statement
while (quantityNumber < 0)
    {
        printf("ERROR 404! ");
        printf("Please Re-enter the number of packages you bought:");//asking and accepting values from user
        scanf("%f", &quantityNumber);
    }

//loop for discounts
     if (quantityNumber < 10 || quantityNumber <= 0)
        {
            oldTotal = price * quantityNumber;
            printf("%s %.1f", "Your total price is $", oldTotal);
        }
   else if (quantityNumber >= 10 && quantityNumber <=19)
   {
    oldTotal = price * quantityNumber;
    discountValue = 0.20 * oldTotal;
    discountTotal = oldTotal - discountValue;

    printf("%s %.1f", "Your total price is $", discountTotal);
   }
        else if (quantityNumber >= 20 && quantityNumber <= 49)
        {
            oldTotal = price * quantityNumber;
            discountValue = 0.30 * oldTotal;
            discountTotal = oldTotal - discountValue;

            printf("%s %.1f", "Your total price is $", discountTotal);
        }
    
            else if (quantityNumber >= 50 && quantityNumber <= 99)
                {
                    oldTotal = price * quantityNumber;
                    discountValue = 0.40 * oldTotal;
                    discountTotal = oldTotal - discountValue;

                    printf("%s %.1f", "Your total price is $", discountTotal);
                }

                    else if (quantityNumber >= 100)
                        {
                            oldTotal = price * quantityNumber;
                            discountValue = 0.50 * oldTotal;
                            discountTotal = oldTotal - discountValue;

                            printf("%s %.1f", "Your total price is $", discountTotal);
                        }
                            
return 0;
   
}