#include <stdio.h>

int	main(void)
{
	char answer;
	puts("Are you brazilian? (yes/no)");
	scanf("%s", &answer);
	if(answer == 'y' || answer == 'Y')
		puts("Wow, we are from the same country!");
	else if(answer == 'n' || answer == 'N')
		puts("Welcome to my country");
	else
		puts("You should answer using \'y\' or \'n\'");
	return(0);

}
