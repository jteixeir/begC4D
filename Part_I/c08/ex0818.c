#include <stdio.h>

int	main(void)
{
	char let;

	printf("What is your grade (A - C): ");
	scanf("%c", &let);

	switch(let)
	{
		case 'A':
		       puts("Well done! You got the best grade!");
		       break;
		case 'B':
		       puts("That's good, but I know you can do better!");
		       break;
		case 'C':
		       puts("You should study a bit more to the next test!");
		       break;
		default:
		       puts("You didn't choose non of the options (A, B or C)");
	}
	return(0);
}
