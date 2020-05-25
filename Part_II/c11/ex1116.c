#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define WAVELENGTH 70
#define PERIOD .1

int	main()
{
	float radian, c, x1, x2;
	for(radian = 0; radian < PI * 2; radian += PERIOD)
	{
		c = cos(radian);
		//printf("radian: %f\n", radian);
		//printf("cosseno: %f\n", c);
		//c += 1.0;
		//printf("comp cos: %f\n", c);	
		
		if(c > 0)
		{
			for(x1 = 0; x1 < WAVELENGTH; x1++)
				putchar(' ');
			for(x2 = 0; x2 < c * WAVELENGTH; x2++)
				putchar('*');
		}
		else if(c < 0)
		{

			c *= -1;
			for(x1 = 0; x1 < WAVELENGTH -(c * WAVELENGTH); x1++)
				putchar(' ');
			for(x2 = 0; x2 < c * WAVELENGTH; x2++)
				putchar('*');
		}
		putchar('\n');
	}
	return(0);
}
