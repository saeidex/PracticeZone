/*
! Pascal's triangle

    1
    1   1
    1   2   1
    1   3   3   1
    1   4   6   4   1
    1   5   10  10  5   1

                  1
               1   1
            1   2   1
         1   3    3   1
      1   4    6    4    1
*/

#include <stdio.h>
int main(void)
{
  int i, j, rows, space;
  printf("Enter the value of rows (1-5 for batter result!): ");
  scanf("%d", &rows);

  for (i = 1; i < rows; ++i)
  {
    for (space = rows - 1; space >= 1; space = 1)
    {
      printf("  ");
    }
    for (j = 1; j <= (4 * i) + 1; ++j)
    {
      if (j == (4 * i) + 1)
      {
        printf("X");
      }
      if (j != (4 * i) + 1)
      {
        printf(" ");
      }
    }

    printf("\n");
  }
  return 0;
}