#include "main.h"
/**
* _puts - a function that prints a string
* @str: point to string
* Return: void
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
	_putschar(*str);
		i++;
		str++;
	}
	_putschar('\n');
}
