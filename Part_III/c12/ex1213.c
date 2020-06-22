#include <stdio.h>

#define SIZE 6

int	main(void)
{
	int bubble[] = {95, 60, 6, 87, 59, 24};
	int inner, outer, temp, x;

	puts("Original Array");
	for(x = 0; x < SIZE; x++)
		printf("%d\t", bubble[x]);
	putchar('\n');
	for(outer = 0; outer < SIZE; outer++)
	{
		for(inner = outer + 1; inner < SIZE; inner++)
		{
			if(bubble[outer] > bubble[inner])
			{
				temp = bubble[outer];
				bubble[outer] = bubble[inner];
				bubble[inner] = temp;
				printf("%d\t%d\n\n", inner, outer);
			}
		}
	}
	puts("Sorted Array");
	for(x = 0; x < SIZE; x++)
		printf("%d\t", bubble[x]);
	putchar('\n');
}
