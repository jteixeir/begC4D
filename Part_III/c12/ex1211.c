#include <stdio.h>

int	main()
{
	char	firstname[15];
	char	lastname[15];

	printf("What is your full name? ");
	scanf("%s %s", firstname, lastname);
	printf("Nice to meet you, %s %s\n", firstname, lastname);
	return(0);
}
