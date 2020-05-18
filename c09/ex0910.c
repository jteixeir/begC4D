#include <stdio.h>

int	main(void)
{
	char l;

	for(l = 'z'; l >= 'a'; l--)
		printf("%c", l);
	putchar('\n');
	return(0);
}
