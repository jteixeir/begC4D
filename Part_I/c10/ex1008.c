#include <stdio.h>

void	graph(int count, char star)
{
	int x;

	for(x = 0; x < count; x++)
		putchar(star);
	putchar('\n');
}

int	main()
{
	int value;
	char star;

	star = '*';
	value = 2;
	while(value <= 64)
	{
		graph(value, star);
		printf("Value is %d\n", value);
		value *= 2;
	}
}
