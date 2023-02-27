#include "main.h"
/**
 * print_rev - string on reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int rev = 0;
	int f;

	while (*s != '\0')
	{
		rev++;
		s++;
	}
	s--;
	for (f = rev; f > 0; f--)
	{
		_putchar(*s);
		s--;
	}
}
