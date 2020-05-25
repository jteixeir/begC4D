#include <stdio.h>

int	main(void)
{
	int c;

	printf("I'm waiting for a char: ");
	c = getc(stdin);
	printf("I waited for the %c char.\n", c);
	return(0);
}
