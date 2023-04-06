#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit
 * @n: number
 * @index: index of the bit
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
