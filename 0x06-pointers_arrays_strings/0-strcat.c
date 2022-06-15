#include "main.h"
/**
* _strcat - function that concatenates two strings.
* @dest: pointer to destination string.
* @src: pointer to source string.
* Return: pointer to destination string.
*/
char *_strcat(char *dest, char *src)
{
	char dest[MAX_SIZE], src[MAX_SIZE];

	_strcat(dest, src);

	_putchar("Concatenated string = %s", dest);

	return (dest);
}
