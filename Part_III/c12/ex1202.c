#include <stdio.h>

int	main()
{
	int h1, h2, h3, h4;

	printf("Your highest score is: ");
	scanf("%d", &h1);
	printf("Your second highest score is: ");
	scanf("%d", &h2);
	printf("Your third highest score is: ");
	scanf("%d", &h3);
	printf("Your fourth highest score is: ");
	scanf("%d", &h4);

	puts("Here is your high scores");
	printf("#1 %d\n", h1);
	printf("#2 %d\n", h2);
	printf("#3 %d\n", h3);
	printf("#4 %d\n", h4);

	return(0);
}
