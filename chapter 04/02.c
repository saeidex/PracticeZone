#include <stdio.h>

int main(void)
{
    int i = 200;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 300);

    while (i <= 400)
    {
        printf("%d\t", i);
        i++;
    }

    return 0;
}