#include <stdio.h>
#include <stdlib.h>

int main(void)
{

for (int i = 1; i < 13; i++)
{
    printf("\n\n");
    printf("On the ");

        switch (i) {
            case 1:
                printf("first");
                break;
            case 2:
                printf("second");
                break;
            case 3:
                printf("third");
                break;
            case 4:
                printf("fourth");
                break;
            case 5:
                printf("fifth");
                break;
            case 6:
                printf("sixth");
                break;
            case 7:
                printf("seventh");
                break;
            case 8:
                printf("eighth");
                break;
            case 9:
                printf("ninth");
                break;
            case 10:
                printf("tenth");
                break;
            case 11:
                printf("eleventh");
                break;
            case 12:
                printf("twelfth");
                break;
            default:
                printf("unknown");
        }

        printf(" day of Christmas, my true love sent to me:\n");

        // Print the gifts for each day
        switch (i) {
            case 12:
                printf("Twelve Drummers Drumming,\n");
            case 11:
                printf("Eleven Pipers Piping,\n");
            case 10:
                printf("Ten Lords a-Leaping,\n");
            case 9:
                printf("Nine Ladies Dancing,\n");
            case 8:
                printf("Eight Maids a-Milking,\n");
            case 7:
                printf("Seven Swans a-Swimming,\n");
            case 6:
                printf("Six Geese a-Laying,\n");
            case 5:
                printf("Five Gold Rings,\n");
            case 4:
                printf("Four Calling Birds,\n");
            case 3:
                printf("Three French Hens,\n");
            case 2:
                printf("Two Turtle Doves, and\n");
            case 1:
                printf("A Partridge in a Pear Tree.\n\n");
                break;
            default:
                printf("HEYYY\n\n");
        }
    }

    return 0;


}

