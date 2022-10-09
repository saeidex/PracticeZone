// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main(void)
{
    long double num1, num2, num3, num4;

    printf("Enter your numbers bellow: \n");
    scanf("%Lf %Lf %Lf %Lf", &num1, &num2, &num3, &num4);

    long double num = num1;

    if (num1 > num)
    {
        num = num1;
    }
    if (num2 > num)
    {
        num = num2;
    }
    if (num3 > num)
    {
        num = num3;
    }
    if (num4 > num)
    {
        num = num4;
    }

    printf("\nHere, \"%.2Lf\" is the greatest number.", num);

    return 0;
}