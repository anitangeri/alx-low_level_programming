#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
* main - function that copies the content of a file to another file
* @argc: number argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int from_f, to_f, s_read, written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (1);
	}
	from_f = open(argv[1], O_RDONLY);
	if (from_f == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		return (1);
	}
	to_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_f == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		close(from_f);
		return (1);
	}
	do {
		s_read = read(from_f, buffer, BUFFER_SIZE);
		if (s_read == -1)
		{
			printf("Error: Can't read from file %s\n", argv[1]);
			close(from_f);
			close(to_f);
			return (1);
		}
		written = write(to_f, buffer, s_read);
		if (written == -1)
		{
			printf("Error: Can't write to %s\n", argv[2]);
			close(from_f);
			close(to_f);
			return (1);
		}
	} while (s_read > 0);
	close(from_f);
	close(to_f);
	return (0);
}
