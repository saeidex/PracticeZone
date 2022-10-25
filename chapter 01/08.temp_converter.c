#include <stdio.h>

int main(void)
{
  float cels, fahr;
  printf("Enter the Temp in celcius: ");
  scanf("%f", &cels);
  fahr = (cels * 9 / 5) + 32;

  printf("The Temp in fahrenheit: %.2f", fahr);

  return 0;
}