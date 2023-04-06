#include "main.h"
#include <stdio.h>
/**
 * flip_bits - counts the number of bits
 * to get from one number to another
 * @n: number one
 * @m: number two
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int num = 0;

	while (a != 0)
	{
		a &= (a - 1);
		num++;
	}
	return (num);
}
