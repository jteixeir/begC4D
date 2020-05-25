#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int r, a, b;

	puts("100 random numbers between 0 - 20");
	for(a = 0; a < 100; a++)
	{
		r = rand() % 21;
		printf("%d\n", r);
	}
	return(0);
}
