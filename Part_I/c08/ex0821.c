#include <stdio.h>

int	main(void)
{
	int a, b, larger;

	printf("Enter a value A: ");
	scanf("%d", &a);
	printf("Enter a value B: ");
	scanf("%d", &b);

	larger = (a > b) ? a : b;
	printf("Value %d is larger.\n", larger);
	return(0);
}
