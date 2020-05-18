#include <stdio.h>

int	main(void)
{
	int x;

	for(x = 10; x == 10; x = x + 1)
		puts("What are you lookin' at?");
	return(0);
}
