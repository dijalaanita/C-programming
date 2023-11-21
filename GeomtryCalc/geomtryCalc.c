#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //decalre the variables
    float radius, circleArea, length, width, rectArea, height, base, triArea;
    int choice;
// title
    puts("This is a geometry calculator.\n");

    // looping the program after every successful calculations are done except for the exiting value
    while(1)
    {
//menu
    printf("GEOMETRY CALCULATOR\n\n");
    printf("1. Area of a circle\n");
    printf("2. Area of a rectanlge\n");
    printf("3. Area of a triangle\n");
    printf("4. Quit\n\n");
//ask the user for their choice
    puts("Enter choice (1-4):");
    scanf("%d", &choice);
    
    //the input validation for the choices
    while (choice < 1 || choice > 4)
        {
            printf("ERROR 404! Re-enter the number from the menu %d:", choice);
            scanf("%d", &choice);
        }

//switch statment for each choice from the user to be executed
    switch(choice)
    {
        case 1:
        
            printf("AREA OF A CIRCLE\n\n");
            printf("Enter your radius number: \n");
            scanf("%f", &radius);
                while (radius < 0)//if less than zero, the while loop will run, if not it will be ignored. 
                {
                    // Input validation: Check if the input is a valid non-negative
                    printf("Invalid input. Please enter a non-negative number: ");
                    scanf("%f", &radius);
                }
            circleArea = 3.14159 * powf(radius,2);//calculation for the area
            printf("The area of the circle is %.1f\n\n", circleArea);
            break;

        case 2:
        
            printf("AREA OF A RECTANGLE\n\n");
            printf("Enter your length number: \n");
            scanf("%f", &length);
                while (length < 0) //if less than zero, the while loop will run, if not it will be ignored. 
                {
                    // Input validation: Check if the input is a valid non-negative
                    printf("Invalid input. Please enter a non-negative number: ");
                    scanf("%f", &length);
                }
            printf("Enter your width number: \n");
            scanf("%f", &width);
                while (width < 0) //if less than zero, the while loop will run, if not it will be ignored. 
                {
                    // Input validation: Check if the input is a valid non-negative
                    printf("Invalid input. Please enter a non-negative number: ");
                    scanf("%f", &width);
                }
            rectArea = length * width;//calculation for the area
            printf("The area of the rectangle is %.1f\n\n", rectArea);
            break;
        
        case 3:
            printf("AREA OF TRIANGLE\n\n");
            printf("Enter your height number: \n");
            scanf("%f", &height);
                while (height < 0) //if less than zero, the while loop will run, if not it will be ignored. 
                {
                    // Input validation: Check if the input is a valid non-negative
                    printf("Invalid input. Please enter a non-negative number: ");
                    scanf("%f", &height);
                }
            printf("Enter your base number: \n");
            scanf("%f", &base);
                while (base < 0) //if less than zero, the while loop will run, if not it will be ignored. 
                {
                    // Input validation: Check if the input is a valid non-negative
                    printf("Invalid input. Please enter a non-negative number: ");
                    scanf("%f", &base);
                }
            triArea = 0.5 * (base * height);//calculation for the area
            printf("The area of the triangle is %.1f\n\n", triArea);
            break;

        case 4:
            printf("OVER AND OUT BYEE!");
            exit(0);//terminates the program
    }
    }
    }