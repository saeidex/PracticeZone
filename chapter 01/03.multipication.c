#include <stdio.h>

int	main(void)
{
	int length, breadth;
	printf("Enter the value of length: ");
	scanf("%d", &length);
	printf("Enter the value of breadth: ");
	scanf("%d", &breadth);
	int area = length * breadth;

	printf("\nThe area of this rentengale is: %d.\n", area);

	return (0);
}