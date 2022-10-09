/*
! Floyd's triangle
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include <stdio.h>

int main(void)
{
    int i, j, rows, number = 1;
    printf("Enter the value of rows (1-4 for batter result!): ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }

    return 0;
}