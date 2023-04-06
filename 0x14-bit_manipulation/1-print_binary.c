#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representative of a number
 * @n: number to print in binary
 * return 0
 */

void print_binary(unsigned long int n)
{
	int a = 63;
	for (a = 63; a >= 0; a--)
	{
		_putchar((n >> a) & 1 ? '1' : '0');
	}
	_putchar('\n');
}
