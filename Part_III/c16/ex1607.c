#include <stdio.h>

int	age;
float	feet;

void	half(void)
{
	float a, h;
	a = (float)age/2.0;
	printf("Half your age is %.1f.\n", a);
	h = feet / 2.0;
	printf("Half of your height is %.1f.\n", h);
}

void	twice(void)
{
	age *= 2;
	printf("Twice your age is %d.\n", age);
	feet *= 2;
	printf("Twice of your height is %.1f.\n", feet);
}

int	main()
{
	printf("How old are you? ");
	scanf("%d", &age);
	printf("How tall are you in feet? ");
	scanf("%f", &feet);
	printf("You are %d years old and %.1f feet tall.\n", age, feet);
	half();
	twice();
	printf("But you are not really %d years old or %.1f feet tall.\n", age, feet);
	return(0);
}
