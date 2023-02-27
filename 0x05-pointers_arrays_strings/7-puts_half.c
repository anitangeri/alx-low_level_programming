#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int d, n, longi;

	longi = 0;

	for (d = 0; str[d] != '\0'; d++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (d = n; str[d] != '\0'; d++)
		_putchar(str[d]);
	_putchar('\n');
}
