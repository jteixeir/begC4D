#include <stdio.h>

int	main()
{
	char	president [4][2][11] = {"George", "John", "Thomas", "James", "Washington", "Adams", "Jefferson", "Monroe"};
	int	i;

	for(i = 0; i < 4; i++)
		printf("%-10s %-10s\n", president[i][0], president[i][1]);
	puts("\n");
	return(0);
}
