#include <stdio.h>

int	main()
{
	char	firstname[15];
	char	lastname[15];

	printf("What is your first name? ");
	scanf("%15s", firstname);
	printf("What is your last name? ");
	scanf("%15s", lastname);
	printf("Nice to meet you, %s %s\n", firstname, lastname);
	return(0);
}
