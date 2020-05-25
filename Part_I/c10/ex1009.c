#include <stdio.h>

float	convert(float f)
{
	float result;

	result = (f - 32) / 1.8;
	return(result);

}

int	main()
{
	float temp_f, temp_c;

	printf("Temperature in Fahreinheit: ");
	scanf("%f", &temp_f);
	temp_c = convert(temp_f);
	printf("%.1f Fahreinheit is %.1f Celcius\n", temp_f, temp_c);
	return(0);

}
