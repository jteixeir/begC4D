#include <stdio.h>

int	main(void)
{
	int coordinate;

	printf("Input a target to coordinate: ");
	scanf("%d", &coordinate);
	if(coordinate >= -5 && coordinate <= 5)
		puts("Close enough!");
	else
		puts("Target is out of range!");
	return(0);
}
