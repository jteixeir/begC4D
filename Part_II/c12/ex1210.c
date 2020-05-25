#include <stdio.h>

int	main()
{
	char	firstname[15];
	char	lastname[15];

	printf("What is your first name? ");
	fgets(firstname, 16, stdin);
	printf("What is your last name? ");
	fgets(lastname, 16, stdin);
	printf("Nice to meet you, %s %s\n", firstname, lastname);
	return(0);
}
