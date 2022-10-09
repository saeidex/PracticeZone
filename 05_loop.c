#include <stdio.h>

int main(void)
{
    int i, range;

    printf("Enter the starting line number: ");
    scanf("%d", &i);
    printf("Enter the ending line number: ");
    scanf("%d", &range);

    do
    {
        printf("This line number is: %d\n", i);
        i++;
    } while (i <= range);

    return 0;
}