#include <stdio.h>
#include <ctype.h>

int	main()
{
	char phrase [] = "When in the Course of human evnts, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of which the Laws of Nature and of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the causes which impel them to the separation.";

	int index, alpha, blank, punct, low, up;

	alpha = blank = punct = low = up = 0;
	index = 0;
	while(phrase[index])
	{
		if(isalpha(phrase[index]))
			alpha++;
		if(isblank(phrase[index]))
			blank++;
		if(ispunct(phrase[index]))
			punct++;
		if(islower(phrase[index]))
			low++;
		if(isupper(phrase[index]))
			up++;
		index++;
	}
	printf("\"%s\"\n\n", phrase);
	puts("Statistics");
	printf("%d alphabetic char.\n", alpha);
	printf("%d blank char.\n", blank);
	printf("%d punct char.\n", punct);
	printf("%d lower case char.\n", low);
	printf("%d upper case char.\n", up);
	printf("%d total chars.\n", index);

	return(0);
}
