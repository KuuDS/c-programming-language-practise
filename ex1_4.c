#include <stdio.h>
main () 
{
	int fahr, celsius;
	int lower, upper, step;

	lower = -50;
	upper = 100;
	step = 5;

	celsius = lower;
	printf("%s\t%s\n","CELSIUS", "FAHR");
	while ( celsius <= upper)
	{
	    fahr = celsius * 9 / 5 + 32;
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}

}
