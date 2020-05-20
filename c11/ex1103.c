#include <stdio.h>

int	main(void)
{
	int x;

	for(x=-5; x < 5; x++)
		printf("%d ", x);
	for(; x >= -5; x--)
		printf("%d ", x);
	putchar('\n');
	return(0);
}
