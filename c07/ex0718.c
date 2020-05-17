#include <stdio.h>
#define INPUT_SIZE 10

int	main(void)
{
	char firstname[INPUT_SIZE];
	char lastname[INPUT_SIZE];

	printf("Type your first name: ");
	fgets(firstname, INPUT_SIZE, stdin);
	printf("Type your last name: ");
	fgets(lastname, INPUT_SIZE, stdin);
	printf("Pleased to meet you, %s%s.\n", firstname, lastname);
	return(0);
}
