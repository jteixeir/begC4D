#include <stdio.h>

char	*binbin(int n);

int	main()
{
	int a, x, r1, r2, r3;

	a = 73;
	x = 170;

	printf("     %s %3d\n", binbin(a), a);
	printf("^    %s %3d\n", binbin(x), x);
	r1 = a ^ x;
	r2 = r1 ^ a;
       	r3 = r2 ^ a;	
	printf("r1 = %s %3d\n", binbin(r1), r1);
	printf("r2 = %s %3d\n", binbin(r2), r2);
	printf("r3 = %s %3d\n", binbin(r3), r3);
	return(0);
}

char	*binbin(int n)
{
	static char	bin[9];
	int		x;

	for(x = 0; x < 8; x++)
	{
		bin[x] = n & 0x80 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = '\0';
	return(bin);
}

