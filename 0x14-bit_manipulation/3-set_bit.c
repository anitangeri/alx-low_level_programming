#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets a bit at index to 1
 * @n: pointer to the number
 * @index: index of the bit set to 1
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n |= (1UL << index);
	}
	return (1);
}
