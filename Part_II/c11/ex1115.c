#include <stdio.h>
#include <math.h>

#define PI 3.14159 // defines an angle of 180° 
#define WAVELENGTH 70
#define PERIOD .1 //radians increment is 0.1 per cicle

int	main()
{
	float graph, s, x;
//graph is the position of the angle in radians. The goal is to reach PI == 180°
//s receive the result of sin, that means the shadow of the graph
//x is just a counter to the wave lenght
	for(graph = 0; graph < PI; graph += PERIOD)
	{
		s = sin(graph);
		//printf("radian: %f\n", graph);
		//printf("seno:%f\n", s);
		for(x = 0; x < s * WAVELENGTH; x++)
			putchar('*');
		putchar('\n');
	}
	return(0);
}
