#include <stdio.h>

int	main(void)
{
	char firstname[15];

	printf("Type your first name: ");
	scanf("%s", firstname);
	printf("Pleased to meet you, %s.\n", firstname);
	return(0);
}
