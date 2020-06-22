#include <stdio.h>

int	main()
{
	int h[4];

	printf("Your highest score is: ");
	scanf("%d", &h[0]);
	printf("Your second highest score is: ");
	scanf("%d", &h[1]);
	printf("Your third highest score is: ");
	scanf("%d", &h[2]);
	printf("Your fourth highest score is: ");
	scanf("%d", &h[3]);

	puts("Here is your high scores");
	printf("#1 %d\n", h[0]);
	printf("#2 %d\n", h[1]);
	printf("#3 %d\n", h[2]);
	printf("#4 %d\n", h[3]);

	return(0);
}
