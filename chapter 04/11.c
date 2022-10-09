/*
! Full piramid of *

              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *
    * * * * * * * * * * *
*/

#include <stdio.h>

int main(void)
{
  int i, j, rows, space;
  printf("Enter the value of rows: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; ++i)
  {
    for (space = 2 * i - 1; space <= rows * 2 - 2; space++)
    {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++)
    {
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}
