#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024
* Return: Always 0 as Success
*/
int main(void)
{
	unsigned long int mult3, mult5, mult;
	int i;

	mult3 = 0;
	mult5 = 0;
	mult = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			mult3 = mult3 + i;
		} else if ((i % 5) == 0)
		{
			mult5 = mult5 + i;
		}
	}
		mult = mult3 + mult5;

		printf("%lu\n", mult);
	return (0);
/*bN*/
}
