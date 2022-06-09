#include "main.h"
/**
* print_diagonal - prints a line.
* @n: number of \
* Return: void
*/
void print_diagonal(int n)
{
	int i, open;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (open = 0; open < i; open++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}









}
