#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    int x, y;
    for (x = 0; x < 11; x++)
    {
        for (y = 0; y < x; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
