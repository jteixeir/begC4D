#include <stdio.h>

int	main(void)
{
	int count;

	count = 0;
	for(;;)
	{
		printf("%d ", count);
		count += 1;
		if(count > 50)
			break;
	}
	putchar('\n');
	return(0);
}