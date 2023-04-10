#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Read text file and print to stdout
 * @filename: text file
 * @letters: number of letters to read
 * Return: number of bytes reador 0 when filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char buffer[BUFSIZ];

	if (file == NULL)
	{
		return (-1);
	}
	while ((letters = fread(buffer, sizeof(char), BUFSIZ, file)) > 0)
	{
		fwrite(buffer, sizeof(char), letters, stdout);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fclose(file);
	return (letters);
}
