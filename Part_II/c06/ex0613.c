#include <stdio.h>

int	main(void)
{
	unsigned int	ono;
	float		a, b, c;

	a = 20.5;
	b = 42.2;
	c = a / b;

	ono = -10;
	printf("The value of ono is %u.\n", ono);
	printf("The variable c is %f\n", c);
	return(0);
}
