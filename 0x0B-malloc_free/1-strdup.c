#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string to duplicate
 * Return: a pointer to duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *str_new = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	str_new = (char *)malloc(n + 1 * sizeof(char));
	if (str_new != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			str_new[i] = str[i];
	} else
	{
		return (NULL);
	}
	str_new[i] = '\0';
	return (str_new);
}
