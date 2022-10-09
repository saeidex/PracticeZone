/*
Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("It's a leap year.");
    }
    else
    {
        printf("It's not a leap year.");
    }

    return 0;
}