#include "main.h"

/**
 *_strcat - Write a function that concatenates two strings
 *@dest: This is the output dest
 *@src: This is the input source
 * Return: dest that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
