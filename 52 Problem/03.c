/*
  //finding Odd or Even
  !!!Wrong code!!!
*/

/*
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
  int i, n;
  bool is_logged_in = true;
  if (is_logged_in)
  {
    printf("User logged in.");
  }
  else
  {
    printf("User logged out.");
  }

  return 0;
}
*/
#include <stdio.h>
int main(void)
{
  int T, i;
  char n;

  printf("Enter how many numbers you want to check: ");
  scanf("%d", &T);

  if (T >= 1 && T <= 100)
  {
    for (i = 1; i <= T; i++)
    {
      scanf("%s", &n);
      printf("\n\n %s \n\n", n);

      if (n % 2 == 0)
      {
        printf("It's an Even number.\n");
      }
      else
      {
        printf("It's an Odd number.\n");
      }
    }
  }
  else
  {
    printf("You can check 100 numbers at a time.");
  }

  return 0;
}