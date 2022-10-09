// ! Piramid of numbers
/*
?               *
?             * * *
?           * * * * *
?         * * * * * * *
?       * * * * * * * * *
?     * * * * * * * * * * *
?   * * * * * * * * * * * * *
 */

#include <stdio.h>

int main(void)
{
    int i, j, rows, space;
    printf("Enter the value of rows (1-5 for batter ressult): ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i)
    {
        for (space = 2 * i - 1; space <= rows * 2 - 2; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}