#include <stdio.h>
#include <math.h>

#define VALUE 2

int	main()
{
	int c;
	int r;

	while(c <= 10)
	{
		r = pow(VALUE, c++);
		printf("%d ", r); 
	}
	putchar('\n');
	return(0);
}
