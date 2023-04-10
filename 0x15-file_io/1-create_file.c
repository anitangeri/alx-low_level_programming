#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file.
 * @filename: pointer
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, len, written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		 if (file < 0)
			 return (-1);
	}
	else
	{
		file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (file < 0)
			return (-1);
		len = strlen(text_content);
		written = write(file, text_content, len);
		if (written != len)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
