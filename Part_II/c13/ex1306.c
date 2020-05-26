#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	text[] = "tHIS IS A rANDOM tEXT!";
	char	c;
	int	i;

	printf("This is the original text: \n%s\n\n", text);
	i = 0;

	while(text[i])
	{
		if(islower(text[i]))
			text[i] = toupper(text[i]);
		else if(isupper(text[i]))
			text[i] = tolower(text[i]);
		else
			text[i] = text[i];
		i++;
	}
	printf("This is the modified text: \n%s\n\n", text);
	return(0);
}
