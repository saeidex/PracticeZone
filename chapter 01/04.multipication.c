#include <stdio.h>

int	main(void)
{
	int radius, height;
	float pi = 3.1416, area, volume;

	printf("Enter the value of this circle's radius: ");
	scanf("%d", &radius);
	area = pi * radius * radius;
	printf("Area of this circle is: %.2f.\n\n", area);

	printf("Enter the value of this cylinder's radius: ");
	scanf("%d", &radius);
	printf("Enter the value of this cylinder's height: ");
	scanf("%d", &height);
	volume = pi * radius * radius * height;
	printf("Volume of this cylinder is: %.2f.\n", volume);

	return (0);
}