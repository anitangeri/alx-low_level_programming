#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, v, x;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				v++;
				x = 1;
			}
		}

		if (x == 0)
			return (v);
	}

	return (v);
}
