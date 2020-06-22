#include <stdio.h>

int	main(void)
{
	int a, b, c;

	printf("I'm waiting for three chars: \n");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("The three chars are \'%c\', \'%c\' and \'%c\'.\n",a,b,c);
	return(0);
}
