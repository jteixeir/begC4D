#include <stdio.h>
#include <math.h>

int	main()
{
	int	a[] = {10, 12, 14, 15, 16, 18, 20};
	float	b[7];
	int	x;

	for(x = 0; x < 7; x++)
		b[x] = sqrt(a[x]);

	for(x = 0; x < 7; x++)
		printf("The square root of a[%d] is: %.2f\n", a[x], b[x]);

	return(0);
}
