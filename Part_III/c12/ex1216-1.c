#include <stdio.h>

#define SIZE 21

int	main()
{
	char	text[] = "C Programming is fun!";
	char	temp;
	int	x;

	x = 0;
	puts("Original Array");
	printf("%s\n\n", text);
	while(text[x] != '\0')
	{
		if(text[x] > text[x+1])
		{
			temp = text[x+1];
			text[x+1] = text[x];
			text[x] = temp;
		}
		x++;
	}
	
	puts("Sorted Array");
	for(x = 0; x < SIZE; x++)
		printf("%c", text[x]);
	putchar('\n');
	return(0);
}
