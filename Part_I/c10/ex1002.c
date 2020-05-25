#include <stdio.h>

void	prompt(void)
{
	printf("C:\\DOS> ");
}

void	busy(void)
{
	char	input [32];
	int	loop = 0;
	
	while(loop<5)
	{
		prompt();
		fgets(input, 31, stdin);
		loop++;
	}

}

int	main(void)
{
	busy();
}
