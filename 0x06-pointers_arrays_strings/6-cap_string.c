#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string
 * @entry: This is the input string
 * Return: String capitalized
 */
char *cap_string(char *n)
{
	int con, index, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	con = 32;

	for (index = 0; n[index] != '\0'; index++)
	{
		if (n[index] >= 'index' && n[index] <= 'z')
		{
			n[index] =  n[index] - con;
		}
		con = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == n[index])
			{
				con = 32;
				break;
			}
		}
	}
	return (n);
}
