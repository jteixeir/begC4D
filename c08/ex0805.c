#include <stdio.h>

int	main(void)
{
	int first, second;

	printf("Input the first value: ");
	scanf("%d", &first);
	printf("Input the second value: ");
	scanf("%d", &second);
	if(first < second)
		printf("%d is less than %d.\n", first, second);
	if(first > second)
		printf("%d is grater than %d.\n", first, second);
	if(first == second)
		printf("%d is equal to %d.\n", first, second);
	return(0);
	
}
