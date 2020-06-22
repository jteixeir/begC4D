#include <stdio.h>

int	main()
{
	struct player
	{
		char	name[12];
		int	highscore;
	};
	struct player xbox;

	printf("Enter the player's name: ");
	scanf("%s", xbox.name);
	printf("Enter their highs core: ");
	scanf("%d", &xbox.highscore);
	printf("The player %s has the high score of %d\n", xbox.name, xbox.highscore);
	return(0);
}
