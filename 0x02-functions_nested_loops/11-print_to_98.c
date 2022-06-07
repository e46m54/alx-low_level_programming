#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98,
* @n: print from this number
*/
void print_to_98(int n)
{
	int p, o;

	if (n <= 98)
	{
		for (p = n; p <= 98; i++)
		{
			if (p != 98)
				printf("%d, ", p);
			else if (p == 98)
				printf("%d\n", p);
		}
	} else if (n >= 98)
	{
		for (o = n; o >= 98; o--)
		{
			if (o != 98)
				printf("%d, ", o);
			else if (o == 98)
				printf("%d\n", o);
		}
	}
/*bN*/
}
