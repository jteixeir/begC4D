#include <stdio.h>

int	main()
{
	struct scores
	{
		char	name[40];
		int	score;
	};
	struct scores player[4];
	struct scores temp;
	int	x, a, b;

	for(x = 0; x < 4; x++)
	{
		printf("Enter the player's %d name: ", x + 1);
		scanf("%s", player[x].name);
		printf("Enter the highest score of player %d: ", x + 1);
		scanf("%d", &player[x].score);
	}

	for(a = 0; a < 4; a++)
	{
		for(b = a + 1; b < 4; b++)
		{
			if(player[a].score < player[b].score)
			{
				temp = player[a];
				player[a] = player[b];
				player[b] = temp;
			}
		}
	}

	puts("Player info");
	printf("#\tName\tScore\n");
	for(x = 0; x < 4; x++)
		printf("%d\t%s\t%d\n", x + 1, player[x].name, player[x].score);

	return(0);
}
