#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int f = 0;
	char *y = str;
	int d;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	f = longi - 1;
	for (d = 0 ; d <= f ; d++)
	{
		if (d % 2 == 0)
	{
		_putchar(str[d]);
	}
	}
	_putchar('\n');
}

