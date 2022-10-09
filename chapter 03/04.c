/*
Write a program to calculate income tax paid by an employer to the government as per $lakh mentioned bellow:

    income-$lakh    tax
    --------------------
    2.5L - 5.0L       5%
    5.0L - 10.0L     20%
    above 10L        30%

Note: there is no tax below 2.5L. Take income ammount as an input from the user.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = (0.05 * (income - 250000));
    }
    if (income > 500000 && income <= 1000000)
    {
        tax = 12500 + (0.20 * (income - 500000));
    }
    if (income > 1000000)
    {
        tax = 100000 + (0.3 * (income - 1000000));
    }

    printf("Your net income tax to be paid is: %f", tax);

    return 0;
}