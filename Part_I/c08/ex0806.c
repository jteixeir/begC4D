#include <stdio.h>
#define SECRET 13

int	main(void)
{
	int guess;

	printf("Can you guess the secret number: ");
	scanf("%d", &guess);
	if(guess == SECRET)
	{
		puts("You guessed it!");
		return(0);
	}
	if(guess != SECRET)
	{
		puts("Wrong!");
		return(1);
	}
}
