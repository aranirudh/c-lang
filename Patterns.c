#include <stdio.h>

// Practising star patterns.

int main()
{

    // printf("This program is working \n");

    // int limit  = 10;

    // for(int row = 1 ; row <= limit ; row ++) {

    //     for(int col = 1 ; col <= limit ; col ++)  {

    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    int length = 4;
    int breadth = 3;

    for (int i = 1; i <= breadth; i++)
    {

        for (int j = 1; j <= length; j++)
        {
            if (j == 1)
            {
                printf("*");
            }
            else if (j == length)
            {
                printf("*");
            }

            if (j != 1)
            {
                printf(" ");
            }

            if (j != length)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    // int n = 4;

    // for(int i = 1 ; i <= )

    return 0;
}