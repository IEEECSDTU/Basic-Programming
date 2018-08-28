/* Including Libraries */
#include <iostream.h>
using namespace std;
int main (void)

{
    int height, row, space, hash;

    do
    {
        /* Re-Prompt untill acquiring desired value of height (0-23)*/
        printf("Height: ");
        height = get_int();   /*Acquring height of half pyramid*/

    }
    while ((height < 0) || (height > 23));

    for (row = 1; row <= height; row++)
    {
        /*Loop for printing space(s) " "*/
        for (space = (height - row); space > 0; space--)
        {
            printf(" ");
        }

        for (hash = 1; hash <= (row + 1); hash++)
        {
            /*Loop for printing # */
            printf("#");
        }
        printf("\n");   /* Entering next Line*/

    }
}
