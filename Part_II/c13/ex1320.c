#include <stdio.h>

char	ft_getchar()
{
	char c;

	c = getchar();
	while(getchar() != '.');
	return(c);
}

int	main()
{
	ft_getchar();
	putchar('\n');
	return(0);
}
