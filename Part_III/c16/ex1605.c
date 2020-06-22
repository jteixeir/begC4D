#include <stdio.h>

void	proc(void)
{
	int a;
	printf("The value of variable is a %d\n", a);
	printf("Enter a new value: ");
	scanf("%d", &a);
}

int	main()
{
	puts("First call");
	proc();
	puts("Second call");
	proc();
	return(0);
}
