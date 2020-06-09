#include <stdio.h>

int	main()
{
	struct player
	{
		char	name[12];
		int	highscore;
		float	hours;
	} player1, player2;

	printf("Enter the player's 01 name: ");
	scanf("%s", player1.name);
	printf("Enter their highs core: ");
	scanf("%d", &player1.highscore);
	printf("Enter how many hours %s played: ", player1.name);
	scanf("%f", &player1.hours);
	//player 2 data
	printf("Enter the player's 02 name: ");
	scanf("%s", player2.name);
	printf("Enter their highs core: ");
	scanf("%d", &player2.highscore);
	printf("Enter how many hours %s played: ", player2.name);
	scanf("%f", &player2.hours);
	printf("The player 01 %s has the high score of %d and played for %2.f hours!\n", player1.name, player1.highscore, player1.hours);
	printf("The player 02 %s has the high score of %d and played for %2.f hours!\n", player2.name, player2.highscore, player2.hours);
	return(0);
}
