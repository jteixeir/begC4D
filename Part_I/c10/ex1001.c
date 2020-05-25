#include <stdio.h>

void	prompt();

void	prompt()
{
	printf("C:\\DOS> ");
}

int	main(void)
{
	int loop;
	char input [32];

	loop = 0;
	while(loop<5)
	{
		prompt();
		fgets(input, 31, stdin);
		loop++;
	}
}
