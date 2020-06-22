#include <stdio.h>

int	main()
{
	char	firstname[15];

	printf("What is your name? ");
	fgets(firstname, 16, stdin);
	printf("Nice to meet you, %s\n", firstname);
	return(0);
}
