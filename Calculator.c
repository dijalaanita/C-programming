#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    float a,b;// why did you use double instead of any other datatype
    char operand;//variable confliction... this can be operator rather since operands are the numbers used in the operations
    float result;
    bool hey = true;

    while (hey)
    {
        printf("Enter your calculation here (ONLY ACCEPTING OPERANDS '+, -, *, AND /'):");
        scanf("%f %c %f", &a, &operand, &b);//check multiple input collections

    if (operand == '+')//your were not checking conditions as character literals '';
        {
        result = a + b;
        printf("%.1f + %.1f = %.1f", a, b, result);
        hey = false;
        }
    else if (operand == '-')
        {

            result = a - b;
        printf("%.1f - %.1f = %.1f", a, b, result);
        hey = false;
        }
    else if (operand == '*')
        {
            result = a * b;
            printf("%.1f * %.1f = %.1f", a, b, result);
            hey = false;
        }
    else if (operand == '/')
        {
            if (b == 0)
                {
                    printf("You can not use 0. Please use another value:");
                    scanf("%f", &b);
                }
                result = a / b;
                printf("%.1f / %.1f = %.1f\n", a, b, result);
                hey = false;
        }
    else
        {
            printf("Invlaid entry please try again\n\n");
        }
    }
    
    return 0;
        //in as much as this can still run, adding return statements will be the best thing to do...
}