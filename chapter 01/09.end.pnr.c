#include <stdio.h>
/* #Simple interest calculator
  I = principle * rate(%) * time;
*/
int main(void)
{
  int I, p, r, t;

  printf("Enter the values of \n");
  printf("Principle: ");
  scanf("%d", &p);
  printf("Rate: ");
  scanf("%d", &r);
  printf("Year: ");
  scanf("%d", &t);

  I = (p * r * t) / 100;
  printf("Simple Interest: %d", I);

  return 0;
}