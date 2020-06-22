#include <stdio.h>

int	main()
{
	struct president
	{
		char	name[40];
		int	year;
	};
	struct president first = {
		"George Washigton", 1789};
	struct president second = {
		"John Adams", 1797};
	printf("The first president of EUA was %s inaugurated in %d\n", first.name, first.year);
	printf("The second president of EUA was %s inaugurated in %d\n", second.name, second.year);
	return(0);
}
