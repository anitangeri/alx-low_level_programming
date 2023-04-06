#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			conv_num = (conv_num << 1) | (*b - '0');
		}
	}
	if (!b)
		return (0);
	return (conv_num);
}

