#include <stdio.h>

int main(void)
{
    int i, range;
    printf("Enter the range you want: ");
    scanf("%d", &range);

    for (i = 1; i <= range; i++)
    {
        printf("No. %d\n", i);
    }

    return 0;
}