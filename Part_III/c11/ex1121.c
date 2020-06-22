#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int guess, r, a;

	srand((unsigned)time(NULL));
	for(a = 0; a < 20; a++)
		r = rand();
	printf("Can you guess the secret number: ");
	scanf("%d", &guess);
	if(guess == r)
	{
		puts("You guessed it!");
		return(0);
	}
	if(guess != r)
	{
		puts("Wrong!");
		printf("The secret number is: %u\n", r);
		return(1);
	}
}
