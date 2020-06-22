#include <stdio.h>

void	vegas(void)
{
	int a;

	a = -10;
	printf("In the vegas function, a = %d\n", a);
}

int	main(void)
{
	int a;

	a = 365;
	printf("In the main funciton, a = %d\n", a);
	vegas();
	printf("In the main function, a = %d\n", a);
}
