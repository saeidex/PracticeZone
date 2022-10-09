// Write a program to find out whether a student pass or fail, if it requires total 40% and 33% in each subject to pass. Answer 3 subject and take marks as an input from the user.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int Physics, Chemistry, Math, total;
    int perTotal;

    printf("Enter your mark of Physics: ");
    scanf("%d", &Physics);
    printf("Enter your mark of Chemistry: ");
    scanf("%d", &Chemistry);
    printf("Enter your mark of Math: ");
    scanf("%d", &Math);

    total = (Physics + Chemistry + Math);
    perTotal = (total / 3);

    /*
     printf("\n");
     printf("%d, %d, %d, %d, %d", Physics, Chemistry, Math, total, perTotal);
     printf("\n");
    */

    if (perTotal >= 40 && Physics >= 33 && Chemistry >= 33 && Math >= 33)
    {
        printf("Congratulations, you passed!");
    }
    else
    {
        printf("You falled!");
    }

    return 0;
}