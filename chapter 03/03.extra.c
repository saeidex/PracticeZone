// Write a program to calculate percentage.

#include <stdio.h>
#include <math.h>

int main(void)
{

    float n, x;

    printf("How much the value of percentage: ");
    scanf("%f", &n);
    printf("Enter the number: ");
    scanf("%f", &x);

    float percentage = ((n / 100) * x);
    printf("%.2f", percentage);

    return 0;
}