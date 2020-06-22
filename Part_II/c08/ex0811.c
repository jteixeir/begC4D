#include <stdio.h>

int	main(void)
{
	int a, b;

	a = 6;
	printf("Choose a number: ");
	scanf("%d", &b);
	if (a > b)
		printf("%d is grater than %d.\n", a, b);
	else
		printf("%d is not greater than %d.\n", a, b);
	return(0);
}
