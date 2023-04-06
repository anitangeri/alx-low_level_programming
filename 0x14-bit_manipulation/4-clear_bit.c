#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of bit to 0
 * @n: pointer to the number
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = ~(1UL << index);

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n &= a;
	}
	return (1);
}
