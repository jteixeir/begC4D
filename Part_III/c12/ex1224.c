#include <stdio.h>

#define SIZE 5

void	showarray(int array[]);
void	arrayinc(int array[]);

int	main()
{
	int n[] = {1, 2, 3, 5, 7};

	puts("Here is your array");
	showarray(n);
	arrayinc(n);
	showarray(n);
	return(0);
}

void	showarray(int array[])
{
	int x;

	for(x = 0; x< SIZE; x++)
		printf("%d\t", array[x]);
	putchar('\n');
}

void	arrayinc(int array[])
{
	int x;
	int y;

	for(x = 0; x < SIZE; x++)
		y = array[x] += 1;
}
