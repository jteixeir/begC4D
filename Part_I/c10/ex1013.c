#include <stdio.h>

#define TRUE 1
#define FALSE 0

void	limit(int stop);
int	verify(int s);

void	limit(int stop)
{
	int x;
	
	for(x = 0; x <= 100; x++)
	{
		printf("%d ", x);
		if(x == stop)
		{
			puts("\nYou won!");
			return;
		}
	}
	puts("\nYou won!");
}

int	verify(int s)
{
	if(s >= 0 && s <= 100)
	{
		limit(s);
		return TRUE;
	}
	else
	{
		puts("You must choose a value from 0 to 100");
		return FALSE;
	}
}

int	main()
{
	int s;

	printf("Enter a stopping value (0 - 100): ");
	scanf("%d", &s);
	verify(s);
	return(0);
}
