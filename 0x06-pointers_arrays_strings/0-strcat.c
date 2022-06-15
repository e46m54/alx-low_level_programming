#include "main.h"
/**
* _strcat - function that concatenates two strings.
* @dest: pointer to destination string.
* @src: pointer to source string.
* Return: pointer to destination string.
*/
char *_strcat(char *dest, char *src)
{
	int length, b;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (b = 0; src[b] != '\0'; b++, length++)
	{
		dest[length] = src[b];
	}
	dest[length] = '\0';
	return (dest);
}
