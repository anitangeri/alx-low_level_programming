#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks for little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *)&a;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
