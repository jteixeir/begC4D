#include <stdio.h>

int	main(void)
{
	int a, b;

	puts("Enter a value for A: ");
	scanf("%d", &a);
	puts("Enter a value for B: ");
	scanf("%d", &b);
	if(a > b)
		printf("%d is larger.\n", a);
	else if(a > b)
		printf("Value %d is larger.\n", b);
	else
		printf("a and b are equal\n");
	return(0);
}
