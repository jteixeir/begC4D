#include <stdio.h>

void	limit(int stop)
{
	int x;

	for(x = 0; x <= 100; x++)
	{
		printf("%d ", x);
		if(x == stop)
		{
			puts("You won!");
			return;
		}
	}
	puts("You won!");
}

int	main()
{
	int s;

	printf("Enter a stopping value (0 - 100): ");
	scanf("%d", &s);
	limit(s);
	return(0);
}
