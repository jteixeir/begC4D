#include <stdio.h>

int	main(void)
{
	int alpha, num;

	for(alpha = 'A'; alpha <= 'G'; alpha++)
	{
		for(num = 0; num <= 7; num++)
			printf("%c%d\t", alpha, num);
		putchar('\n');
	}
	return(0);
}
