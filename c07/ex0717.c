#include <stdio.h>
#define INPUT_SIZE 3

int	main(void)
{
	char	name [INPUT_SIZE];

	printf("Who are you?\n");
	fgets(name, INPUT_SIZE, stdin);
	printf("Glad to meet you, %s.\n", name);
	return(0);
}
