#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;
    printf("Enter a charecter to check it's case type: ");
    scanf("%c", &ch);

    if (ch <= 'Z' && ch >= 'A')
    {
        printf("It's UPPERCASE.");
    }
    else if (ch <= 'z' && ch >= 'a')
    {
        printf("It's lowercase.");
    }
    else
    {
        printf("Wrong Charecter!");
    }

    return 0;
}