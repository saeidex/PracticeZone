/*
  !finding Odd-Even
*/

#include <stdio.h>
int main(void)
{
  int T, i, n;
  printf("How many Numbers you want to check that it's Odd or Even: ");
  scanf("%d", &T);

  for (i = 1; i <= T; i++)
  {
    scanf("%d", &n);

    if (n % 2 == 0)
    {
      printf("%d is an Even number.\n", n);
    }
    else
    {
      printf("%d is an Odd number.\n", n);
    }
  }

  return 0;
}