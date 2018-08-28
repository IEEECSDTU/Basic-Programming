#include <iostream.h>

using namespace std;
int main (void)
{

int n;
int i;

    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n<0 || n>23);


        for (int r=n-1; r>=0; r--)
        {

            for (int s=0; s<r;s++)
            {
                printf(" ");
            }
            for (int h=0; h<n-r; h++)
            {
                printf("#");
            }

            for (i=0; i<2; i++)
            {
                printf(" ");
            }

            for (int h=0; h<n-r; h++)
            {

                printf("#");
            }


        printf("\n");
        }
}