//  Write a program to find the grade of a student given his marks board on bellow:
//  90-100    --> A
//  80-90     --> B
//  70-80     --> C
//  below 60  --> F

#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter your mark: ");
    scanf("%d", &marks);
    printf("Your marks is: %d\n", marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is: A");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("Your grade is: B");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("Your grade is: C");
    }
    else if (marks >= 0 && marks <= 69)
    {
        printf("Your grade is: F");
    }
    else
    {
        printf("Please enter the valied marks!");
    }

    return 0;
}