#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, count;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}

	for (count = 0; count < n; count++)
	{
		dest[m + count] = src[count];
		if (src[count] == '\0')
			count = n;
	}
	return (dest);
}
