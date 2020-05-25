#include <stdio.h>

int	main()
{
	char ttt[3][3][3];
	int x, y, z;
	
	for(x = 0; x < 3; x++)
		for(y = 0; y < 3; y++)
			for(z = 0; z < 3; z++)
				ttt[x][y][z] = '.';
	ttt[1][1][1] = 'X';

	puts("Ready to play 3D Tic-Tac-Toe?");
	for(x = 0; x < 3; x++)
	{
		printf("Level %d\n", x+1);
		for(y = 0; y < 3; y++)
		{
			for(z = 0; z < 3; z++)
				printf("%c\t", ttt[x][y][z]);
			putchar('\n');
		}
	}
	return(0);
}
