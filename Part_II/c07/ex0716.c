#include <stdio.h>

int	main(void)
{
	char name [10];

	printf("Who are you?\n");
	fgets(name, 10, stdin);
	printf("Glad to meet you, %s.\n", name);
	return(0);
}
