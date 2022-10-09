#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a value of a: ");
    scanf("%d", &a);

    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}