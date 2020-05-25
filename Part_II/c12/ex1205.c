#include <stdio.h>

int	main()
{
	int h[10], x;

	for(x = 0; x < 10; x++)
	{
		printf("Your #%d higher score is: ", x+1);
		scanf("%d", &h[x]);
	}
	putchar('\n');
	puts("Here is your high scores");
	for(x = 0; x < 10; x++)
		printf("#%d %d\n", x+1, h[x]);

	return(0);
}
