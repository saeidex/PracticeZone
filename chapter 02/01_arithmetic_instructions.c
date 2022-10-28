#include <stdio.h>
#include <math.h>

int main(void)
{
  int a, b;
  a = 64, b = 8;

  printf("The value of a+b is: %d.\n", a + b);
  printf("The value of a-b is: %d.\n", a - b);
  printf("The value of a*b is: %d.\n", a * b);
  printf("The value of a/b is: %d.\n", a / b);

  int z;
  printf("Enter the value of z: ");
  scanf("%d", &z);
  printf("The value of z*(a/b) is: %d.\n", z * (a / b));

  int c = z * b;
  printf("The value of c is: %d.\n\n", c);

  // reminder
  printf("5 when devided by 2 leaves a reminder of: %d.\n", 5 % 2);
  printf("25 when devided by 3 leaves a reminder of: %d.\n\n", 25 % 3);

  int x, y;
  printf("Enter the value of- \n");
  printf("x: ");
  scanf("%d", &x);
  printf("y: ");
  scanf("%d", &y);
  printf("%d when devided by %d leaves a reminder of: %d.\n\n", x, y, (x % y));

  /* there is  no operator to perform exponentiation
  ! Incorrect-->
  printf("The value of 5 ^ 4 is: %d.\n", 5 ^ 4); // will not produce 5 to the power 4!
  */
  printf("The value of 5 to the power 4 is: %.0f.\n", pow(5, 4));

  return 0;
}