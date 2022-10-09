/*
! Full piramid of *

         * 
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
*/

#include <stdio.h>

int main(void)
{
    int i = 1, j = 1, k = 1, rows, space;
    printf("Enter the value of rows: ");
    scanf("%d", &rows);
    //int space = rows - i;

    for (i; i <= rows; ++i)
    {
        //for (j; j <= rows; ++j)
        //{
            for (space = rows - i; space >= 1; --space)
            {
                printf(" ");
            }
            for (k = 1; k <= i; ++k)
            {
                printf("* ");
            }
            printf("\n");
        //}
    }

    return 0;
}