#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 40

int	main()
{
	int	n[40];
	int	r, x;

	//40 Random numbers from 0 - 100 
	srand((unsigned)time(NULL));
	for(x = 0; x < SIZE; x++)
	{
		n[x] = rand();
		n[x] %= 101;
	}	
	puts("Random numbers from 0 - 100");
	for(x = 0; x < SIZE; x++)
		printf("%d\t", n[x]);
	putchar('\n');

	//40 Random numbers sorted by smaller to largest
	int	before, after, temp;

	for(after = 0; after < SIZE; after++)
	{
		for(before = after + 1; before < SIZE; before++)
		{
			if(n[after] > n[before])
			{
				temp = n[after];
				n[after] = n[before];
				n[before] = temp;
			}
		}
	}
	
	//Print the sorted numbers
	puts("Random and sorted numbers from 0 - 100");
	for(x = 0; x < SIZE; x++)
		printf("%d\t", n[x]);
	putchar('\n');


	return(0);
}
