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
  printf("The value of c is: %d", c);

  // reminder
  printf("5 when devided by 2 leaves a reminder of: %d.\n", 5 % 2);
  printf("25 when devided by 3 leaves a reminder of: %d\n", 25 % 3);

  int x, y;
  printf("Enter the value of x & y: ");
  scanf("%d %d", &x, &y);
  printf("%d when devided by %d leaves a reminder of: %d.\n", x, y, x % y);

  return 0;
}