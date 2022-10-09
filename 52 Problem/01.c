/*
  !find odd-even
*/

#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter a number to check odd or even: ");
  scanf("%d", &x);

  if (x % 2 == 0)
  {
    printf("It's an Even number");
  }
  else
  {
    printf("It's an Odd number");
  }

  return 0;
}