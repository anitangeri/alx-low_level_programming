#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: pointer
 * @text_content: content of file
 * Description: function that appends text to the end of a file
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int len, file, written;

	if (filename == NULL)
		return (-1);
	if (access(filename, W_OK) == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	else
	{
		len = strlen(text_content);
		written = write(file, text_content, len);
		close(file);
		if (written != len)
			return (-1);
	}
    return (1);
}

