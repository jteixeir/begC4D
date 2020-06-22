#include <stdio.h>

int	main()
{
	struct scores
	{
		char	name[32];
		int	scores;
	};
	struct	scores player[4];
	int	x;

	for(x = 0; x < 4; x++)
	{
		printf("Enter player %d: ", x + 1);
		scanf("%s", player[x].name);
		printf("Enter their score: ");
		scanf("%d", &player[x].scores);
	}
	puts("Player Info");
	printf("#\tName\tScore\n");
	for(x = 0; x < 4; x++)
	{
		printf("%d\t%s\t%5d\n", x+1, player[x].name, player[x].scores);
	}
	return(0);
}
