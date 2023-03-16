#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
		return (NULL);

	while (i < j)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
