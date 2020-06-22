#include <stdio.h>

char	ft_getchar(void)
{
	char c;

	c = getchar();
	while(getchar() != '\n');
	return(c);
}

int	main()
{
	char first, second;

	printf("Type your first initial: ");
	first = ft_getchar();
	printf("Type your second initial: ");
	second = ft_getchar();
	printf("Your initials are '%c' and '%c'\n", first, second);
	return(0);
}
