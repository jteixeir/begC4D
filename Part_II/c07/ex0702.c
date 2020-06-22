#include <stdio.h>

int	main(void)
{
	int c;

	printf("I'm waiting for a char: ");
	c = getchar();
	printf("I waited for the %d char.\n", c);
	return(0);
}
