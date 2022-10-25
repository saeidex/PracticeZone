#include <stdio.h>
/* #Simple interest calculator
  I = principle * rate(%) * time;
*/
int main(void)
{
  float I, p, r, t;

  printf("Enter the values of \n");
  printf("Principle: ");
  scanf("%f", &p);
  printf("Rate: ");
  scanf("%f", &r);
  printf("Year: ");
  scanf("%f", &t);

  I = (p * r * t) / 100;
  printf("Simple Interest: %.2f", I);

  return 0;
}