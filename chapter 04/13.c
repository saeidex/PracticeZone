/*
*                         1
*                     2  3  2
*                 3  4  5  4  3
*             4  5  6  7  6  5  4
*         5  6  7  8  9  8  7  6  5

*/

#include <stdio.h>
int main(void)
{
  int i, j, k, rows, space;
  printf("Enter the value of rows(1-5 for best result): ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; ++i)
  {
    for (space = i; space < rows; ++space)
    {
      printf("   ");
    }
    for (j = i; j <= (2 * i) - 1; ++j)
    {
      printf("%d  ", j);
    }
    for (k = j - 2; k >= i; k--)
    {
      printf("%d  ", k);
    }

    printf("\n");
  }
  return 0;
}