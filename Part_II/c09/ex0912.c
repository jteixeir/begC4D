#include <stdio.h>

int	main(void)
{
	char x1, x2, x3;

	for(x1 = 'A'; x1 <= 'Z'; x1++)
	{
		for(x2 = 'A'; x2 <= 'Z'; x2++)
		{
			for(x3 = 'A'; x3 <= 'Z'; x3++)
			{
				printf("%c%c%c ", x1, x2, x3);
			}
			putchar('\n');
		}
	}
	putchar('\n');
	return(0);
}
