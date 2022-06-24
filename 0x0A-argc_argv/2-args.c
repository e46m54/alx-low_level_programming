#include<stdio.h>
/**
* main - is main
* @args: counter
* @argv: arry
* Return: 0
*/
int main(int args, char *argv[])
{
	int i = 0;

	for (i = 0; i < args; i++)
		printf("\n%s", argv[i]);
	return (0);
}
