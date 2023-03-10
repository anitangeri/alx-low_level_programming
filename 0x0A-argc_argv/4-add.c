#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int m, sum = 0;
	char *n;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = argv[i];

			for (m = 0; m < strlen(n); m++)
			{
				if (n[m] < 48 || n[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(n);
			n++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
