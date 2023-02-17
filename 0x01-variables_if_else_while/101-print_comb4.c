#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int i;
	int j;

	for (j = 0 ; j != 8 ; j++)
	{
		for (n = j + 1 ; n != 9 ; n++)
		{
			i = n + 1;
			do {
				putchar('0' + j);
				putchar('0' + n);
				putchar('0' + i);
				if (j != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}

