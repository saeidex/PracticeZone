/*
!! Inverted half piramid of *

    * * * * *
    * * * *
    * * *
    * *
    *

*/

#include <stdio.h>

int main(void)

{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    int x, y;

    for (x = 1; x <= rows; ++x)
    {
        for (y = x - rows + 1; y <= 1; ++y)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}