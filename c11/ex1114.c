#include <stdio.h>
#include <math.h>

int	main()
{
	float radius, degrees;

	printf("Input a float value for radius: ");
	scanf("%f", &radius);
	degrees = 57.2957795 * radius; 
	printf("%.2f radius it is the same of %.2f°", radius, degrees);
	putchar('\n');
	return(0);
}
