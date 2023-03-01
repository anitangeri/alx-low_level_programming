#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode using rot13
 * @s: variable
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int a = 0, a2 = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != 0)
	{
		for (a2 = 0; a2 <= 52; a2++)
		{
			if (*(s + a) == alpha[a2])
			{
				*(s + a) = alpha2[a2];
				break;
			}
		}
				a++;
	}
		return (s);
}
