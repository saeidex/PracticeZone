#include <stdio.h>

int main(void)
{
    int i, range;

    printf("Enter the starting line number: ");
    scanf("%d", &i);
    printf("Enter the ending line number: ");
    scanf("%d", &range);

    while (i <= range)
    {
        printf("This is line number %d \n", i);
        i++;
    }

    return 0;
}