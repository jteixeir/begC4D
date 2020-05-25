#include <stdio.h>

void	graph(int count)
{
	int x;

	for(x = 0; x < count; x++)
		putchar('*');
	putchar('\n');
}

int	main()
{
	int value;

	value = 2;
	while(value <= 64)
	{
		graph(64);
		printf("Value is %d\n", value);
		value *= 2;
	}
}
