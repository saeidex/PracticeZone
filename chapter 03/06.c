// Write a program to determine a charecter entered by the user is lowercase or not.

#include <stdio.h>

int main(void)
{
    char chr;

    printf("Enter a charecter: ");
    scanf("%c", &chr);

    if (chr >= 97 && chr <= 122)
    {
        printf("It's lowercase.");
    }
    else
    {
        printf("It's not lowercase.");
    }

    return 0;
}